## problem 1 - for numbers under 1000 give the sum of multiples of 3 or 5.

sum = 0
i: int = 0

while i <= 1000:
    i += 1
    if i%3 == 0:
        sum += i
    elif i%5 == 0:
        sum += i

print(sum)

