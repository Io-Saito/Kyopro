#include <stdio.h>

int N;
int M;
char matrix[N][M];

int main(void){
    N=7;
    M=5;
    int ans;
    matrix =[["W",".",".",".","W"],
             ["W","W",".",".","W"],
             ["W","W",".",".","W"],
             ["W",".",".","W","W"],
             [".",".",".",".","."],
             ["W",".",".",".","W"],
             ["W","W",".",".","W"]];
    ans=solve(char *lake,int N,int M); 
    printf("number of lake=%d",ans);
    return 0;
}


void solve(int x,int y){
    matrix[x][y]=".";
    //八近傍
    for (int i=-1;i<=1; i++){
        x+=i;
        for (int j=-1;j<=1;j++){
            y+=j;
            if (0<=x<=n-1&0<=y<=m-1&matrix[x][y]=="W"){
               solve(x,y)
            }
        }
    }

}