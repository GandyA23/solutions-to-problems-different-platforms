# https://codeforces.com/contest/1515/problem/B

import math

def is_square (n):
    y = int(math.sqrt(n))
    return y*y == n

def its_possible (n):
    if not n%2 and is_square(n // 2):
        return "YES"
    if not n%4 and is_square(n // 4):
        return "YES"

    return "NO"

def main():
    for i in range(int(input())):
        print(its_possible(int(input())))

main()
