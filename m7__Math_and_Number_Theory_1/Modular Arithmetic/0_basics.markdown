```cpp
ADDITION ➕:
   (a + b) % mod
=> (a % mod + b % mod) % mod

Similarly,

SUBTRACTION ➖:
   (a - b) % mod
=> (a % mod - b % mod) % mod

MULTIPLICATION ✖️:
   (a * b) % mod
=> (a % mod * b % mod) % mod
```

### WHy modular arithmetic?

```cpp
Task: Find (a * b * c) % mod where a = b = c = 10⁹
```
Normally it we multiply them, we'll get 10²⁷ which is can't be stored even it long long format. That's why we use individual mod operations to avoid overflow. 💡

```cpp
   (a * b * c) % mod 
=> (a % mod * b % mod * c % mod) % mod
```

### Modular Field 🌐

```
25 % 10 = ?
```
here mod = 10 <br>
We'll get answer **between 0 to mod - 1** ***
```
25 % 10 = 5
```
No matter the input, the result will always be between 0 and mod - 1. This is known as the **modular field** for the particular value. 🌟

```
10¹⁸ % (10⁹ + 7)

Output will be between 0 and 10⁹ + 6. 🔢
```