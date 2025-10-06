#include "keyword_cipher.hpp"
using namespace std;

string keywordCipher(string keyword, string message) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string rest = alphabet;
    for (int i=0; i<rest.size(); /*i controlled*/) {
        if (!(keyword.find(rest[i]) != string::npos)) 
            i++;         
        else 
            rest.erase(i, 1);
    }
    string ciphAlph = keyword + rest;
    int pos = 0;
    for (int i=0; i<message.size(); i++) {
        pos = alphabet.find(message[i]);
        message[i] = ciphAlph[pos];
    }
    return message;
}