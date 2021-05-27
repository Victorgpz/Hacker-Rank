#Series 1D,homo, data mutable, size immutable


import pandas as pd

##using list

ly=[1,-2,3,4,-5]

S=pd.Series(ly,index=[i for i in "abcde"])

# print(S)

# print(S)


## using dict

dic={           ##keys -a,b,c,d
    "a":1,      ##values -1,2,3,4
    "b":2,
    "c":3,
    "d":4
    }

Ser1=pd.Series(dic,index=["a","b"])

#print(Ser1)

## Scalar values

a=5

ser2=pd.Series(a,index=[i for i in "abcd"])
ser2.name="series1"
# print("series S")
# print(S)
# print("Series ser2")
# print(ser2)
# print(ser2.sub(S))  ## ser2-s
# print(ser2.rsub(S)) ## s-ser2,s.sub(ser2)

print(S.values)
# print(S)
# S.index=[x for x in "qwert"]
# print(S.index)
# print(S)
