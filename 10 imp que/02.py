n = int(input("Enter a number: "))
sum_digits = 0

while n > 0:
    last_digit = n % 10
    n //= 10
    sum_digits += last_digit

print("Sum of digits is:", sum_digits)
