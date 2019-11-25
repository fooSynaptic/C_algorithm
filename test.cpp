#include <stdlib.h>
#include <iostream>
#include <string>
#include "longest_palindrom.h"

using namespace std;

int main( ){
Solution res;                       
std::string r = res.longestPalindrome("ababa");                     

printf("%s \n", r.c_str());

return 0;
}


