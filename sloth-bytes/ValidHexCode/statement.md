# #️⃣ Valid Hex Code
Create a function that determines whether a string is a valid hex code.

A hex code must begin with a pound key # and is exactly 6 characters in length.

Each character must be a digit from 0-9 or an alphabetic character from A-F. All alphabetic characters may be uppercase or lowercase.
## Examples
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
[Sloth Bytes](https://slothbytes.beehiiv.com)  
Issue: [August 26, 2025](https://slothbytes.beehiiv.com/p/two-factor-codes)

