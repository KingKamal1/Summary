import turtle
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
t.speed(0)
col = ("yellow","red","pink","cyan","light green","blue")
for i in range(200):
    t.pencolor(col[i%6])
    t.circle(190-i/2,90)
    t.lt(90)
    t.circle(190-i/3,90)
    t.lt(60)
s.exitonclick()
#========================================================================
# AI algorithms
#========================================================================
# Breadth-First Search (BFS)
graph = {
    'S' : ['B','D','A'],
    'A' : ['C'],
    'B' : ['D'],
    'C' : ['G','D'],
    'D' : ['G'],
    # 'G' : []
}
def bfs(graph,start,goal):
    visited = []
    queue = [[start]]
    while queue:
        path = queue.pop(0)
        node = path[-1]
        if node in visited:
            continue
        visited.append(node)
        if node == goal:
            return path
        adj_nodes = graph.get(node,[])
        for node2 in adj_nodes:
            queue.append(path + [node2])
# Depth-First Search (DFS)
def dfs(graph,start,goal):
    visited = []
    stack = [[start]]
    while stack:
        path = stack.pop()
        node = path[-1]
        if node in visited:
            continue
        visited.append(node)
        if node == goal:
            return path
        adj_nodes = graph.get(node,[])
        for node2 in adj_nodes:
            stack.append(path + [node2])
# Uniform-Cost Search (UCS)
graph = {
    'S' : [('A',2),('B',3),('D',5)],
    'A' : [('C',4)],
    'B' : [('D',4)],
    'C' : [('D',1),('G',2)],
    'D' : [('G',5)]
    # 'G' : []
}
def path_cost(path):
    total_cost = 0
    for (node,cost) in path:
        total_cost += cost
    return total_cost,path[-1][0]
def ucs(graph,start,goal):
    visited = []
    queue = [[(start,0)]]
    while queue:
        queue.sort(key=path_cost)
        path = queue.pop(0)
        node = path[-1][0]
        if node in visited:
            continue
        visited.append(node)
        if node == goal:
            return path
        adj_nodes = graph.get(node,[])
        for (node2,cost) in adj_nodes:
            queue.append(path + [(node2,cost)])
# Best-First Search
graph = {
    'S' : [('A',5),('B',5)],
    'A' : [('G',5)],
    'B' : [('C',2), ('D',3)],
    'C' : [('G',4)],
    'D' : [('G',3)]
}
H_table = {
    'S' : 7,
    'A' : 6,
    'B' : 4,
    'C' : 3,
    'D' : 2,
    'G' : 0
}
def path_H_cost(path):
    last_node = path[-1][0]
    H_cost = H_table[last_node]
    return H_cost,last_node
def best_first_search(graph,start,goal):
    visited = []
    queue = [[(start,0)]]
    while queue:
        queue.sort(key=path_H_cost)
        path = queue.pop(0)
        node = path[-1][0]
        if node in visited:
            continue
        visited.append(node)
        if node == goal:
            return path
        adj_nodes = graph.get(node,[])
        for (node2,cost) in adj_nodes:
            queue.append(path + [(node2,cost)])
# A-Star Search
graph = {
    'S' : [('A',5),('B',5)],
    'A' : [('G',5)],
    'B' : [('C',2), ('D',3)],
    'C' : [('G',4)],
    'D' : [('G',3)]
}
H_table = {
    'S' : 7,
    'A' : 6,
    'B' : 4,
    'C' : 3,
    'D' : 2,
    'G' : 0
}
def path_F_cost(path):
    G_cost = 0
    for (node,cost) in path:
        G_cost += cost
    last_node = path[-1][0]
    H_cost = H_table[last_node]
    F_cost = G_cost + H_cost
    return F_cost,last_node
def a_star_search(graph,start,goal):
    visited = []
    queue = [[(start,0)]]
    while queue:
        queue.sort(key=path_F_cost)
        path = queue.pop(0)
        node = path[-1][0]
        if node in visited:
            continue
        visited.append(node)
        if node == goal:
            return path
        adj_nodes = graph.get(node,[])
        for (node2,cost) in adj_nodes:
            queue.append(path + [(node2,cost)])
#================================================================
# Minimax game
import game
def minimax(state):
    if game.terminal(state):
        return game.score(state)
    values = []
    for action in game.available_actions(state):
        next_state = game.next_state(state,action)
        val = minimax(next_state)
        values.append(val)
    if game.current_player(state) == 'X':
        return max(values)
    else:
        return min(values)
