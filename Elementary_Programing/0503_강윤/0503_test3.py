# 정수 1부터 10까지의 누적합 계산
def get_sum(start, end):
    sum = 0
    for i in range(start, end+1):
        sum += i
    return sum

print(get_sum(1, 10))

# acc_sum = get_sum(1,10)
# print(acc_sum)
