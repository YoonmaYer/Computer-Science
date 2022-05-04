PI = 3.14


def circleArea(radius):
    return PI*(radius**2)


def circleCircumference(radius):
    return PI*2*radius


print("반지름이 5인 원의 면적: ", circleArea(5))
print("반지름이 5인 원의 둘레: ", circleCircumference(5))
