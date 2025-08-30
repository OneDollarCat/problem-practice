# #️⃣ Valid Hex Code
## ❓ Problem Statement*
### About a hex code
A **hex color code** is a *6-character string* prefixed with a **hashtag #**, that *represents a color* using the **RGB (Red, Green, Blue) color model**.
### Properties of a hex code
- A hex code *must* begin with a **pound key `#`** and is *exactly* **6 characters long**.
- Each character must be a **digit from *0 - 9*** or an **alphabetic character from *A - F***.
- All *alphabetic characters* may be **uppercase** or **lowercase**.
### Task
Create a *function* that determines whether a string is a *valid **hex code***.
### Examples
``` C++
is_valid_hex_code("#CD5C5C");
// output = true

is_valid_hex_code("#EAECEE");
// output = true

is_valid_hex_code("#eaecee");
// output = true

is_valid_hex_code("#CD5C58C");
/* output = false
   reason: length exceeds 6
*/

is_valid_hex_code("#CD5C5Z");
/* output = false
   reason: not all alphabetic characters in A-F
*/

is_valid_hex_code("#CD5C&C");
/* output = false
   reason: contains unacceptable character
*/

is_valid_hex_code("CD5C5C");
/* output = ralse
   reason: missing #
*/
```
## 🤔 Problem Analysis
**Note**: I am analyzing with *C++* in mind.  
This problem requires a function which determines whether a passed string is a valid hex code or not, therefore this should return `true` or `false`, aka this is a `bool` function.
#### Steps
1. The function will first have to check if the string is 7 characters long (including the `#`), and starts with `#`, else it will have to return `false`.
