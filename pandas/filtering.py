import pandas as pd

ly=[20,16,11,5,8,2,3,1,17,15]

S1=pd.Series(ly)

S1=S1+2
sq=S1**2
print(sq)
print(sq[sq>150])



