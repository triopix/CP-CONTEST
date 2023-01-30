#include <bits/stdc++.h>

using namespace std;

// using functions is more efficient 

bool is_uppercase(const char c) {
  return 'A' <= c and c <= 'Z';
}
 
bool is_digit(const char c) {
  return '0' <= c and c <= '9';
}
 
int main() {

  string s;
  cin >> s;
  
  bool Yes = true;

  // s.front is the first char of string
  if (!is_uppercase(s.front())) {
    Yes = false;
  }

  //s.back is the last char of string
  if (!is_uppercase(s.back())) {
    Yes = false;
  }

  // size of string which is done
  if (s.size() != 8) {
    Yes = false; 
  }

  // those conditions on the top need to be checked first before this

  // because the string has to be 8 - check from 1 - 7
  for (int i = 1; i < 7; ++i) {
    if (!is_digit(s[i])) {
      Yes = false; // sets true when finds char that is a digit
    }
  }

  if (s[1] == '0') { // we know that if 0 for the first char then automatically false
    Yes = false;
  }
 
  cout << (Yes ? "Yes" : "No") << '\n'; // using ternary to find the answer
  
  return 0;
}