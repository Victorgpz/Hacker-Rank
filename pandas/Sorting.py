import pandas as pd
ly=[1,8,7,-2,3,4,-5]

S=pd.Series(ly,index=[i for i in "aebcdfk"]) ##["a","b",..]

print(S)

## Sort_values()

# print(S.sort_values(ascending=False,inplace=True))

# print(S)

## Sort_index()

print(S.sort_index(inplace=True))

print(S)


