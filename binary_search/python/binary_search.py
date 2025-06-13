

def binary_search(arr, value) -> int:
    """
    binary search algorithm
    left = left
    right = right
    m = midpoint
    """
    left = 0
    right = len(arr) - 1
    while left <= right:
        m = (left + right) // 2
        if arr[m] < value:
            left = m + 1
        elif arr[m] > value:
            right = m - 1
        else:
            return m
        
    return -1

my_numbers = [0, 1, 2, 3, 4, 13, 14, 15, 16, 17, 18, 19, 20]

print(binary_search(my_numbers, 13))