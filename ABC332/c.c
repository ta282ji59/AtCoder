#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int x,int y){
    return x>y ? x:y;
}


int main(){
    int N, M;
    scanf("%d%d", &N, &M);
    
    int ans = 0, x = 0, y=0;
    char S[N+2];
    scanf("%s", S);
    strcat(S,"0");
    for (int i = 0; i <= N; i++){
        if (S[i] == '0'){
            ans = max(ans,max(x+y-M,y));
            x=0,y=0;
        }
        else if (S[i] == '1'){
            x++;
        }
        else{
            y++;
        }
    }
    printf("%d\n", ans);
    return 0;
}

