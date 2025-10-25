# 🌀 Maze Solver in C++  

A **console-based maze solver** implemented in C++ using **DFS (Depth-First Search)** and **BFS (Breadth-First Search)** algorithms.  
The program finds a path from the top-left to the bottom-right corner of a maze and displays it visually.  

---

## 📝 Features

- ✅ Solve a maze using **DFS (Backtracking)**  
- ✅ Find the **shortest path using BFS**  
- ✅ Console visualization using symbols  
- ✅ Works for any **N x M maze** (currently 5x5)  

---

## 🔑 Key Concepts & Notes

- **Maze Representation:**  
  - `1` = path (open space)  
  - `0` = wall (blocked)  

- **Directions:**  
  - ⬆ Up, ⬇ Down, ⬅ Left, ➡ Right  

- **DFS (Depth-First Search)**  
  - Explores **all possible paths**  
  - Uses **backtracking**  
  - May **not produce the shortest path**  

- **BFS (Breadth-First Search)**  
  - Explores **level by level**  
  - Always finds the **shortest path**  

- **C++ Concepts Used:**  
  - `vector<pair<int,int>>` for storing paths  
  - 2D arrays for the maze and visited cells  
  - `queue` for BFS  
  - `memset()` for resetting arrays  
  - `reverse()` for reconstructing BFS path  
  - Compatible with **C++11**  

- **Maze Visualization in Console:**  
  - `.` = path  
  - `#` = wall  
  - `*` = path found  

---

## 🎨 Example Maze & Output

**Maze Layout (1 = path, 0 = wall):**  
1 0 1 1 1

1 0 1 0 1

1 1 1 0 1

0 0 0 0 1

1 1 1 1 1


---



> ✅ Both paths are displayed with `*` marking the visited path. BFS guarantees the shortest path.  

---

## 📂 Usage

1. Clone the repository:

```bash
git clone https://github.com/Sumit1164/Maze_Solver.git


```



🎯 Future Improvements

Allow dynamic maze input from a file

Add graphical visualization

Handle larger mazes efficiently

Support diagonal movements
