def plus(a, b):
    return a+b


def minus(a, b):
    return a-b


def multiple(a, b):
    return a*b


def division(a, b):
    return a/b


a = int(input())
b = int(input())
print("(%d + %d) = %d" % (a, b, plus(a, b)))
print("(%d - %d) = %d" % (a, b, minus(a, b)))
print("(%d * %d) = %d" % (a, b, minus(a, b)))
print("(%d / %d) = %d" % (a, b, minus(a, b)))
