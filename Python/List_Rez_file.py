from random import choice, randint


def can_be_split(input_list):
    sum_pos = 0
    for i in range (len(input_list)):
        sum_pos = sum_pos + (input_list[i])
        sum_neg = sum(input_list) - sum_pos
        if sum_pos == sum_neg:
            return True
    return False


def generate_input(size, limit=1000):
    status = choice([True, False])
    if status == True:
        size_left = randint(1, size-1)
        left = [randint(-limit, limit) for i in range(size_left)]
        right = [randint(-limit, limit) for i in range(size - size_left)]
        if sum(left) != sum(right):
            left[0] += (sum(right) - sum(left))
        return left + right, status
    else:
        output = [0]
        for _ in range(size-1):
            output.append(output[-1] + randint(2, limit))
        return output, status

def test(run_count, size):
    for _ in range(run_count):
        number_list, ground_truth = generate_input(size)
        if can_be_split(number_list) != ground_truth:
            return "Fail"
    return "OK"

if __name__ == "__main__":
    print("Status: %s" % test(10, 100))
