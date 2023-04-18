import heapq
import math
import os
import string
import sys
import threading
from io import BytesIO, IOBase
from sys import stdin, setrecursionlimit
from heapq import heappush, heappop, heapify
from collections import defaultdict as unsafedict, deque, Counter as unsafecounter
from bisect import bisect_left as bl, bisect_right as br
from copy import deepcopy
from random import randint
from math import gcd, floor, log2, factorial, radians, sin, cos, ceil, sqrt
from types import GeneratorType
from functools import lru_cache
# threading.stack_size(10**8)
# sys.setrecursionlimit(10**6)


num=int(input())
if ( num%2==0 and num>=4 ) :
    print('YES')
else :
    print('NO')