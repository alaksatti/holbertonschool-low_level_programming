#!/usr/bin/python3
""" finding the perimeter of an island"""


def island_perimeter(grid):
    """Returns the perimeter of an island"""
    for row in grid:
        row.insert(0, 0)
        row.append(0)
    columns = len(grid[0])
    grid.insert(0, [0] * columns)
    grid.append([0] * columns)
    rows = len(grid)
    perimeter = 0

    for r in range(rows):
        for c in range(columns):
            if grid[r][c]:
                partial = 4 - grid[r + 1][c] - grid[r - 1][c]
                partial -= (grid[r][c + 1] + grid[r][c - 1])
                perimeter += partial

    return perimeter
