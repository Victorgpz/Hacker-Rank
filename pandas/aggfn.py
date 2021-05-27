
import pandas as pd

ly=[1,2,3,4,5]

S=pd.Series(ly,index=[i for i in "abcde"])

print(S.iloc[:3].sum())
print(S.loc[:"c"].sum())


print(S[:3].sum())
print(S[:"c"].sum())

# if S.empty:
#     print("Series is empty")
# else:
#     print("Series is not empty")
