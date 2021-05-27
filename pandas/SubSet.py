import pandas as pd


ly=[1,-2,3,4,-5]

S=pd.Series(ly,index=[i for i in "abcde"])
print(S)

# print(S["a":"c"]) #3 s.loc["a","c"]

# print(S[1:3]) # s.iloc[1:3]


s1=S.iloc[1:3]

print(s1)