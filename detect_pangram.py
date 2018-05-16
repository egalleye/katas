def is_pangram(s):
    all_letters = [0]*26
    letter_asciival = 0
    s = s.lower()
    for letter in s:
        if letter not in all_letters:
            letter_asciival = ord(letter) - 97
            if (letter_asciival >= 0 and letter_asciival <= 26):
                all_letters[letter_asciival] = 1
    for idx in all_letters:
        if (idx != 1):
            return False
    print(all_letters)
    return True
    
    


if __name__ == "__main__":
    if (is_pangram("The quick, brown fox jumps over the lazy dog!")):
        print("True!")
    else:
        print("False!")

