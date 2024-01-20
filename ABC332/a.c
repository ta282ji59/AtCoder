#include <stdio.h>
int main(){
    int N,S,K; //送料は購入する商品の合計金額が S 円以上なら 0 円、そうでないならば K 円です。
    scanf("%d%d%d",&N,&S,&K);

    int sum=0;
    int money,num;
    for(int i=0;i<N;i++){
        scanf("%d %d",&money,&num);
        sum+=(money*num);
    }
    if(sum<S)sum+=K;
    printf("%d\n",sum);
}