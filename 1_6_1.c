// 蟻本演習1-6 三角形

#include <stdio.h>
#include <stdarg.h>


//C言語には最大値関数がないので作る
//最初に大きさを指定して、可変長引数の最大値を求める
int max(const int len,...){
    int max=0;
    int var=0;
    va_list nums;
    va_start(nums,len);
    for(int r=0; r<=len; r++){ 
    var=va_arg(nums, int);
    if (var>max){
        max=var;
    }
    }
    va_end(nums);
    return max;
}

int main(){
    //入力を受付
    int n, answer;
    scanf("%d",&n);
    int a[n];
    //配列入力を受付
    for (int i=0; i<=n-1; i++){
        int a_;
        scanf("%d",&a_);
        a[i]=a_;
        printf("a[%d]=%d\n",i,a_);
    }
    //３重ループして三角形を作る
    for (int x=0; x<n; x++){
        for (int y=x+1; y<n; y++){
            for (int z=y+1; z<n; z++){
                //周長
                int around=a[x]+a[y]+a[z];
                printf("around=%d\n",around);
                //一番長い辺
                int maxi=max(3,a[x],a[y],a[z]);
                printf("max=%d\n",maxi);
                //そのほかの辺
                int other=around-maxi;
                printf("other=%d\n",other);
                //三角形が作れるとき、今までの値より大きかったら更新
                if (around>other){
                    answer= max(2,around,answer);
                    printf("answer=%d\n",answer);
                }
            }
        }
    }
    printf("最大の長さ=%d\n",answer);
    return 0;
};
