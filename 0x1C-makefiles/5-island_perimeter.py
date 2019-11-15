#!/usr/bin/python3
"""
get perimeter of island
"""


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
                if row == 0 or grid[row - 1][col] == 0:
                    count = count + 1
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    count = count + 1
                if col == 0 or grid[row][col - 1] == 0:
                    count = count + 1
                if col == len(grid[row]) - 1 or grid[row][col + 1] == 0:
                    count = count + 1
    return (count)
