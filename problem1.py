## problem 1

sum = 0
i: int = 0

while i <= 1000:
    i += 1
    if i%3 == 0:
        print("add", i)
        sum += i
    elif i%5 == 0:
        print("add", i)
        sum += i

print(sum)

