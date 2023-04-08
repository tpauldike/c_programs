#!/usr/bin/env python3
#a program that prints a tree
height = int(input("Enter the height of the tree to be drawn: "))
num = 1

for i in range(3, height, 2):
    space = (height//2)
    while (space >= -1):
        if space >= 0:
            continue
        print(' ')
        for j in range(1, num):
            print('#')
        space -= 1
        num += 2
