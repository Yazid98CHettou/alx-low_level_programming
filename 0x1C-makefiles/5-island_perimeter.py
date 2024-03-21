#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    a = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for b, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if b == 0 or grid[b - 1][j] != 1:
                    a += 1
                if j == 0 or grid[b][j - 1] != 1:
                    a += 1
                if j == width or grid[b][j + 1] != 1:
                    a += 1
                if b == length or grid[b + 1][j] != 1:
                    a += 1
    return a
