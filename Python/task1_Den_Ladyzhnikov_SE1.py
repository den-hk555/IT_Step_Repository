import time

def collatz(n):
    """
    >>> collatz(100)
    (97, 118)
    >>> collatz(1000)
    (871, 178)
    >>> collatz(10000)
    (6171, 261)
    >>> collatz(100000)
    (77031, 350)
    >>> collatz(1000000)
    (837799, 524)
    """
    memory = {}
    maxLenTraject = 1
    for i in range(1, n):
        k, pathLen = i, 0


        while k > 1:
            if k in memory:
                if k % 2:
                    k = 3 * k + 1
                else:
                    k //= 2
                pathLen += 1
                memory.update({i : pathLen})
                break 
            else:
                
                memory.update({i : pathLen})
                pathLen += memory[k]
                    
        memory[i] = pathLen
       
        if memory[maxLenTraject] < pathLen:
            maxLenTraject = i
    return (maxLenTraject, memory[maxLenTraject])





if __name__ == "__main__":
    time_begin = time.clock()
    import doctest
    doctest.testmod()
    time_end = time.clock()
    print(time_end - time_begin)

    time_begin = time.clock()
    tupleCollatz = collatz(100)
    print(tupleCollatz)
    time_end = time.clock()
    print(time_end - time_begin)

    time_begin = time.clock()
    tupleCollatz = collatz(1000)
    print(tupleCollatz)
    time_end = time.clock()
    print(time_end - time_begin)

    time_begin = time.clock()
    tupleCollatz = collatz(10000)
    print(tupleCollatz)
    time_end = time.clock()
    print(time_end - time_begin)

    time_begin = time.clock()
    tupleCollatz = collatz(100000)
    print(tupleCollatz)
    time_end = time.clock()
    print(time_end - time_begin)

    time_begin = time.clock()
    tupleCollatz = collatz(1000000)
    print(tupleCollatz)
    time_end = time.clock()
    print(time_end - time_begin)


