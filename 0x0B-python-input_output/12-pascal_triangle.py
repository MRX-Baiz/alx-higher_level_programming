#!/usr/bin/python3
'''Pascal's Triangle'''


def pascal_triangle(n):
    '''Pascal's Triangle'''
    if n <= 0:
        return []

    pascal = [[1]]
    while len(pascal) != n:
        prevrow = pascal[-1]
        nextrow = [1]
        for i in range(len(prevrow) - 1):
            nextrow.append(prevrow[i - 1] + prevrow[i])
        nextrow.append(1)
        pascal.append(nextrow)
    return triangles
