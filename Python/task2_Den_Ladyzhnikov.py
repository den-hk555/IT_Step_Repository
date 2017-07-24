import os, time

def anagrams(filein, fileout):
    with open(filein,"r") as file_f:
        anagramm_data = {}
        for word in file_f:
            word = word.strip()
            sorted_word = sorted_string(word)
            if sorted_word in anagramm_data:
                anagramm_data[sorted_word].append(word)
            else :
                anagramm_data[sorted_word]=[word]

#    with open("set.txt", "w") as file:
#        print(set, file = file)


    with open(fileout, "w") as file_f:
        count_family_anagram = 0
        for v in anagramm_data.values():
            if len(v)>1:
                count_family_anagram += 1
                file_f.write(" ".join(v) + "\n")
    print("количество семейств анаграмм = ", count_family_anagram)

def sorted_string(str_data):
    return ''.join(sorted(str_data))


if __name__ == "__main__":

    DATA_DIR = "C:/Users/Den/Documents/ItSTEP/Основы ПО и алгоритмизации/Python/Exam"
    os.chdir(DATA_DIR)
    time_begin = time.clock()
    anagrams("zaliznyak.txt", "anagrams.txt")
    time_end = time.clock()
    print(time_end - time_begin)
