arr=list(map(int,input().split()))
for i in range(len(arr)):
    min_ind=i
    for j in range(i+1,len(arr)):
        if arr[min_ind]>arr[j]:
            min_ind=j
    arr[min_ind],arr[i]=arr[i],arr[min_ind]
print(arr)
