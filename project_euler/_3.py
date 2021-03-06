def solve(n):
    factor = 1
    d = 2
    while n > 1:
        while n % d == 0:
            factor = d
            n //= d
        d += 1
        if d * d > n:
            if n > 1:
                factor = n
            break
    return factor
x = solve(600851475143)
print(x)
assert x == 6857
