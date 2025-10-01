# #️⃣ Valid Hex Code
## ❓ Problem Statement
### About
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
/* output = false
   reason: missing #
*/
```
___
*Paraphrased a *bit* by me
Sloth Bytes
