def is_palindrome(x: str) -> bool:
    left = 0
    right = len(x) - 1

    while left < right:
        if x[left] != x[right]:
            return False
        left += 1
        right -= 1
    
    return True

def target_exists(target: int, arr: list[int]) -> bool:
    left: int = 0
    right: int = len(arr) - 1

    while left < right:
        current_sum = arr[left] + arr[right]

        if current_sum == target:
            return True
        
        if current_sum > target:
            right -= 1
        else:
            left += 1
    
    return False

def return_two_sorted(x: list[int], y: list[int]) -> list[int]:
    i = 0
    j = 0

    result: list[int] = []
    while i < len(x) and j < len(y):
        if x[i] < y[j]:
            result.append(x[i])
            i += 1
        else:
            result.append(y[j])
            j += 1

    while i < len(x):
        result.append(x[i])
        i += 1
    
    while j < len(y):
        result.append(y[j])
        j += 1
    
    return result



if __name__ == "__main__":
    print(is_palindrome("racecar"))
    print(is_palindrome("what"))
    print(target_exists(10, [1, 2, 3, 4, 5, 5, 6, 7]))
    print(target_exists(10, [1, 2, 3, 4, 5, 6, 7]))
    print(return_two_sorted([1, 20, 334, 600], [200, 400, 800]))