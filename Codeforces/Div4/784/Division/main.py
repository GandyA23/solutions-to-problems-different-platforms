# https://codeforces.com/contest/1669/problem/A

import io, os, sys

input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

def readint():
    return int(input().decode())

def checkrating(r):
    if r <= 1399:
        return "Division 4"
    elif r >= 1400 and r <= 1599:
        return "Division 3"
    elif r >= 1600 and r <= 1899:
        return "Division 2"
    else: 
        return "Division 1"

def main():
    t = readint()

    while t:
        r = readint()
        sys.stdout.write(checkrating(r) + '\n')
        t -= 1

main()
