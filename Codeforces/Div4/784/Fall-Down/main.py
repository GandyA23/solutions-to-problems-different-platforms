# https://codeforces.com/contest/1669/problem/G
# Time limit exceeded

import io, os, sys

input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

STONE = '*'
EMPTY = '.'

def readline():
    return input().decode()

def readint():
    return int(readline())

def readcharlist():
    return list(readline())
 
def can_move (x, y, n, grid):
    return x+1 < n and grid[x][y] == STONE and grid[x+1][y] == EMPTY
 
def simulate(n, m, grid):
    last_line_moved = n-2
    did_move = 1
 
    while did_move:
        did_move = 0

        for i in range(last_line_moved, -1, -1):
            for j in range(m):
                if can_move(i, j, n, grid):
                    did_move = 1
                    tup = grid[i][j], grid[i+1][j]
                    grid[i+1][j], grid[i][j] = tup
            last_line_moved += int(did_move)
    return grid
 
def print_grid(grid):
    for line in grid:
        for c in line:
            sys.stdout.write(c)
    sys.stdout.write('\n')
    return 
 
def main ():
    for i in range(readint()):
        grid = []
        n, m = [int(x) for x in readline().split()]
 
        for j in range(n):
            grid.append(readcharlist())
        
        simulate(n, m, grid)
        print_grid(grid)
 
main()