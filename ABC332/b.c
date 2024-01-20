#include <stdio.h>
int main(){
    int K,G=0,M=0,G_max,M_max;
    scanf("%d%d%d",&K,&G_max,&M_max);
    for(int i=0;i<K;i++){
        if(G==G_max)G=0;
        else if(M==0)M=M_max;
        else{
            int stock = (G_max-G);
            if(stock>M) stock=M;
            M -= stock;
            G += stock;
        }
    }
    printf("%d %d\n",G,M);
}