T = int(input())

for i in range(1, T + 1):
    n = int(input())

    print("Case " + str(i) + ": ", end="")
    for j in range(1, n+1):
        if n % j == 0:
            print(str(j) + " ", end="")
    print("")
