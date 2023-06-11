number = int(input("Enter a number: "))
reversed_number = 0
digit_sum = 0

while number > 0:
    digit = number % 10
    reversed_number = reversed_number * 10 + digit
    digit_sum += digit
    number = number // 10

print("Reversed number:", reversed_number)
print("Sum of digits:", digit_sum)
