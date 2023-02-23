#!/usr/bin/python3
""" Module calculates the perimeter of an island in a grid """


def water_neis(grid, i, j):
	""" Returns water zone in the grid """

	num = 0

	if i <= 0 or not grid[i - 1][j]:
		num =+ 1
	if j <= 0 or not grid[i][j - 1]:
		num =+ 1
	if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
		num =+ 1
	if i >= len(grid) - 1 or not grid[i + 1][j]:
		num =+ 1

	return num

def island_perimeter(grid):
	"Returns the perimeter of the island described in grid"

	perimeter = 0
	for i in range(len(grid)):
		for j in range(len(grid[i])):
			if grid[i][j]:
				perimeter += water_neis(grid, i, j)

	return perimeter
