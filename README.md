# 🌀 Maze Solver in C++  

This project implements a **Maze Solver** in C++ using **DFS (Depth-First Search)** and **BFS (Breadth-First Search)** algorithms. It finds paths through a 2D maze and visualizes them in the console.  

---

## 📝 Features

- ✅ Solve a maze using **DFS (Backtracking)**  
- ✅ Find the **shortest path using BFS**  
- ✅ Visualize the path in the console using `*`  
- ✅ Works for any **N x M maze** (currently 5x5)  

---

## 🔑 Key Concepts & Notes

- **Maze Representation:**  
  - `1` = path  
  - `0` = wall  

- **Directions:**  
  - Up, Down, Left, Right  

- **DFS (Depth-First Search)**  
  - Explores all possible paths  
  - Uses **backtracking**  
  - May not give the shortest path  

- **BFS (Breadth-First Search)**  
  - Explores level by level  
  - Always finds the **shortest path**  

- **Important C++ Concepts Used:**  
  - `vector<pair<int,int>>` for storing paths  
  - 2D array for maze representation  
  - `queue` for BFS implementation  
  - `memset` for resetting visited arrays  
  - `reverse()` to reconstruct BFS path correctly  
  - Loops and indexing compatible with **C++11**  

- **Console Visualization:**  
  - `.` = path  
  - `#` = wall  
  - `*` = path found  

---

## 📂 Usage

1. Clone the repository:

```bash
git clone https://github.com/Sumit1164/Maze_Solver.git
