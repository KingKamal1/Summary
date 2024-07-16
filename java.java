package summaries;

import java.util.Scanner;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JProgressBar;
import javax.swing.JRadioButton;
// Statments
import javax.swing.JTextField;

import java.awt.event.ActionEvent;
import java.sql.Connection;
import java.sql.DriverManager;

// delcaring a variable
        int variable1 = 0;
        double variable2 = 1;
        boolean variable3 = true;
        String variable4 = "Unknown";
        // casting data type
        int one = 1;
        double two = (double) one;
        int integerASCII = (int) 'a';
        String Number = "123";
        int numberValue1 = Integer.parseInt(Number);
        int numberValue2 = Integer.valueOf(Number);
        char Character = (char) 97;
        // print a value
        System.out.println(variable1);
        System.out.println(variable2 + " " + variable3 + " and " + variable4);
        System.out.println("the main sum of numbers is " + (one + two));
        System.out.print(numberValue1 + numberValue2 + integerASCII + Character);
        // take an input
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        // or
        String y = JOptionPane.showInputDialog("Enter your number");
        // Conditional Statments
        if (x > Integer.parseInt(y)) {
            System.out.println(x);
        } else if (x == Integer.parseInt(y)) {
            System.out.println(x + y);
        } else {
            System.out.println(y);
        }
        // or
        switch (x) {
            case 1:
                System.out.println(x);
                break;
            case 2:
                System.out.println(x / 2);
                break;
            default:
                System.out.println(y);
        }
        // loops
        for (int i = 0; i < args.length; i++) {
            System.out.println(args[i]);
        }
        // or
        while (x < 100) {
            System.out.println(x);
            x++;
        }
        // or
        do {
            System.out.println(x);
            x++;
        } while (x < 200);
        /*
         * The `static` and `public` keywords are two different access modifiers that
         * can be used to declare the `main()` method in Java.
         ** 
         * Static** means that the method belongs to the class itself, rather than to an
         * instance of the class. This means that the method can be called without
         * creating an instance of the class.
         ** 
         * Public** means that the method can be called from anywhere in the program,
         * regardless of the package or class in which it is defined.
         * 
         * The `main()` method is required to be both `static` and `public` in Java.
         * This is because the JVM needs to be able to call the `main()` method without
         * creating an instance of the class, and the `main()` method needs to be
         * accessible from anywhere in the program.
         * 
         * Here is an example of a valid declaration for the `main()` method:
         * 
         * ```java
         * public static void main(String[] args) {
         * // ...
         * }
         * ```
         * 
         * If we removed the `static` keyword, the JVM would not be able to call the
         * `main()` method without creating an instance of the class. If we removed the
         * `public` keyword, the `main()` method would only be accessible from within
         * the same class in which it is defined.
         * 
         * In practice, there is no difference between declaring the `main()` method as
         * `public static` or `static public`. The order of the access modifiers is
         * simply a matter of convention.
         */
        // The difference between declaring an array and creating an array is that
        // declaring an array simply reserves a name for the array variable. Creating an
        // array actually allocates memory for the array and initializes its elements.
        double[] myArray;// declare
        double[] myArray = new double[size];// create
        // to create two dimensional array
        int[][] Array = new int[size1][size2];
        for (double item : myArray) {
            System.out.println(item);
        }
        import java.util.Arrays;
        Arrays.sort(myArray);
    }
    // defining a class
    class Circle {
        double radius = 1.0;

        double getArea() {
            return radius * radius * 3.14;
        }
    }
    // creating an object
    Circle obj = new Circle();
    // accessing data
    obj.radius = 10;
    obj.getArea();
    // ========================================================================
    JFrame frame = new JFrame(); // to create a frame
    frame.setSize(600,800); // set the size
    frame.setTitle("title"); // set the title
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // when click x it close not make it hidden
    frame.getContentPane().setBackground(new Color(0,0,0)); // change the background color
    frame.setLayout(null); // when adding labels, they don't resize them selives
    frame.setVisible(true); // make it 
    // ================================
    JLabel label = new JLabel(); // to create a button
    label.setText("the text in the label"); // set the text of the label
    label.setHorizontalTextPosition(JLabel.CENTER); // set in right to left as itself
    label.setVerticalTextPosition(JLabel.TOP); // set in up to bottom as itself
    label.setHorizontalAlignment(JLabel.CENTER); // set in right to left as the label itself
    label.setVerticalAlignment(JLabel.TOP); // set in up to bottom as the label itself
    label.setForeground(new Color(0,255,0)); // set the color of the text
    label.setFont(new Font("MV Boli",Font.PLAIN,20)); // change the font type and size
    label.setBounds(x,y,width,height); // set the size of the label
    // ================================
    JPanel panel = new JPanel(); // a group of components
    panel.setLayout(new BorderLayout()); // to make it relative
    panel.setPreferredSize(new Dimension(x,y)); // the dimension of the panel
    // ================================
    JButton button = new JButton(); // to create a button
    button.addActionListener(void activePerfomed(ActionEvent e){
        if (e.getSource() == button){
            System.out.println("Text , Brooooooooo");
            button.setEnabled(false); // disable the button
        }
    }); // to do a funcitonality
    button.setFocusable(false); // to hide button border text
    // ================================
    // to make display flex system
    frame.setLayout(new FlowLayout(FlowLayout.CENTER,x,y));
    // ================================
    // to make display grid system
    frame.setLayout(new GridLayout(rows,cols,marX,marY));
    // ================================
    // to make a window close itself
    frame.dispose();
    // ================================
    // to add text input
    JTextField inputField = new JTextField();
    // to get its inner text
    inputField.getText();
    // ================================
    // to add checkbox
    JCheckBox checkBox = new JCheckBox();
    // to add the label of the ckeckbox
    checkBox.setText("I'm not a Robot!");
    // to change the icon
    checkBox.setIcon(icon);
    checkBox.setSelectedIcon(icon);
    // ================================
    /*
     * to make the choose option only one do the next
     * ButtonGroup group = new ButtonGroup();
     * group.add(button1);
     */
    // to add radio box
    JRadioButton radioButton = new JRadioButton("Label text of the radio");
    // ================================
    // to make a list of items
    String[] arrayOfStrings = { "option1", "option2", "option3" };
    JComboBox list = new JComboBox<>(arrayOfStrings);
    // to get its value
    list.getSelectedItem();
    // to allow search by writing
    list.setEditable(true);
    // to insert a value in specified index
    list.insertItemAt(value,index);
    // ================================
    JProgressBar bar = new JProgressBar();
    bar.setValue(0); // the progress value
    bar.setBounds(x,y,width,height); // the position and the dimensions
    bar.setStringPainted(true); // to make the progress of the number appear
    bar.setString("Done!"); // the string in the progress of the number
    // ================================
    // to make a menu bar like   ||   File  Edit  Selection  View  Go  Run  Terminal  Help
    JMenuBar menuBar = new JMenuBar();
    // to make the first choise for example
    JMenu fileMenu = new JMenu("File");
    // to make the drop menu that will be added to fileMenu
    JMenuItem saveFile = new JMenuItem("Save");
    JMenuItem openFile = new JMenuItem("Open file");
    // add in sequence
    fileMenu.add(saveFile);
    fileMenu.add(openFile);
    menuBar.add(fileMenu); // the menu in the top Bar
    // to make a shortcut
    fileMenu.setMnemonic(KeyEvent.VK_letterInCapitalState);
    openFile.setMnemonic(KeyEvent.VK_letterInCapitalState);
    // ================================
    // to choose a file in gui
    JFileChooser fileChooser = new JFileChooser();
    fileChooser.showOpenDialog(null); // this return 0 if you choosed a file and 1 if you canceled
    JFileChooser.APPROVE_OPTION; // this return 0 if you choosed a file and 1 if you canceled
    fileChooser.getSelectedFile().getAbsolutePath(); // return the absolute path of the file
    // ================================
    // to respond to key hit
    frame.addKeyListener(frame);
    e.getKeyChar(); // return the character
    e.getKeyCode(); // return the ASCII code of the button
    // ================================
    // to set the icon of the logo
    ImageIcon image = new ImageIcon("link");
    frame.setIconImage(image.getImage());
    // to add label
    frame.add(label);
    // to add panel
    frame.add(panel);
    // =========================================
    
}