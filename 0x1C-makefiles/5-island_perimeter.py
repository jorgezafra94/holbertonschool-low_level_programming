#!/usr/bin/python3


def island_perimeter(grid):
    """
    get the perimeter of the island
    0 represents a water zone
    1 represents a land zone
    """
    count = 0
    flag = 0
    if len(grid) > 100:
        flag = 1
    else:
        for elem in grid:
            if len(elem) > 100:
                flag = 1
    if flag == 0:
        for row in range(len(grid)):
            for c in range(len(grid[row])):
                if grid[row][c] == 1:
                    t = row - 1
                    d = row + 1
                    l = c - 1
                    r = c + 1
                    if t >= 0 and t < len(grid[t]) and grid[t][c] == 0:
                        count = count + 1
                    if d < len(grid) and d < len(grid[d]) and grid[d][c] == 0:
                        count = count + 1
                    if l >= 0 and grid[row][l] == 0:
                        count = count + 1
                    if r < len(grid[row]) and grid[row][r] == 0:
                        count = count + 1
    return (count)
