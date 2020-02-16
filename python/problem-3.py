# my_math.arith.ops

counter = 0

for i in range(100, 0, -1):
    print(i, end="\t")
    counter = counter + 1

    if counter >= 5:
        print("")
        counter = 0
