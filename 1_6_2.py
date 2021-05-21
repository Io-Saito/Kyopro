#%%
#蟻本演習1-7 蟻
'''
入出力規則
入力
文字列：input() >>> 3
数値：int(input()) >>> ABC
配列：map
'''

#L,nは整数
L=int(input())
n=int(input())
#x:各蟻がいる位置
x=list(map(int,str(input()).split(",")))

#最小の時→蟻は近いほうの端に向かう
#棒の中心
half=L/2
#最小,最大のときの向きと端までの距離を入れる配列(中身は{向き：距離})のmap
min_dist=[]
max_dist=[]

for x_ in x:
    #左に近い
    if x_<half:
        min_dist.append(x_)
        max_dist.append(L-x_)
    #右に近い
    else:
        min_dist.append(L-x_)
        max_dist.append(x_)
    
#すべての蟻が落ちるまで→各配列のvalueの最大値
min_time=max(min_dist)
max_time=max(max_dist)
print(f"最小の時間={min_time}\n最大の時間={max_time}")

# %%
