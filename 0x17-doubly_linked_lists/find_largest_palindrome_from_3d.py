#!/usr/bin/python3
import sys
largest_pal = 0
for i in range(999, 100, -1):
    for j in range(i, 100, -1):
        product = i * j
        if product > largest_pal:
            product_str = str(product)
            if product_str == product_str[::-1]:
                largest_pal = product

file = open('102-result', 'w')
file.write(str(largest_pal))
