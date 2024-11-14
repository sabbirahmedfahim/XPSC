### Let's say an array of 7 integers is:  
![alt text](image-2.png)

<br>

## 🔍 Sliding Window Array Visualization

![alt text](image.png)

<br>

## ✨ When the Window is Ready to Make a Decision
The window is ready to "hit" and make a decision when it reaches the target size, which happens when:
<br>
`r - l + 1 == k` 
<br>
where:  
- **`r`** ➡️ Right index  
- **`l`** ➡️ Left index  
- **`k`** ➡️ Window size 
<br>
```cpp
if(r-l+1 == k) // window te hit korse, make dicision
{
    // window dicision
}
else 
{
    // move pointer
    r++; // for example
}
```

![alt text](image-1.png)

<br>

- **📏 Fixed-size sliding window**: Technique for analyzing contiguous subarrays of a fixed size.  
- **➡️ Window movement**: Slides across the array by removing the leftmost element and adding a new element on the right.  
- **⚡ Efficiency**: Avoids recalculating values for every subarray from scratch.  
- **🔢 Operations**: Commonly used for sum, max, min, or average of subarrays.  
- **⏱️ Time complexity**: O(n), as each element is added and removed only once.  
- **💡 Use cases**: Moving averages, pattern matching, substring analysis.

