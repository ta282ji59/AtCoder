#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    int zero_count=0;
    while(n!=1){
        if(n%2 == 0){
            zero_count++;
            n /= 2;
        }
        else break;
    }
    printf("%d\n",zero_count);
}