// 蟻本演習1-6 三角形

#include <stdio.h>
#include <stdarg.h>

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

int main(void){
    //入力を受付
    int L,n;
    int min_time=0;
    int max_time=0;
    double half;
    scanf("%d %d",&L,&n);
    printf("L=%d\n",L);
    printf("n=%d\n",n);
    int x[n];
    //配列入力を受付
    for (int i=0; i<=n-1; i++){
        int x_;
        scanf("%d",&x_);
        x[i]=x_;
        printf("x[%d]=%d\n",i,x_);
    }
    //棒の真ん中
    half=L/2;
    //各蟻について考えるのでループを回す
    for(int r=0; r<=n-1; r++){
        if (x[r]<=half){
            //左に近い
            min_time=max(2,min_time,x[r]);
            max_time=max(2,max_time,L-x[r]);
        }else{
        //右に近い
            min_time=max(2,min_time,L-x[r]);
            max_time=max(2,max_time,x[r]);    
    }
    
    }
    printf("最小時間=%d\n",min_time);
    printf("最大時間=%d\n",max_time);
    return 0;
}