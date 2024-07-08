# Maze Solver

This C++ program solves a maze using Depth-First Search (DFS) algorithm.

## Overview

The maze solver program allows you to input a maze represented by a grid, where:
- `0` represents a path
- `1` represents a wall
- `2` represents the goal

You start from a given position and attempt to find a path to the goal, avoiding walls.

## Features

- **Input:** Allows user to input maze dimensions, maze layout, and starting position.
- **Output:** Displays the maze before and after solving, showing the path from start to goal if found.
- **Algorithm:** Uses Depth-First Search (DFS) to explore possible paths in the maze.

## Usage

1. **Input Maze:** Enter the number of rows and columns, followed by the maze configuration (0 for path, 1 for wall, 2 for goal).
2. **Start Position:** Specify the starting position (row and column) from where the search begins.
3. **Output:** Displays the maze before attempting to solve and after attempting to find a path to the goal.

## Screenshots

### Initial State of the Maze or INPUT
![Initial State](/maze%20solver/image1.png)

### Solved Maze or OUTPUT
![Solved Maze](/maze%20solver/image2.png)

## Prerequisites

- C++ compiler
- Basic understanding of DFS algorithm

## How to Run

1. Compile the `maze_solver.cpp` file using a C++ compiler.
2. Execute the compiled program.
3. Follow the on-screen prompts to input the maze dimensions, layout, and starting position.

## Example

