num1 = int(input("Enter num 1\n"))
num2 = int(input("Enter num 2\n"))
if num2 > num1:
    mn = num1
else:
    mn = num2
for i in range(1, mn + 1):
    if num1 % i == 0 and num2 % i == 0:
        hcf = i

print(f"The hcf of {num1} and {num2} is {hcf}")
