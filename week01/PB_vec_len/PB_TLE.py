#!/usr/bin/env python3

import math

try:
    while True:
        ans = 0
        n = int(input())
        x = [float(_)**2 for _ in input().strip().split()]
        for _ in x:
            ans += _
        print('%.3f'%math.sqrt(ans))
except EOFError:
    pass
