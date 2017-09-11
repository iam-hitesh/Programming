#!/bin/python3

import sys
from functools import reduce


def lcm(a: int, b: int) -> int:
    return a * b // gcd(a, b)


def lcm_list(lst: list) -> int:
    return reduce(lcm, lst)


def gcd(a: int, b: int) -> int:
    while a % b != 0:
        a, b = b, (a % b)
    return b


def gcd_list(lst: list) -> int:
    return reduce(gcd, lst)


def evenly_divides(number: int, divisor: int) -> bool:
    return (number % divisor) == 0


def get_input():
    n, m = input().strip().split()
    n, m = [int(n), int(m)]
    a = [int(a_temp) for a_temp in input().strip().split()]
    b = [int(b_temp) for b_temp in input().strip().split()]
    return n, m, a, b


def main():
    n, m, a, b = get_input()
    
    # Find LCM of all integers of a
    lcm_value = lcm_list(a)
    
    # Find GCD of all integers of b
    gcd_value = gcd_list(b)
    
    # Count the number of multiples of LCM that evenly divides the GCD.
    counter = 0
    multiple_of_lcm = lcm_value
    while multiple_of_lcm <= gcd_value:
        if evenly_divides(gcd_value, multiple_of_lcm):
            counter += 1
        multiple_of_lcm += lcm_value

    print(counter)

    
if __name__ == "__main__":
    main()
