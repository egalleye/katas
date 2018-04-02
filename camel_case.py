def camel_case(string):
    string = string.split()
    string = list(map(lambda ss: ss.capitalize(), string))
    string = ''.join(string)
    return string


if __name__ == "__main__":
    #string = "hello world"
    string = "camel case word"
    print (camel_case(string))
