# https://omegaup.com/arena/problem/Dibujando-un-tache

l1, t1 = [int(x) for x in input().split(' ')]
l2, t2 = [int(x) for x in input().split(' ')]

if l1 > l2 and t1 > t2:
    print('Hueso 1')
elif l2 > l1 and t2 > t1:
    print('Hueso 2')
else:
    print('Perrito confundido :(')
