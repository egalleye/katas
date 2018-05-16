
def sort_odds_only(source_array):
    odds_list = []
    final_list = []
    itor = 0
    for num in source_array:
        if (num % 2 == 0):
            final_list.append(num)
        else:
            odds_list.append(num)
            final_list.append(-1)
    odds_list.sort(reverse=True)
    for num in final_list:
        if (num == -1):
            final_list[itor] = odds_list.pop()
        itor += 1
    return final_list

if __name__ == "__main__":
    print(sort_odds_only([5, 3, 2, 8, 1, 4]))
