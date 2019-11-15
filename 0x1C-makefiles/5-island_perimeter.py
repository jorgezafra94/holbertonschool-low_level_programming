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
    count = 0
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
