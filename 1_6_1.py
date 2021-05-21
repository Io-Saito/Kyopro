#%%
#蟻本演習1-6 三角形
'''
入出力規則
入力
文字列：input() >>> 3
数値：int(input()) >>> ABC
配列：map(int,split(input()),",")) >>> 2,3,4,5,10 
'''
#nは整数
n=int(input())
#a_iは配列
a=list(map(int,str(input()).split(",")))
#%%
n=5
a=[1,2,3,4,5]
answer=[]
for x_1 in range(0,n):
    for x_2 in range (x_1+1,n):
        for x_3 in range (x_2+1,n):
            chosed=[a[x_1],a[x_2],a[x_3]]
            print(chosed)
            around=sum(chosed)
            max_len=max(chosed)
            chosed.remove(max_len)
            if max_len>sum(chosed):
                print(around)
                answer.append(around)
print(max(answer))


# %%
