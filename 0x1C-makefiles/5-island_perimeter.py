#!/usr/bin/python3
def island_perimeter(grid):
    grid_h = len(grid)
    grid_w = len(grid[0])
    all_coords = sum([
        [(x, y, val) for (x, val) in enumerate(row)]
        for (y, row) in enumerate(grid)
    ], [])
    land_coords = map(
        lambda c: (c[0], c[1]), filter(lambda x: x[2] == 1, all_coords))
    str_land_coords = set(
        map(lambda c: "{0}-{1}".format(c[0], c[1]),
            filter(lambda x: x[2] == 1, all_coords)))
    border_coords = list(filter(
        lambda f: min(f) >= 0 and f[0] < grid_w and f[1] < grid_h,
        sum(
            map(lambda c:
                list([
                     [c[0], c[1] + 1],
                     [c[0], c[1] - 1],
                     [c[0] - 1, c[1]],
                     [c[0] + 1, c[1]]
                     ]),
                land_coords), [])))
    p = len(set(["{0}-{1}".format(c[0], c[1])
            for c in border_coords]) ^ str_land_coords)
    return (p + 1)
