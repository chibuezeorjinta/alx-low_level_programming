#!/usr/bin/python3
"""
Create a functio to test your brain
"""

def island_perimeter(grid):
    """
    finds the perimeter of a grid of 1's and 0's
    Args:
        grid = Given grid
    """
    count=0
    for k in range(len(grid)):
        for v in range(len(grid[k])):
            try:
                if grid[k][v] == 1:
                    if grid[k-1][v] == 0:
                        count = count + 1
                    if grid[k+1][v] == 0:
                        count = count + 1
                    if grid[k][v+1] == 0:
                        count = count + 1
                    if grid[k][v-1] == 0:
                        count = count + 1
            except IndexError:
                continue
    return count
