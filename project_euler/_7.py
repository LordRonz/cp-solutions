#!/usr/bin/env python3

def get_nth_prime(nth):
    total_primes = 0
    size_factor = 2
    s = (nth * size_factor)
    while total_primes < nth:
        primes = get_primes(s)
        total_primes = sum(primes[2:])
        size_factor += 1
        s = (nth * size_factor)
    nth_prime = count_primes(primes, nth)
    return nth_prime

def get_primes(s):
    primes = bytearray([1]*s)
    for i in range(2, s):
        if primes[i] == 1:
            for j in range(i, s):
                if i*j < s:
                    primes[i*j] = 0
                else:
                    break
    return primes

def count_primes(primes, nth):
    count = 0
    for k in range(2, len(primes)):
        count += primes[k]
        if count == nth:
            return k

n = 10001
nth_prime = get_nth_prime(n)
print(nth_prime)
assert nth_prime == 104743
