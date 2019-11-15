#!/usr/bin/python3


def island_perimeter(grid):
    """
    get the perimeter of the island
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """
    if type(grid) is not list:
        return (0)
    else:
        for elem in grid:
            if type(elem) is not list:
                return (0)
            else:
                for cell in elem:
                    if type(cell) is not int:
                        return (0)
    count = 0
    islands = 0
    if len(grid) > 100:
        return (0)
    else:
        tam = len(grid[0])
        for elem in grid:
            if len(elem) > 100 or len(elem) != tam:
                return (0)

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                top = row - 1
                down = row + 1
                left = col - 1
                right = col + 1
                if top >= 0 and grid[top][col] == 0:
                    count = count + 1
                if down < len(grid) and grid[down][col] == 0:
                    count = count + 1
                if left >= 0 and grid[row][left] == 0:
                    count = count + 1
                if right < len(grid[row]) and grid[row][right] == 0:
                    count = count + 1

    return (count)
