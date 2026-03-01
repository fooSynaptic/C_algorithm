# C Algorithm Repository

## Overview

This repository contains classic algorithm implementations in C and C++, including sorting algorithms, graph algorithms, data structures, and string processing algorithms.

## Algorithms Included

### Sorting Algorithms
- **Heap Sort** (`heap_sort.c`) - In-place comparison-based sorting with O(n log n) complexity
- **Merge Sort** (`merge_sort.c`) - Divide-and-conquer sorting algorithm with O(n log n) complexity

### Graph Algorithms
- **Dijkstra's Algorithm** (`Dijkstra.cpp`) - Shortest path algorithm for weighted graphs

### Data Structures
- **Linked List** (`LinkList.cpp`, `reverse_linklist.cpp`) - Singly linked list implementation with reversal
- **Sequential Stack** (`SqStack.cpp`) - Stack implementation using array

### String Algorithms
- **Longest Palindromic Substring** (`longest_palindrom.h`, `longest_palmseq.cpp`) - Dynamic programming solution
- **Palindrome Linked List** (`palindrome_num.cpp`) - Check if a linked list is a palindrome

### Utility
- **Array Maximum** (`max.cpp`) - Find the largest element in an array

## Compilation Instructions

### C Programs
```bash
# Compile C source files
gcc -std=c99 -Wall -o program_name source_file.c

# Example: Compile heap sort
gcc -std=c99 -Wall -o heap_sort heap_sort.c

# Example: Compile merge sort
gcc -std=c99 -Wall -o merge_sort merge_sort.c
```

### C++ Programs
```bash
# Compile C++ source files
g++ -std=c++17 -Wall -o program_name source_file.cpp

# Example: Compile Dijkstra's algorithm
g++ -std=c++17 -Wall -o dijkstra Dijkstra.cpp

# Example: Compile linked list
g++ -std=c++17 -Wall -o linklist LinkList.cpp
```

## Project Structure

```
C_algorithm/
├── README.md                 # This documentation file
├── Dijkstra.cpp             # Dijkstra's shortest path algorithm
├── heap_sort.c              # Heap sort implementation
├── merge_sort.c             # Merge sort implementation
├── LinkList.cpp             # Linked list implementation
├── reverse_linklist.cpp     # Linked list reversal
├── SqStack.cpp              # Stack implementation
├── longest_palindrom.h      # Longest palindrome header
├── longest_palmseq.cpp      # Longest palindrome implementation
├── palindrome_num.cpp       # Palindrome list checker
├── max.cpp                  # Find maximum in array
└── test.cpp                 # Test utilities
```

## Coding Standards

This repository follows consistent naming conventions:
- **Functions**: `snake_case` (e.g., `heap_sort()`, `merge_sort()`)
- **Variables**: `snake_case` (e.g., `arr`, `max_size`)
- **Classes/Structs**: `PascalCase` (e.g., `LinkNode`, `SqStack`)
- **Constants/Macros**: `UPPER_SNAKE_CASE` (e.g., `MAX_SIZE`, `MAX_INT`)
- **Global Variables**: Kept minimal, prefixed when necessary

## Usage Examples

### Heap Sort
```bash
./heap_sort
# Output: 0 1 2 3 4 5 6 7 8 9
```

### Merge Sort
```bash
./merge_sort
# Output: Sorted array elements
```

### Linked List Operations
```bash
./reverse_linklist
# Output: Original and reversed list
```

## Algorithm Complexities

| Algorithm | Time Complexity | Space Complexity | Stability |
|-----------|----------------|------------------|-----------|
| Heap Sort | O(n log n) | O(1) | No |
| Merge Sort | O(n log n) | O(n) | Yes |
| Dijkstra | O(V²) or O(E + V log V) | O(V) | - |

## Notes

- Some files include Chinese comments for educational purposes
- Error handling is implemented where applicable
- Memory management follows best practices (malloc/free)

## License

This project is for educational purposes.
