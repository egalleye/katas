def title_case(title, minor_words):
    final_title = ""
    title_list = title.lower().split()
    if minor_words is not None:
        minor_words_list = minor_words.lower().split()

    for word in title_list:
        if word is title_list[0]:
            final_title = word.capitalize() + ' '
        else:
            if minor_words is not None:
                if word not in minor_words_list:
                    final_title += word.capitalize() + ' '
                else:
                    final_title += word + ' '
            else:
                final_title += word.capitalize() + ' '
    final_title  = final_title[:-1]   
    return final_title
    


if __name__ == "__main__":
    print (title_case('a clash of KINGS', 'a an the of'))
    print (title_case('THE WIND IN THE WILLOWS', 'The In'))
    print (title_case('the quick brown fox', None))


