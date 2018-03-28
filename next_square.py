import math

def find_next_square(sq):

    square_root = math.sqrt(sq);
    if (square_root.is_integer() ):
        next_square = (square_root+1)*(square_root+1)
        return next_square
    else:
        return -1
    print("square root = ", square_root)


if __name__ == "__main__":
    print(find_next_square(36))
