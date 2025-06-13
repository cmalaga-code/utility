"""
Quick Sort Algroithm
"""

def swap(arr, i, j):
    """
    Helper function used to swap elements
    """
    temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp

def partition(arr, low, high):
    """
    Helper function used to partition the array
    """
    pivot = arr[high]
    swap_index = low - 1

    for j in range(low, high):
        if arr[j] <= pivot:
            swap_index += 1
            swap(arr, swap_index, j)

    swap(arr, swap_index + 1, high)
    return swap_index + 1


def quick_sort(arr, low, high):
    """
    Quick sort function
    """
    if low < high:
        pivot_index = partition(arr, low, high)
        quick_sort(arr, low, pivot_index - 1)
        quick_sort(arr, pivot_index + 1, high)



example = [10, 4344, 23, 454, 2, 1]
print("Before: ", example)
quick_sort(example, 0, len(example) - 1)
print("After", example)
