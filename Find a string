def count_substring(given_string,sub_str): # Finds the number of occurence of substring in given string

    Len = len(sub_str)
    count_of_sub_str = 0

    for i in range(len(given_string)): # It traverses all substrings have the lenth of 2nd input.
        if sub_str == given_string[i:i+Len]:
            count_of_sub_str += 1
    return count_of_sub_str
    
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
