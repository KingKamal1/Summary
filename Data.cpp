#include <iostream>
#include <cctype> // for isdigit
#include <cmath>  // for pow function
using namespace std;
class Stack
{
private:
    int top;
    int MAX_SIZE;
    int *items;

public:
    Stack()
    {
        top = -1;
        cout << "Enter the size of the stack : ";
        cin >> MAX_SIZE;
        items = new int[MAX_SIZE];
    }
    Stack(int size)
    {
        top = -1;
        MAX_SIZE = size;
        items = new int[MAX_SIZE];
    }
    bool is_full()
    {
        return (top == MAX_SIZE - 1);
    }
    bool is_empty()
    {
        return (top == -1);
    }
    void push(int item)
    {
        if (is_full())
        {
            cout << "Stack is Overflow" << endl;
        }
        else
        {
            top++;
            items[top] = item;
        }
    }
    int pop()
    {
        if (is_empty())
        {
            cout << "Stack is Underflow" << endl;
            return -1;
        }
        int item = items[top];
        top--;
        return item;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << items[i] << endl;
        }
    }
};
int evaluatePostfix(const string &expression)
{
    Stack stack;
    for (char c : expression)
    {
        if (isdigit(c))
        {
            stack.push(c - '0'); // Convert char to int
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            int operand2 = stack.pop();
            int operand1 = stack.pop();
            int result;

            switch (c)
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                if (operand2 != 0)
                {
                    result = operand1 / operand2;
                }
                else
                {
                    cerr << "Error: Division by zero\n";
                    exit(EXIT_FAILURE);
                }
                break;
            case '^':
                result = pow(operand1, operand2);
                break;
            default:
                cerr << "Error: Invalid operator\n";
                exit(EXIT_FAILURE);
            }
            stack.push(result);
        }
    }

    if (!stack.is_empty())
    {
        return stack.pop();
    }
    else
    {
        cerr << "Error: Invalid postfix expression\n";
        exit(EXIT_FAILURE);
    }
}
class CircularQueue
{
private:
    int front, rear, capacity;
    int *items;

public:
    CircularQueue(int size)
    {
        capacity = size;
        front = rear = -1;
        items = new int[capacity];
    }
    ~CircularQueue()
    {
        delete[] items;
    }
    bool is_empty()
    {
        return front == -1;
    }
    bool is_full()
    {
        return (rear + 1) % capacity == front;
    }
    void push(int item)
    {
        if (is_full())
        {
            cout << "Queue is full. Cannot add." << endl;
        }
        else
        {
            if (is_empty())
            {
                front = rear = 0;
            }
            else
            {
                rear = (rear + 1) % capacity;
            }
            items[rear] = item;
        }
    }
    int pop()
    {
        if (is_empty())
        {
            cout << "Queue is empty. Cannot remove." << endl;
            return -1;
        }
        else
        {
            int item = items[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % capacity;
            }
            return item;
        }
    }
    void display()
    {
        if (is_empty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            int i = front;
            do
            {
                cout << items[i] << " | ";
                i = (i + 1) % capacity;
            } while (i != (rear + 1) % capacity);
            cout << endl;
        }
    }
};
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class linked_list
{
private:
    Node *list;

public:
    linked_list()
    {
        list = nullptr;
    }
    void addFirst(int value)
    {
        Node *p = new Node(value);
        if (list == nullptr)
        {
            list = p;
        }
        else
        {
            p->next = list;
            list = p;
        }
    }
    void addLast(int value)
    {
        Node *p = new Node(value);
        if (list == nullptr)
        {
            list = p;
        }
        else
        {
            Node *q = list;
            while (q->next != nullptr)
                q = q->next;
            q->next = p;
        }
    }
    void addAfter(int value, int position)
    {
        Node *q = list;
        int i = 0;
        while (q != nullptr && i < position)
        {
            q = q->next;
            i++;
        }
        if (q == nullptr || i != position)
        {
            cout << "Position is not found\n";
            return;
        }
        Node *p = new Node(value);
        p->next = q->next;
        q->next = p;
    }
    int removeFirst()
    {
        if (list == nullptr)
        {
            cout << "List is empty\n";
            return -1;
        }
        else
        {
            int data = list->data;
            if (list->next == nullptr)
            {
                delete (list);
                list = nullptr;
            }
            else
            {
                Node *p = list;
                list = list->next;
                delete (p);
            }
            return data;
        }
    }
    int removeLast()
    {
        if (list == nullptr)
        {
            cout << "List is empty\n";
            return -1;
        }
        else
        {
            int data;
            if (list->next == nullptr)
            {
                data = list->data;
                delete (list);
                list = nullptr;
            }
            else
            {
                Node *q = list;
                while (q->next->next != nullptr)
                    q = q->next;
                data = q->next->data;
                delete (q->next);
                q->next = nullptr;
            }
            return data;
        }
    }
    int search(int value)
    {
        Node *q = list;
        int position = 0;
        while (q != nullptr && q->data != value)
        {
            q = q->next;
            position++;
        }
        if (q == nullptr)
            position = -1;
        return position;
    }
    void reverseData()
    {
        Node *current, *prev, *next;
        current = list;
        prev = nullptr;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        list = prev;
    }

    void removeData(int value)
    {
        if (list == nullptr)
        {
            cout << "Linked list is empty\n";
            return;
        }
        else if (list->data == value)
        {
            removeFirst();
            return;
        }
        Node *p = list;
        while (p->next != nullptr && p->next->data != value)
        {
            p = p->next;
        }
        if (p->next == nullptr)
        {
            cout << "Data not found\n";
            return;
        }
        Node *q = p->next;
        p->next = q->next;
        delete (q);
    }
    void display()
    {
        cout << "The List is : ";
        Node *p = list;
        while (p != nullptr)
        {
            cout << p->data << " | ";
            p = p->next;
        }
        cout << endl;
    }
    ~linked_list()
    {
        while (list != nullptr)
        {
            int temp = removeFirst();
        }
    }
};
class treeNode
{
public:
    int value;
    treeNode *leftChild;
    treeNode *rightChild;
};
class binary_tree
{
private:
    treeNode *root;

public:
    binary_tree()
    {
        root = nullptr;
    }
    treeNode *createNode(int data)
    {
        treeNode *p = new treeNode();
        p->value = data;
        p->leftChild = nullptr;
        p->rightChild = nullptr;
        return p;
    }
    void freeNode(treeNode *p)
    {
        delete (p);
    }
    void insertNode(int value)
    {
        treeNode *new_node = createNode(value);
        bool done = false;
        if (root == nullptr)
        {
            root = new_node;
            return;
        }
        treeNode *temp = root;
        while (!done)
        {
            if (new_node->value == temp->value)
            {
                cout << "the value is already exit" << endl;
                done = true;
            }
            else if (new_node->value > temp->value)
            {
                if (temp->rightChild == nullptr)
                {
                    temp->rightChild = new_node;
                    done = true;
                }
                temp = temp->rightChild;
            }
            else if (new_node->value < temp->value)
            {
                if (temp->leftChild == nullptr)
                {
                    temp->leftChild = new_node;
                    done = true;
                }
                temp = temp->leftChild;
            }
        }
    }
    void preOrder_traverse(treeNode *t)
    {
        if (t == nullptr)
        {
            cout << "the tree is empty" << endl;
            return;
        }
        if (t != nullptr)
        {
            cout << t->value << " |";
            preOrder_traverse(t->leftChild);
            preOrder_traverse(t->rightChild);
        }
    }
    void inOrder_traverse(treeNode *t)
    {
        if (t == nullptr)
        {
            cout << "the tree is empty" << endl;
            return;
        }
        if (t != nullptr)
        {
            inOrder_traverse(t->leftChild);
            cout << t->value << " |";
            inOrder_traverse(t->rightChild);
        }
    }
    void postOrder_traverse(treeNode *t)
    {
        if (t == nullptr)
        {
            cout << "the tree is empty" << endl;
            return;
        }
        if (t != nullptr)
        {
            postOrder_traverse(t->leftChild);
            postOrder_traverse(t->rightChild);
            cout << t->value << " |";
        }
    }
    void freeBST(treeNode *t)
    {
        if (t == nullptr)
        {
            return;
        }
        if (t->leftChild != nullptr)
        {
            freeBST(t->leftChild);
        }
        if (t->rightChild != nullptr)
        {
            freeBST(t->rightChild);
        }
        freeNode(t);
        return;
    }
};
int main()
{

    return 0;
}
