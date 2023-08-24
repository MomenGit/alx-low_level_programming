#!/usr/bin/python3
"""Defines island_perimeter function"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid

    Args:
        grid (list[list[int]]): a list of list of integers represents the grid

    Returns:
        int: The perimeter of the island.

    Constraints:
        - 0 represents a water zone.
        - 1 represents a land zone.
        - One cell is a square with side length 1.
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, with width and height not exceeding 100.
        - Grid is completely surrounded by water,
          and there is one island (or nothing).
        - The island doesn't have “lakes” (water inside that isn't connected to
          the water around the island).
    """

    if not grid:
        return 0

    perimeter = 0
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                for dir_r, dir_c in directions:
                    try:
                        if grid[row+dir_r][col+dir_c] == 0:
                            perimeter += 1
                    except Exception as exp:
                        continue

    return perimeter
