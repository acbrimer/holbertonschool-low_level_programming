#!/usr/bin/python3
""" Module for calculating the perimeter of an island of 1s in a sea of 0s """


def island_perimeter(grid):
    """Return the perimeter of the island of 1's"""
    grid_h = len(grid) - 1
    grid_w = len(grid[0]) - 1
    all_coords = sum([
        [(x, y, val) for (x, val) in enumerate(row)]
        for (y, row) in enumerate(grid)
    ], [])
    land_coords = map(
        lambda c: (c[0], c[1]), filter(lambda x: x[2] == 1, all_coords))
    perim = 0
    for c in land_coords:
        if c[0] == 0 or c[1] == 0 or c[0] == grid_w or c[1] == grid_h:
            perim = 0
            break
        if c[1] > 0 and grid[c[1] - 1][c[0]] == 0:
            perim += 1
        if c[1] < grid_h and grid[c[1] + 1][c[0]] == 0:
            perim += 1
        if c[0] > 0 and grid[c[1]][c[0] - 1] == 0:
            perim += 1
        if c[0] < grid_w and grid[c[1]][c[0] + 1] == 0:
            perim += 1
    return perim
