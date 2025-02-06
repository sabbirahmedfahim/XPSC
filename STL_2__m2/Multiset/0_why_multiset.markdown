### ✨ Comparison of set and multiset in C++

`set` and `multiset` share **similar functions and properties**, with one key difference: `set` holds only **unique elements**, while `multiset` allows **duplicates**. Both structures have an insertion complexity of O(log N) as they maintain sorted order upon insertion.

| Feature                   | `set`                              | `multiset`                            |
|---------------------------|------------------------------------|---------------------------------------|
| **Sorting**               | Sorted                             | Sorted                                |
| **Element Uniqueness**    | Unique elements only              | Allows duplicates                     |
| **Insertion Behavior**    | Inserts only if not present       | Allows duplicate insertion            |

