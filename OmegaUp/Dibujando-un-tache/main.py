# https://omegaup.com/arena/problem/Dibujando-un-tache

import io, os, sys

input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

def draw (n):
    m_spaces = n-2
    l_spaces = 0

    for i in range(n // 2):
        sys.stdout.write(' '*l_spaces + '@' + ' '*m_spaces + '@' + '\n')
        l_spaces += 1
        m_spaces -= 2

    sys.stdout.write(' '*l_spaces + '@' + '\n')
    l_spaces -= 1
    m_spaces += 2

    for i in range(n // 2):
        sys.stdout.write(' '*l_spaces + '@' + ' '*m_spaces + '@' + '\n')
        l_spaces -= 1
        m_spaces += 2

def main ():
    draw(int(input().decode()))

main()
