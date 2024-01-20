#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char mozi[2027] = "L";
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        mozi[i] = 'o';
        if(i==n){
            mozi[i+1] = 'n';
            mozi[i+2] = 'g';
        }
    }
    printf("%s\n",mozi);

    return 0;
}