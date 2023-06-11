number = int(input("Enter a number: "))

if number < 50:
    if number > 25:
        print("The number is greater than 25.")
    else:
        if number % 2 == 0:
            print("The number is less than 25 and even.")
        else:
            print("The number is less than 25 and odd.")
else:
    print("The number is greater than or equal to 50.")
