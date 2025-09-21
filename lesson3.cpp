#include <stdio.h>
#include <math.h>
int main(){
    long long n, count =0;
    scanf("%lld",&n);
    long long a= (long long) sqrt(n);
    for(long long i=1; i<=a;i++){
        if (n%i==0){
            if(i==n/i){
                count++;
            }
            else{
                count+=2;
            }
        }
    }
    printf("%lld",count);
    return 0;
}
