n = int(input("Enter a number: "))
count = 0

while n != 0:
    n //= 10
    count += 1

print("Count of digits is:", count)