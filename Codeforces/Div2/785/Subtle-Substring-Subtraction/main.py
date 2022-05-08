# https://codeforces.com/contest/1673/problem/A

def real_value(c):
    return ord(c) - ord('a') + 1

def main ():
    for i in range(int(input())):
        bob = alice = 0
        s = input()

        if (len(s) == 1):
            print("Bob " + str(real_value(s))) 
        elif (not (len(s) % 2)):
            for c in s:
                alice += real_value(c)
            print("Alice " + str(alice))
        else:
            bob = real_value(s[-1]) if s[0] > s[-1] else real_value(s[0])

            for c in s:
                alice += real_value(c)
            
            alice -= bob

            if bob > alice:
                print("Bob " + str(bob-alice))
            else:
                print("Alice " + str(alice-bob))

main()
