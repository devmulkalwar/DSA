# Unit I: Basic Data Structures in C++
---
# Index Table for Unit I: Basic Data Structures in C++

| **Section**               | **Topic**                                         | **Subtopics**                                    | **Page/Section** |
|---------------------------|---------------------------------------------------|-------------------------------------------------|------------------|
| **1. Introduction**       | Data Structures                                   | Primitive and Non-Primitive Data Types          | 1.1              |
|                           |                                                   | Abstract Data Types (ADTs)                     | 1.2              |
| **2. Arrays**             | Definition of Arrays                              | -                                               | 2.1              |
|                           | Static and Dynamic Arrays                         | -                                               | 2.2              |
| **3. Types of Arrays**    | One-Dimensional Arrays                            | -                                               | 3.1              |
|                           | Two-Dimensional Arrays                            | -                                               | 3.2              |
|                           | Multi-Dimensional Arrays                          | -                                               | 3.3              |
| **4. Array Representation** | Memory Representation                          | Row-Major Order                                 | 4.1              |
|                           |                                                   | Column-Major Order                              | 4.2              |
| **5. Operations**         | Traversing an Array                               | -                                               | 5.1              |
|                           | Insertion of Elements in an Array                 | -                                               | 5.2              |
|                           | Deletion of Elements from an Array                | -                                               | 5.3              |
|                           | Searching Elements in an Array                    | -                                               | 5.4              |
| **6. Algorithms**         | Traversing an Array                               | -                                               | 6.1              |
|                           | Inserting an Element                              | -                                               | 6.2              |
|                           | Deleting an Element                               | -                                               | 6.3              |
|                           | Searching an Element                              | -                                               | 6.4              |


## 1. Introduction to Data Structures

### 1.1 Primitive and Non-Primitive Data Types
- **Primitive Data Types**: Basic built-in types (e.g., `int`, `float`, `char`, `bool`).
- **Non-Primitive Data Types**: Derived (e.g., Arrays, Pointers) and User-defined (e.g., Classes, Structures).

### 1.2 Abstract Data Types (ADTs)
- ADTs define **what** operations are performed, not **how**.
- Examples: **List, Stack, Queue, Set, Map**.

---

## 2. Arrays

### 2.1 Definition of Arrays
- A collection of elements of the same type stored in contiguous memory.
- **Syntax**: `type arrayName[size];`

### 2.2 Static and Dynamic Arrays
- **Static Arrays**: Fixed size, allocated at compile-time.
- **Dynamic Arrays**: Size can change, allocated at runtime using `new`.

---

## 3. Types of Arrays

### 3.1 One-Dimensional Arrays
- Linear collection of elements.  
  **Example**: `int arr[5] = {1, 2, 3, 4, 5};`

### 3.2 Two-Dimensional Arrays
- Matrix-like structure, elements arranged in rows and columns.  
  **Example**: `int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};`

### 3.3 Multi-Dimensional Arrays
- Arrays with more than two dimensions.  
  **Example**: `int arr[2][3][4];`

---

## 4. Representation of Arrays in Computer Memory

### 4.1 Row-Major Order
- Elements stored row by row in contiguous memory.

### 4.2 Column-Major Order
- Elements stored column by column in contiguous memory.

---

## 5. Operations on Arrays

### 5.1 Traversing an Array
- Visiting each element in the array sequentially.

### 5.2 Insertion of Elements
- Adding a new element at a specific position.

### 5.3 Deletion of Elements
- Removing an element at a specific position and shifting elements.

### 5.4 Searching Elements
- Finding the index of a specific element.

---

## 6. Algorithms for Array Operations

### 6.1 Algorithm for Traversing an Array
1. Initialize loop variable.
2. Access each element sequentially.
3. Display each element.

### 6.2 Algorithm for Inserting an Element
1. Validate position.
2. Shift elements to the right.
3. Insert the new element at the desired position.

### 6.3 Algorithm for Deleting an Element
1. Search for the element.
2. Shift subsequent elements to the left.
3. Decrease the array size.

### 6.4 Algorithm for Searching an Element
1. Traverse the array.
2. Compare each element with the target.
3. Return the index if found.

---
