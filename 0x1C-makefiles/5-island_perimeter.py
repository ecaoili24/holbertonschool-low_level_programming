#!/usr/bin/python3
""" Module that calculates the perimeter of an island """


def island_perimeter(grid):
    p = 0  # p = perimeter
    for row in range(0, len(grid)):
        for zone in range(0, len(grid[row])):
            if grid[row][zone] is 1:
                if row < len(grid) - 1 and grid[row + 1][zone] is 0:
                    p = p + 1
                if row is 0 or row is len(grid) - 1:
                    p = p + 1
                if zone is 0 or zone is len(grid[row]) - 1:
                    p = p + 1
                if zone < len(grid[row]) - 1 and grid[row][zone + 1] is 0:
                    p = p + 1
                if zone > 0 and grid[row][zone - 1] is 0:
                    p = p + 1
                if row > 0 and grid[row - 1][zone] is 0:
                    p = p + 1
    return p
