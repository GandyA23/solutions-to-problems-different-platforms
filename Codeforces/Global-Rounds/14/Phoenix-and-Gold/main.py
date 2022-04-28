# https://codeforces.com/contest/1515/problem/A

def main ():
    for i in range(int(input())):
        sum = 0
        n, x = [int(x) for x in input().split(' ')]
        gold = [int(x) for x in input().split()]
        
        for g in gold:
            sum += g

        if sum == x:
            print("NO")
        else:
            print("YES")
            for j in range(n):
                if x == gold[j]:
                    # swap elements
                    tup = gold[j], gold[j+1]
                    gold[j+1], gold[j] = tup
                print(str(gold[j]), end = " ")
                x -= gold[j]
            print()

main()

