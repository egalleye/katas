def delete_nth(order,max_e):
    motives_seen = {}
    limit_passed = 0
    ret_seq = []
    for motive in order:
        limit_passed = 0
        if (motive in motives_seen):
            motives_seen[motive] = motives_seen[motive] + 1
            if (motives_seen[motive] > max_e):
                limit_passed = 1
        else:
            motives_seen[motive] = 1
        if (limit_passed == 0):
            ret_seq.append(motive)
    return ret_seq 
    


if __name__ == "__main__":
    #order = [20,37,20,21]
    #max_e = 1
    order = [1,1,3,3,7,2,2,2,2]
    max_e = 3
    print (delete_nth(order, max_e))
