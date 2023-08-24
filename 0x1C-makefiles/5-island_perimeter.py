#!/usr/bin/python3
"""Defines island_perimeter function"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid

    Args:
        grid (list): a list of list of integers
            - 0 represents a water zone
            - 1 represents a land zone
            - One cell is a square with side length 1
            - cells are connected horizontally/vertically(not diagonally)
            - Grid is rectangular, width and height don't exceed 100
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for i in range(1, height):
        for j in range(1, width):
            if grid[i][j] == 1:
                if grid[i][j-1] == 0:
                    perimeter += 1
                if grid[i][j+1] == 0:
                    perimeter += 1
                if grid[i-1][j] == 0:
                    perimeter += 1
                if grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
