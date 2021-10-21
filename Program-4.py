l=[1,2,3,4,5,6,7,8,9]
d={1:0,2:0,3:0,4:0,5:0,6:0,7:0,8:0,9:0}
print("Enter the number of input you want to insert : ")
n = input()
In = []
print("Enter Input : \n")
for i in range(int(n)):
    In.append(int(input()))
for i in l:
    for j in In:
        if(j%i ==0):
            d[i]+=1
print (d)
