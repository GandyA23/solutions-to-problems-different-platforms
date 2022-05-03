# https://codeforces.com/contest/1674/problem/B

import io, os, sys

input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

def create_dic ():
    dic = {}
    i = 0
    for a in range(ord('a'), ord('z')+1):
        for b in range(ord('a'), ord('z')+1):
            if a != b:
                i += 1
                dic[chr(a)+chr(b)] = i

    return dic

def main():
    dic = create_dic()
    for i in range(int(input().decode())):
        s = input().decode()
        sys.stdout.write(str(dic[s[0]+s[1]]) + '\n')

main()
