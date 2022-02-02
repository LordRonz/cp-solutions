n = 100
a = n * (n + 1) * (2 * n + 1) // 6
b = (n * (n + 1) // 2) ** 2

x = b - a
print(x)
assert x == 25164150
