# Alternate Case Pairs
You are given a string `S` consisting of English letters.  
Your task is to calculate the **number of instances where two adjacent characters have alternating cases** (one uppercase and the next lowercase, or one lowercase and the next uppercase).

---

## 📥 Input Format
- A single line containing the string `S`.

---

## 📤 Output Format
- Print a single integer: the number of alternating-case adjacent pairs.

---

## 🖥️ Examples

### Example 1

Input: aAaaA

Output: 3

### Example 2

Input: HeLLo

Output: 3

---

## 📌 Notes
- Only English letters (a–z, A–Z) are considered.
- Adjacent characters are compared in pairs: `(S[i], S[i+1])`.

---

## 🚀 Constraints
- `1 ≤ |S| ≤ 10^5`  
- String contains only alphabetic characters (no spaces or digits).
