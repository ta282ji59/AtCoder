#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x,y,z;
    for(int x=0;x<=n;x++){
        for(int y=0;y<=n;y++){
            for(int z=0;z<=n;z++){
                int sum=0;
                if((x+y+z)<=n){
                    printf("%d %d %d\n",x,y,z);
                }
                else{
                    continue;
                }
            }
        }
    }
    return 0;
}