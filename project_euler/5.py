from utils.lcm import lcm

res = 1
for i in range(1, 20):
    res = lcm(res, i)

print(res)
assert res == 232792560
