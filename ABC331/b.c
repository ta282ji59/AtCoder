#include <stdio.h>

int min(int a,int b){
    if(a>b) return b;
    else return a;
}

int main(){
    int n,s,m,l;
    int ans=1000000000;
    scanf("%d%d%d%d",&n,&s,&m,&l);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=n;k++){
                if((6*i+8*j+12*k)>=n){
                    int a = 6*i+8*j+12*k;
                    printf("%d\n",a);
                    ans = min(ans,s*i+m*j+l*k);
                }
            }
        }
    }
    printf("%d\n",ans);
}