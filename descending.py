def Descending_Order(num):
    descending_num = 0
    num_list = []
    numstr = str(num)
    for digit in numstr:
        num_list.append(int(digit))
    num_list.sort()
    num_list.reverse()
    for digit in num_list:
        descending_num += digit
        descending_num *= 10
    descending_num /= 10
    return int(descending_num)

if __name__ == "__main__":
    #num = [1, 2, 3, 4]
    num = 1234
    print (Descending_Order(num))
