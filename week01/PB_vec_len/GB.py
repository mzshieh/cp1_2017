#!/usr/bin/env python3

from random import randint, random

def one_vec(n):
    print(n)
    line = []
    for _ in range(n):
        line.append(str(randint(-100,100)))
        line.append(' '*randint(0,4))
    print(' '.join(line).strip())

for _ in range(500):
    one_vec(randint(9000,10000))
