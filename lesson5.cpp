#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int n){
   if (n<2){
      return false;
   }
   int sum=1;
   for(int i=2; i*i<=n; i++){
      if(n%i==0){
         sum+=i;
         if(i!= n/i){
            sum+= n/i;
         }
      }
   }
   return sum == n;
}
int main(){
   int n;
   scanf("%d",&n);
      if(isPerfect(n)) {
         printf("YES");
      }
      else{
         printf("NO");
      }
   return 0;
}