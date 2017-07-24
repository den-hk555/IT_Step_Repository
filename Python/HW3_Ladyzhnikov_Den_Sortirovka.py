import random, time

def sort_buble(list_input) :
    n = 1
    while n < len(list_input) :
        for i in range(len(list_input) - n):
            if list_input[i] > list_input[i + 1]:
                list_input[i],list_input[i + 1] = list_input[i + 1],list_input[i]
        n += 1
    return list(list_input)


def sort_selection(list_input):
    
    for i in range(len(list_input)):
        Min = i
        for j in range(i + 1, len(list_input)):
            if list_input[j] < list_input[Min]:
                Min = j
                # print(list_input)
        tmp = list_input[Min]
        list_input[Min] = list_input[i]
        list_input[i] = tmp
    return list(list_input)


def sort_merge(list_input):

    if len(list_input)>1:
        Mid = len(list_input) // 2
        LeftPart = list_input[:Mid]
        RightPart = list_input[Mid:]

        sort_merge(LeftPart)
        sort_merge(RightPart)
	
        i = 0
        j = 0
        k = 0
        while i < len(LeftPart) and j < len(RightPart):
            if LeftPart[i] < RightPart[j]:
                list_input[k] = LeftPart[i]
                i += 1
            else:
                list_input[k] = RightPart[j]
                j += 1
            k += 1

        while i < len(LeftPart):
            list_input[k] = LeftPart[i]
            i += 1
            
	
        while j < len(RightPart):
            list_input[k] = RightPart[j]
            j += 1
            k += 1

    return list(list_input)


def sort_quick(list_input):

    if len(list_input) <= 1:
        return list_input
    else:
        RandDiv = random.choice(list_input)
        LeftPart = []
        Mediana = []
        RightPart = []
        for Elem in list_input:
            if Elem < RandDiv:
                LeftPart.append(Elem) 
            elif Elem > RandDiv: 
                RightPart.append(Elem) 
            else: 
                Mediana.append(Elem)
        return sort_quick(LeftPart) + Mediana + sort_quick(RightPart)

    return list(list_input)


def list_shuffled(Lenght_N) :
    list_input = list(range(0, Lenght_N - 1))
    # print(list_input)
    random.shuffle(list_input)
    # print(list_input_N)
    # list_input = list.copy(list_input_N)
    # print(list_input)    
    return list(list_input)

def list_randint(Num_head, Num_tail, Lenght_N) :
    for i in range (Lenght_N):
        list_input.append(random.randint(Num_head, Num_tail))
    return list(list_input)

def list_randfloat(Num_head, Num_tail, Lenght_N) :
    for i in range (Lenght_N):
        list_input.append(random.uniform(Num_head, Num_tail))
    return list(list_input)



if __name__ == "__main__":

    list_input = []
    Num_head = int(input("Input Number Begin List : \n")) 
    Num_tail = int(input("Input Number End List : \n"))
    Lenght_N = int(input("Input Lenght of List : \n"))

    # print(list_shuffled(Lenght_N))
    print(list_randint(Num_head, Num_tail, Lenght_N))
    # print(list_randfloat(Num_head, Num_tail, Lenght_N))
        
    time_begin = time.clock()
    
    # print(sorted(list_input))

    # print(sort_selection(list_input))

    # print(sort_buble(list_input))
    # print(sort_buble(list_shuffled(Lenght_N)))

    # print(sort_merge(list_input))
    
    print(sort_quick(list_input))
    
    time_end = time.clock()
    time_sort = time_end - time_begin
    print(time_sort)
