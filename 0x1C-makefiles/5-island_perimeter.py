#!/usr/bin/python3
"""Module that calculate the island perimeter."""


def island_perimeter(grid):
    """This function calculate the island perimeter.
    Grid: list of lists."""
    count = 0
    repeat = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
                if i != 0 and grid[i - 1][j] == 1:
                    repeat += 1
                if j != 0 and grid[i][j - 1] == 1:
                    repeat += 1
    return 4 * count - 2 * repeat
