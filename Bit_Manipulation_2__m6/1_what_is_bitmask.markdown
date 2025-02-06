# 🎭 Bitmask  

- A **bit** is a binary digit that can be either `0` or `1`.  
- A **bitmask** is a sequence of bits (`0` and `1`) used to represent subsets of a set.  
 
Basically, we will follow the "take it or leave it" method to generate subsets of a set.  
If the number of elements in a set is `n`, the total number of subsets will be `2^n`  
(remember basic math from class six).  

For each of these `2^n` subsets, we will perform `n` operations to check inclusion,  
which results in a time complexity of `O(2^n * n)`.  
This is a very bad time complexity, as exponential growth is inefficient for large `n`.  

## 📘 Example  
Consider a set:  
**S = {1, 2, 3, 4, 5, 6}**  

### 🌟 Subset Representation  
- Subset **X = {1, 4, 5, 6}**  
  - 🟢 Bitmask: `100111`  
  - Represents the elements `{1, 4, 5, 6}` in the subset (positions with `1`).  

### 🎯 Other Subsets:  
- Subset **Y = {2, 5}**  
  - 🟡 Bitmask: `010010`  

- Subset **Z = {1, 6}**  
  - 🔵 Bitmask: `100001`  

---  

💡 **Tip:** Use bitmasks in programming to efficiently represent and manipulate subsets!

<br>
Subset Representation using bitmasks:

![alt text](image.png)