for s in ["", "0", "False", " ", "abc"]:
    if s:
        print(repr(s), "-> True")
    else:
        print(repr(s), "-> False")

name = input("name: ")
print("Hello,", name or "anonymous")
print(bool(""), bool("False"), not "")
