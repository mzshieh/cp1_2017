#!/usr/bin/env python3

from random import randint

def two_vec(n):
    line = []
    for _ in range(n):
        line.append(str(randint(0,(1<<32)-1)))
        line.append(' '*randint(0,4))
    print(' '.join(line))

for _ in range(500):
    two_vec(randint(1,100))
