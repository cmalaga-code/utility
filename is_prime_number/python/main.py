def is_prime(n: int) -> bool:
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def prime_number_list(x: int) -> list[int]:
    result: list[int] = []
    for num in range(2, x):
       if is_prime(num):
           result.append(num)
    return result

test_case = 25
print(prime_number_list(test_case))