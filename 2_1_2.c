//蟻本演習2-1 Lake Counting

#include <stdio.h>

int main(void){
    int n,m; //縦
    int count=0;
    scanf("%d",&n);
    scanf("%d",&m);
    char garden[n][m];
    for (int i=0; i<=n-1; i++){
        for (int j=0; j<=m-1; j++){
        scanf("%c",&garden[i][j]);
        }
    }

    void search(int x,int y){
        int dx,dy;
        garden[x][y]=".";
        for (int r=-1; r<=1; r++){
            dx=x+r;
            for (int s =-1; s<=1; s++){
            dy=y+s;
            if (0<=dx<=n-1 & 0<=dy<=m-1 & &garden[dx][dy]=="W"){
                search(dx,dy);
                }
            }
        }
    }

    for (int xx=0; xx <= n-1; xx++){
        for (int yy=0; yy <= n-1; yy++){
            if (&garden[xx][yy]=="W"){
                search(xx,yy);
                count=count+1;
            }
        }
    }
    printf("lake=%d",count);
    return 0;
}