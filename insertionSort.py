data=[]
size=int(input("数据个数:"))
t=size
while t>0:
    data.append(int(input()))
    t-=1
for i in range(1,size):
    q=data[i];j=i-1
    while j>=0 and q<data[j]:
        data[j+1]=data[j]
        j-=1
    data[j+1]=q
print(data,type(data))
for i in data:
    print(i,end=" ")