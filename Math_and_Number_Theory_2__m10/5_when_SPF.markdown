# 🌟 Smallest Prime Factor (SPF)

## ⏳ When SPF?

- ✅ If you need to find the <span style="color: cyan;">**prime factorization of a single number**</span>, use **O(√N)** SPF factorization. (Without Precomputed SPF). 
- 🔥 If you need to find the <span style="color: orange;">**prime factorization of many numbers**</span>, use **Sieve-based SPF**, which is **faster**. (Precomputed Smallest Prime Factor)  

## 🔍 What is SPF?
The **Smallest Prime Factor (SPF)** of a number **N** is the smallest prime number that divides **N**.  
For example:  
- SPF of **10** is **2** (since 2 is the smallest prime divisor of 10).  
- SPF of **35** is **5** (since 5 is the smallest prime divisor of 35).  

## 🔢 Key Observation  
It can be **proved** that the **smallest prime factor (SPF) is unique** for each number.  
- When factorizing **18**:  
  - **18 / 2 = 9**, then **9 / 3 = 3**  
  - We **never re-encounter** **2** or **3** again.  
- This ensures that each number is factorized **optimally** without redundancy. 🚀 

## Numbers of Divisors

$$
d(n) = (e_1 + 1) \cdot (e_2 + 1) \cdots (e_k + 1)
$$

[detailed article...](https://cp-algorithms.com/algebra/divisors.html)

```cpp
for(auto [key, e] : mp) 
    {
        // cout << key << " -> " << val << nl;
        cnt *= (e+1);
    }
```

![alt text](image.png)

## Sum of Divisors

In general, for  

$$
n = p_1^{e_1} \cdot p_2^{e_2} \cdots p_k^{e_k}
$$  

we receive the formula:  

$$
\sigma(n) = \frac{p_1^{e_1 + 1} - 1}{p_1 - 1} \cdot \frac{p_2^{e_2 + 1} - 1}{p_2 - 1} \cdots \frac{p_k^{e_k + 1} - 1}{p_k - 1}
$$  

p -> prime factor
e -> exponent

[detailed article...](https://cp-algorithms.com/algebra/divisors.html)