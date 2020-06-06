#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;

/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  for (int i = 0; i < s1.length(); i++)
  {
    if (isspace(s1[i]))
      s1.erase(s1.begin()+i);
  }
  for (int i = 0; i < s2.length(); i++)
  {
    if (isspace(s2[i]))
      s2.erase(s2.begin()+i);
  }
  if (s1.length() != s2.length())
    return false;
  for (int i = 0; i < s1.length(); i++)
  {
    if (s1[i] != s2[i] && (toupper(s1[i]) != toupper(s2[i])))
      return false;
  }
  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  string s = s1;
  for (int i = 0; i < s.length()/2 - 1; i++)
  {
    if (s[i] != s[s.length()-1-i] && (toupper(s[i]) != toupper(s[s.length()-1-i])))
      return false;
  }
  return true;
}


