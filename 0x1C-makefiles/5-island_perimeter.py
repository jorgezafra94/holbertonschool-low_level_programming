#!/usr/bin/python3


def island_perimeter(grid):
    """
    get the perimeter of the island
    0 represents a water zone
    1 represents a land zone
    """
    count = 0
    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 1:
                top = row - 1
                down = row + 1
                left = cell - 1
                right = cell + 1
                if top >= 0 and grid[top][cell] == 0:
                    count = count + 1
                if down < len(grid) and grid[down][cell] == 0:
                    count = count + 1
                if left >= 0 and grid[row][left] == 0:
                    count = count + 1
                if right < len(grid[row]) and grid[row][right] == 0:
                    count = count + 1
    return (count)
