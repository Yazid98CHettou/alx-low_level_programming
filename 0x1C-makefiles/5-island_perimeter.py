#!/usr/bin/python3

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    a = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for b, r in enumerate(grid):
        for c, n in enumerate(r):
            if n == 1:
                if b == 0 or grid[b - 1][c] != 1:
                    a += 1
                if c == 0 or grid[b][c - 1] != 1:
                    a += 1
                if c == width or grid[b][c + 1] != 1:
                    a += 1
                if b == length or grid[b + 1][c] != 1:
                    a += 1
    return a
