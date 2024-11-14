## 🔹 Two Pointers
## 🔸 Sliding Window (a subcategory of Two Pointers)

There are two types of Sliding Windows:
- 🔒 **Fixed Size**
- 🔄 **Variable Size**
- 
---

## ⚙️ Handling Integer Overflow in C++ (new lesson)
```cpp
int x = 1e5, y = 1e5;
// long long int sum = x * y; // overflow
long long int sum = 1LL * x * y; // 1LL -> typecasting
cout << sum << endl;    
```
