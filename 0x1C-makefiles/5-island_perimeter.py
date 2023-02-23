#!/usr/bin/python3
""" Defines an island perimeter """


def island_perimeter(grid):
	""" Returns perimeter of the island
	The grid represents water by 0 and land by 1
	Args:
		grid: A list of integers 
	Returns:
		Perimeter of the island defined in grid
	 """
	land = 0
	neighbours = 0

	for i in range(len(grid)):
		for j in range(len(grid[0])):
			if grid[i][j] == 1:
				land += 1
				if i < (len(grid) - 1):
					if grid[i + 1][j] == 1:
						neighbours += 1
				if j < (len(grid[0]) - 1):
					if grid[i][j + 1] == 1:
						neighbours += 1

	return 4 * land - 2 * neighbours
