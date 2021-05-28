#%%
#蟻本演習2-1 部分和問題
'''
入出力規則
入力
文字列：input() >>> 3
数値：int(input()) >>> ABC
配列：list(map(int,str(input()).split(","))) >>> 2,3,4,5,10 
'''

#n,kは整数
#aは配列
n=int(input())
a=list(map(int,str(input()).split(",")))
k=int(input())


#iとそれまでの和(sum_)
def partial_sum(i:int ,sum_:int) -> bool:
    #i=nまでいったらそれ以上足すやつがないので判定
    if i==n:
        return sum_ ==k
    #i番目を足さないで判定
    if partial_sum(i+1,sum_):
        return True
    #i番目を足してみて判定
    if partial_sum(i+1,sum_+a[i]):
        return True
    #デフォルトはFalse
    return False

#つまり、すべてのsum_に対して足すか足さないかの２通り考えてる
#足すか足さないかにifを使うと死ぬ
print(partial_sum(0,0))


# %%
