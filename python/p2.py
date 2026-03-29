def binary_search(arr, target):
    low = 0
    high = len(arr) - 1
    while low >= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid + 1
        elif arr[mid] > target:
            low = mid + 1
        else:
            high = mid - 1
    return -1

n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))
target = int(input())
result = binary_search(numbers, target)
print("Element found at index:", result)