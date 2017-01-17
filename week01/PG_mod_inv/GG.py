#!/usr/bin/env python3

from random import randint, random

print(500)
for _ in range(500):
    m = randint(2,104857600)
    n = randint(1,m-1)
    print(n,m)
