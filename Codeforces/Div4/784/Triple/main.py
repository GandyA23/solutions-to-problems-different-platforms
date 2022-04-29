# https://codeforces.com/contest/1669/problem/B

import io, os, sys

input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

def readline():
    return input().decode()

def readint(): 
    return int(readline())

def readintlist():
    return list(map(int, readline().split()))

t = readint()

while(t):
    dic = {}
    result = -1
    n = readint()
    a = readintlist()

    for ai in a:
        if dic.get(ai):
            dic[ai] += 1
        else:
            dic[ai] = 1
        
        if dic[ai] >= 3:
            result = ai

    sys.stdout.write(str(result) + '\n')
    t -= 1
