# https://codeforces.com/contest/1669/problem/D

def its_possible_zero(stamp):
    sp = stamp.split("W")

    for spi in sp:
        if ('R' in spi) ^ ('B' in spi):
            return "NO"
    return "YES"

def main():
    t = int(input())

    for i in range(t):
        n = int(input())
        print(its_possible_zero(input()))

main()
