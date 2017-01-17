#!/usr/bin/env python3

try:
    while True:
        ans = 0
        x = (int(_) for _ in input().strip().split())
        y = (int(_) for _ in input().strip().split())
        for _,__ in zip(x,y):
            ans += _*__
        print(ans)
except:
    pass
