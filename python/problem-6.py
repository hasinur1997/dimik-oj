T = int(input())


def get_first_digit(n):

    first = n

    while(first >= 10):
        first = first / 10

    return first


for i in range(1, T + 1):
    n = int(input())
    first = get_first_digit(n)
    last = n % 10
    sum = first + last
    print("Sum = " + str(sum))
