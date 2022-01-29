from math import gcd

def lcm(a, b):
    return abs(a*b) // gcd(a, b)
