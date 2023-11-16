//Jasmine Franklin
#cubes odd #s 0-19 and prints to terminal
#prints the even numbers as is

import math

def cb(num):
    return pow(num, 3)

for x in range(20):
    if x % 2 == 0:
        print(x)
    else:
        print(cb(x))
