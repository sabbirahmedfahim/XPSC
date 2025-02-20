# 🌟 Prime Factorization of N  

## 🔢 What is Prime Factorization?  
Any number (except 1) can be expressed as a product of prime numbers.  
For example, **30** can be written as **2 × 3 × 5**.  

💡 **Fun Fact:** The prime factorization of a number is always **unique** (except for the order of factors). This is known as the **Fundamental Theorem of Arithmetic**.  

---

## 🧐 How to Find Prime Factors?  

We start dividing **from the smallest prime to the largest**.  
👉 **Why?** If we divide using larger numbers first, the quotient might still be divisible by smaller primes.  
However, if we follow a **small-to-large sequence**, we ensure that no further division is needed.  

For example:  
Prime factorization of **18** →  

1️⃣ **18 ÷ 2** = **9**  
2️⃣ **9 ÷ 3** = **3**  
3️⃣ **3 ÷ 3** = **1**  

So, the prime factors are **2, 3, 3**. ✅  

---

## ⚡ Why is Prime Factorization Useful?  

Prime factorization is a **powerful tool** and helps in:  

✔️ Finding divisors of a number  
✔️ Counting the total number of divisors  
✔️ Calculating the sum of divisors  
✔️ Decision-making for **GCD** & **LCM**  

---

## 🚀 Optimized Approach Using Sieve  

Using the **Sieve of Eratosthenes**, we can **precompute prime numbers** in **O(n log n)** time.  
Once we have the primes, the factorization process becomes much **faster** and **efficient**!  

---

## 🤓 Do You Know?  

In general, the total number of prime factors for numbers up to **1E9** is not greater than **30**, and for numbers up to **1E18**, it is not greater than **60-65**.  
This highlights the power of prime factorization and its efficiency for large numbers! 🚀

---
