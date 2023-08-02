#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>



std::string CaesarConverter(std::string Word) {
std::string plainAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
std::string cipherAlphabet = "GHIJKLMNÑOPQRSTUVWXYZABCDEFxyzabcdefghijklmnopqrstuvw";
std::string wordConverted = "";

for(int i = 0; i < Word.length(); i++){
  char currentIndex = Word[i];
  size_t foundIndex = plainAlphabet.find(currentIndex);
    if (foundIndex != std::string::npos){
      wordConverted.push_back(cipherAlphabet[foundIndex]);
    } else{
      wordConverted.push_back(currentIndex);
    }
 }
  return wordConverted;
}


int main() {
 std::string inputWord = "WIKIPEDIA, LA ENCICLOPEDIA LIBRE";
    std::string encryptedWord = CaesarConverter(inputWord);
    std::cout << "Word To Convert " << inputWord << std::endl;
    std::cout << "Encrypted Word: " << encryptedWord << std::endl;
    return 0;
}
