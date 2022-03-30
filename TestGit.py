def swap(a,b):
    print("id(a)", id(a))
    print("id(b)", id(b))
    temp = a
    a = b
    b = temp
    print("id(a)", id(a))
    print("id(b)", id(b))
    print("a:", a)
    print("b:", b)

c = 10
d = 20
print("id(c)", id(c))
print("id(d)", id(d))
swap(c,d)
print(c)
print(d)
