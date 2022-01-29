from math import gcd

def lcm(a, b):
    return abs(a*b) // gcd(a, b)

# Since python 3.9, there is math.lcm https://docs.python.org/3/library/math.html#math.lcm
