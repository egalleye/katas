

def sum_two_smallest_numbers(numbers):
    smallest = -1
    secondSmallest = -1
    for num in numbers:
        if ( smallest < 0 ):
            smallest = num
        else:
            if ( num < smallest ):
                secondSmallest = smallest
                smallest = num
            elif ( num < secondSmallest or secondSmallest < 0 ):
                secondSmallest = num
    return smallest + secondSmallest
    #print ("smallest is {0} second is {1}".format(smallest, secondSmallest))


if __name__ == "__main__":
    sum_two_small = 0
    sum_two_small = sum_two_smallest_numbers([25, 42, 12, 18, 22])
    print("result = ", sum_two_small)

