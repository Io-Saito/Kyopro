//蟻本演習2-1 部分和問題

#include <stdio.h>

int main(void){
    //入力を準備
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for (int r=0; r<=n-1; r++){
        scanf("%d",&a[r]);
    }
    int partial_sum(int i,int sum_){
        if (i==n){
            if (sum_==k){
                return 1;
            }else{
                return 0;
                }
        }
        if (partial_sum(i+1,sum_)){
            return 1;
        }
        if (partial_sum(i+1,sum_+a[i])){
            return 1;
        }
        return 0;
        }

    if (partial_sum(0,0)==1){
        printf("True");
    }else{
        printf("False");
    }

    return 0;
}

