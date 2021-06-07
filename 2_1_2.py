#%%
#蟻本演習2-1 rake counting
'''
入出力規則
入力
文字列：input() >>> 3
数値：int(input()) >>> ABC
配列：list(map(int,str(input()).split(","))) >>> 2,3,4,5,10 
'''
import numpy as np


n=7
m=5
garden=[["W",".",".",".","W"],
        ["W","W",".",".","W"],
        ["W","W",".",".","W"],
        ["W",".",".","W","W"],
        [".",".",".",".","."],
        ["W",".",".",".","W"],
        ["W","W",".",".","W"]]
#八近傍でつながってないところに池を見つけたら＋１
def search(x:int ,y:int):
    #今いる所はチェック済み
    garden[x][y]="."
    mov=[-1,0,1]
    for r in mov:
        dx=x+r
        for j in mov:
            dy=y+j
            print(f"{dx},{dy}")
            if 0<=dx<=n-1 and 0<=dy<=m-1:
                if garden[dx][dy]=="W":
                    search(dx,dy)
                print(np.array(garden))
            else:
                print("out of garden")
                

count=0
for xx in range(0,n-1):
    for yy in range(0,m-1):
        if garden[xx][yy]=="W":
            search(xx,yy)
            count+=1

print(count)

# %%
