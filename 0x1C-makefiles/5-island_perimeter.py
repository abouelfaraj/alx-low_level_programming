#!/usr/bin/python3

"""Module island_perimeter"""


def island_perimeter(grid):
    """function def island_perimeter(grid): that returns the perimeter"""

    perimeter = 0
    lcolumns = 0
    lrows = len(grid)

    if grid != []:
        lcolumns = len(grid[0])

    for a in range(lrows):
        for b in range(lcolumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == lrows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == lcolumns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
