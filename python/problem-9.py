import math

T = int(input())

for i in range(1, T + 1):

    n = int(input())

    result = math.sqrt(n)

    temp = result * result

    if temp == n:
        print("YES")
    else:
        print("NO")

