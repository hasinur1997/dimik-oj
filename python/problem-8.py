T = int(input())

for i in range(1, T + 1):
    n1 = int(input())
    n2 = int(input())
    n3 = int(input())

    if n1 > n3:
        n1, n3 = n3, n1

    if n1 > n2:
        n1, n2 = n2, n1

    if n2 > n3:
        n2, n3 = n3, n2

    print(f"Case {i}: {n1}, {n2}, {n3}")
