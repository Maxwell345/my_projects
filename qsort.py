def quicksort(array):
    less=[];greater=[];pivot=0
    if len(array)<=1:
        return array
    else:
        pivot=array[len(array)//2]
        del array[len(array)//2]
        less=[i for i in array if i<=pivot]
        greater=[j for j in array if j>pivot]
        return quicksort(less)+[pivot]+quicksort(greater)
elm=-3;cnt=0
table=[];
while True:
    cnt+=1
    elm=int(input(str(cnt)+"-th element:"))
    if elm==0:
        break
    table.append(elm)
print(table)
print(quicksort(table))
input()