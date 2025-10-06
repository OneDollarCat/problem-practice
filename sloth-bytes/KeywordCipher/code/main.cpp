#include <iostream>
#include "keyword_cipher.hpp"
using namespace std;

int main() {
   cout << "Keyword: keyword    Message: abchij    Output: " << keywordCipher("keyword", "abchij") << "\n\n";
   
   cout << "Keyword: purplepineapple    Message: abc    Output: " << keywordCipher("purplepineapple", "abc") << "\n\n";
   
   cout << "Keyword: mubashir    Message: edabit    Output: " << keywordCipher("mubashir", "edabit") << "\n\n";
   
   cout << "Keyword: etaoinshrdlucmfwypvbgkjqxz    Message: abc    Output: " << keywordCipher("etaoinshrdlucmfwypvbgkjqxz", "abc") << "\n\n";
   
   cout << "Keyword: etaoinshrdlucmfwypvbgkjqxz    Message: xyz    Output: " << keywordCipher("etaoinshrdlucmfwypvbgkjqxz", "xyz") << "\n\n";
   
   cout << "Keyword: etaoinshrdlucmfwypvbgkjqxz    Message: aeiou    Output: " << keywordCipher("etaoinshrdlucmfwypvbgkjqxz", "aeiou") << "\n\n";
   
   return 0;
}