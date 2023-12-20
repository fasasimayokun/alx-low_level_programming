#!/usr/bin/python3
"""an island perimeter measuring function"""


def island_perimeter(grid):
    """a func that returns the perimeter of an island
    the grid argument represents water by 0 and land by 1

    Args:
        grid (list): A matrix of integers representing an island
    Returns:
        the perimetr of the island in grid
    """

    width = len(grid[0])
    height = len(grid)
    eds = 0
    siz = 0

    for el in range(height):
        for nm in range(width):
            if grid[el][nm] == 1:
                siz = siz + 1
                if (nm > 0 and grid[el][nm - 1] == 1):
                    eds = eds + 1
                if (el > 0 and grid[el - 1][nm] == 1):
                    eds = eds + 1
    return siz * 4 - eds * 2
