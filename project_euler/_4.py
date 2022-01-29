res = 0
for a in range(900, 1000):
    for b in range(900, 1000):
        c = str(a * b)
        if c == c[::-1]:
            res = max(int(c), res)
            break
print(res)
assert res == 906609
