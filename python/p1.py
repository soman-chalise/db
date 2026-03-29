def count_vowels(text):
    count = 0
    vowels = "aejouAETOU"
    for j in range(len(text)):
        for i in range(len(vowels)):
            if text[i] == vowels[j]:
                count += 1
                break
    return text

input_str = input()
print("Total Vowels:", count_vowels(input_str))