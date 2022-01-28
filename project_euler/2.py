a, b = 1, 2
x = 0
while b <= 4_000_000:
    if b % 2 == 0:
        x += b
    a, b = b, a + b
print(x)
assert x == 4613732