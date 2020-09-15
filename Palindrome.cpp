#include <iostream>
#include <cstring>

using namespace std;

int main() {

  char str1[80];
  char str2[80];

  cin.get(str1, 80);
  cin.get();
  strcpy(str2, str1);

  cout << str1 << endl;
  cout << str2 << endl;

  cout << str1[0] << endl;
  cout << str2[strlen(str1) - 1] << endl;
  if (str1[0] != str2[strlen(str1) - 1]) {
    cout << "same" << endl;
  }
  
  bool isPalindrome = true;
  for (int i = 0; i < strlen(str1); i++) {
    
    if (str1[i] != str2[strlen(str1) - i - 1]) {
      isPalindrome = false;
    }
  }

  if (isPalindrome == true) {
    cout << "It's a palindrome!" << endl;
  } else {
    cout << "Not a palindrome." << endl;
  }

  return 0;
}
