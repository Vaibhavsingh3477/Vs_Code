def is_fibonacci_number(n):
    if n <= 0:
        return False
    a, b = 0, 1
    while b < n:
        a, b = b, a + b
    return b == n

number = int(input("Enter a number: "))
if is_fibonacci_number(number):
    print(number, "is a Fibonacci number.")
else:
    print(number, "is not a Fibonacci number.")
