my_arr = [7 , 12 ,9 ,11,3]

n = len(my_arr)
for i in range(n - 1):
    for j in range(n - i - 1):
        if(my_arr[j] > my_arr[j + 1]):
            my_arr[j] , my_arr[j +1] = my_arr[j + 1] , my_arr[j]
print("sorted array is:" , my_arr)            
