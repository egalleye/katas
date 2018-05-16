import string

def is_pangram(s):
    s = s.lower()
    str_len = len(s)
    rev_itor = str_len - 1
    for itor in range(0, int(str_len/2)):
        if (s[itor] != s[rev_itor]):
            return False
        rev_itor -= 1
    return True

if __name__ == "__main__":
    is_pangram("abcba")
