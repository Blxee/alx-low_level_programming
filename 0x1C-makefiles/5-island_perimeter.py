#!/usr/bin/python3
"""Module for the ``island_perimeter()`` function"""


def island_perimeter(grid):
    """
    Function that calculates the perimeter of an island
    Args:
        grid (list[int]): matrix that describes the water and land zones
    Returns:
        the perimeter of the island
    """
    if not grid:
        return
    perimeter = 0
    for y, row in enumerate(grid):
        for x, zone in enumerate(row):
            if zone == 1:
                perimeter += 4
                neighbors = (
                    (x - 1, y),
                    (x + 1, y),
                    (x, y - 1),
                    (x, y + 1))
                for nx, ny in neighbors:
                    try:
                        if grid[ny][nx] == 1:
                            perimeter -= 1
                    except IndexError:
                        pass
    return perimeter
