def get_sum(a, b):
    getsum = 0
    if (a > b):
        tmp = b
        b = a
        a = tmp
    for num in range(a, b+1):
        getsum += int(num)
    return getsum


if __name__ == "__main__":
    print (get_sum(0, -1))
