#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for r in matrix:
        for c in r:
            print("{}".format(c), end=" " if c != r[-1] else "")
        print()
