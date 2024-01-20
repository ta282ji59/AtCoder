#include <stdio.h>
int main(){
    int M,D,y,m,d;
    scanf("%d%d",&M,&D);
    scanf("%d%d%d",&y,&m,&d);
    
    if(m==M && d==D){
        y++,m=1,d=1;
    }
    else if(d==D){
        d=1;
        if(M==m) m=1;
        else m++;
    }
    else{
        d++;
    }
    printf("%d %d %d\n",y,m,d);
}