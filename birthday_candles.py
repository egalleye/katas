

def birthday_candles(age, candles):
    max = 0
    tallest = 0
    for candle in candles:
        if (max < candle):
            max = candle
            tallest = 1
        elif (max == candle):
            tallest += 1
        
    print ("There are {0} tallest candles".format(tallest))



if __name__ == "__main__":
    birthday_candles(4, [3, 2, 1, 3])
