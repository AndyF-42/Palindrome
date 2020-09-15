#include <iostream>
#include <cstring>

using namespace std;

int main() {

  char input[80];
  char str1[80];
  char str2[80];
  cin.get(input, 80);
  cin.get();

  //take only the alphanumeric chars from input
  //and put them lowercase into str1 
  int count = 0;
  for (int i = 0; i < strlen(input); i++) {
    if (isalnum(input[i])) {
      str1[count] = tolower(input[i]);
      count++;
    }
  }
  //add the null character, copy into str2
  str1[count] = '\0';
  strcpy(str2, str1);

  //check chars going forwards from str1 and going backwards from str2
  bool isPalindrome = true;
  for (int i = 0; i < strlen(str1); i++) {
    if (str1[i] != str2[strlen(str1) - i - 1]) {
      isPalindrome = false;
    }
  }

  //proper output
  if (isPalindrome) {
    cout << "Palindrome." << endl;
  } else {
    cout << "Not a palindrome." << endl;
  }

  return 0;
}
