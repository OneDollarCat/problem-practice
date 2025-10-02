# Keyword Cipher
A **Keyword Cipher** replaces each letter of a message with a letter from a shifted alphabet built using a keyword.

   1. Start with the keyword.

   2. Add the remaining letters of the alphabet (A–Z) in order, skipping any that already appeared in the keyword.

      - Example keyword: "KEYWORD"

      - Cipher alphabet: KEYWORDABCFGHIJLMNPQSTUVXZ

   3. Encrypt by replacing each letter in the message with the letter at the same position in the cipher alphabet.

      - Plain alphabet: ABCDEFGHIJKLMNOPQRSTUVWXYZ

      - Cipher alphabet: KEYWORDABCFGHIJLMNPQSTUVXZ

Write a function that takes a key and a message, and returns the encrypted message.
___
[Sloth Bytes](https://slothbytes.beehiiv.com)  
Issue: [September 30, 2025](https://slothbytes.beehiiv.com/p/random)