state = game.initial_state()
game.display(state)
while not game.terminal(state):
    player = game.current_player(state)
    if player == 'X':
        action = game.ai_action(state,minimax)
    elif player == 'O':
        action = game.human_action(state)
    state = game.next_state(state,action)
    game.display(state)
game.show_winner(state)
#================================================================
# Genetic Algorithm
import numpy as np
def init_pop(pop_size):
    return np.random.randint(8, size=(pop_size, 8))
initial_population = init_pop(4)
print(initial_population)
def calc_fitness(population):
    fitness_vals = []
    for x in population:
        penalty = 0
        for i in range(8):
            r = x[i]
            for j in range(8):
                if i == j:
                    continue
                d = abs(i - j)
                if x[j] in (r, r-d, r+d):
                    penalty += 1
        fitness_vals.append(penalty)
    return -1 * np.array(fitness_vals)
fitness_vals = calc_fitness(initial_population)
print(fitness_vals)
def selection(population, fitness_vals):
    probs = fitness_vals.copy()
    probs += abs(probs.min()) + 1
    probs = probs/probs.sum()
    N = len(population)
    indices = np.arange(N)
    selected_indices = np.random.choice(indices, size=N, p=probs)
    selected_population = population[selected_indices]
    return selected_population
selected_population = selection(initial_population, fitness_vals)
print(selected_population)
def crossover(parent1,parent2,PC):
    r = np.random.random()
    if r < PC:
        m = np.random.randint(1,8)
        child1 = np.concatenate([parent1[:m] + parent2[m:]])
        child2 = np.concatenate([parent2[:m] + parent1[m:]])
    else:
        child1 = parent1.copy()
        child2 = parent2.copy()
    return child1, child2
parent1 = selected_population[1]
parent2 = selected_population[2]
child1, child2 = crossover(parent1, parent2, pc=0.7)
print(parent1, '-->', child1)
print(parent2, '-->', child2)
def mutation(individual,pm):
    r = np.random.random()
    if r < pm:
        m = np.random.randint(8)
        individual[m] = np.random.randint(8)
    return individual
print(child1)
child_copy = child1.copy()
mutation(child_copy, pm=0.5)
print(child_copy)
def crossover_mutation(selected_pop, pc, pm):
    N = len(selected_pop)
    new_pop = np.empty((N, 8), dtype=int)
    for i in range(0, N, 2):
        parent1 = selected_pop[i]
        parent2 = selected_pop[i+1]
        child1, child2 = crossover(parent1, parent2, pc)
        mutation(child1, pm)
        mutation(child2, pm)
        new_pop[i] = child1
        new_pop[i+1] = child2
    return new_pop
import matplotlib.pyplot as plt
def eight_queens(pop_size, max_generations, pc=0.7, pm=0.01):
    # Initial population
    population = init_pop(pop_size)
    # Initialize best fitness, and best solution
    best_fitness_overall = float('-inf')
    best_solution = None
    # Initialize average fitness values
    avg_fitness_values = []
    # Repeat for max_generations iterations
    for i_gen in range(max_generations):
        # Calculate fitness
        fitness_vals = calc_fitness(population)
        # Store average fitness
        avg_fitness_values.append(fitness_vals.mean())
        # Keep track of the best fitness and best solution
        best_i = fitness_vals.argmax()
        best_fitness = fitness_vals[best_i]
        if best_fitness > best_fitness_overall:
            best_fitness_overall = best_fitness
            best_solution = population[best_i]
        # Print iteration number and best fitness
        print('\ri_gen = {:06}  f={:03}'.format(i_gen, best_fitness_overall), end='')
        # Check optimal solution
        if best_fitness == 0:
            print('\nFound optimal solution')
            break
        # Selection
        selected_pop = selection(population, fitness_vals)
        # Crossover and mutation
        population = crossover_mutation(selected_pop, pc, pm)
    # Plot average fitness curve
    n_iterations = len(avg_fitness_values)
    if n_iterations > 1:
        plt.xlabel('Iteration')
        plt.ylabel('Avg fitness')
        plt.plot(list(range(n_iterations)), avg_fitness_values)
        plt.show()
    # Print and return the best solution
    print()
    print('best solution:', best_solution)
    return best_solution
eight_queens(pop_size=1000, max_generations=10000, pc=0.7, pm=0.01)
#================================================================
# rename folder files based on thier index
import os
def rename_files(folder_path):
  files = os.listdir(folder_path)
  for index, file in enumerate(files):
    new_name = str(index).zfill(3)  # Adjust the number of zeros as needed
    os.rename(os.path.join(folder_path, file), os.path.join(folder_path, new_name))
# Replace 'your_folder_path' with the actual path to your folder
folder_path = './src/'
rename_files(folder_path)