#include <stdio.h>
#include <stdbool.h>
bool is_palindrome(int n){
   int rev =0, tmp=n;
   while (tmp>0){
      rev =rev*10 +tmp %10;
   }
}