## Types
There are two types of `Priority Queue`:

- **Max Heap** 🔼: (1, 1, 2, 2, 3, 3, 3, 4)
- **Min Heap** 🔽: (4, 3, 3, 3, 2, 2, 1, 1)

## Properties
Elements are sorted in a priority queue because it maintains a heap data structure, whether in non-increasing or non-decreasing order. Duplicate values are allowed.

### Lesson 1 📚: 
The terms "increasing" and "decreasing" are misleading due to the occurrence of duplicate values. Instead, "non-increasing" and "non-decreasing" are more accurate.

### Lesson 2 📝: 

The primary structure works as a **Max Heap** represented by
### Max Heap
```cpp
   proirity_queue<int> pq;
```

For the **Min Heap**, just modify the primary structure as follows:

### Min Heap
```cpp
   priority_queue<int, vector<int>, greater<int>> pq;
```
