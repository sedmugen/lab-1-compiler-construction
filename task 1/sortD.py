import random
random.seed(42)
n = 5000
arr = [random.randint(0, 99999) for _ in range(n)]
 
for i in range(n - 1):
    for j in range(n - i - 1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]
 
print(arr[0], arr[-1])
