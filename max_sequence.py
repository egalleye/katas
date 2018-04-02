def maxSequence(arr):
    if not arr:
        return 0
    max_seq = curr_max = arr[0]
    for num in arr[1:]:
        curr_max = max(num, curr_max+num)
        max_seq = max(curr_max, max_seq)
    if (max_seq < 0):
        return 0
    return (max_seq)


if __name__ == "__main__":
    #arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    arr = []
    print (maxSequence(arr)) 
