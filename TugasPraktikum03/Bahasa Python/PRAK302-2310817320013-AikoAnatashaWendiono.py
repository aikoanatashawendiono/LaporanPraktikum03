huruf = int(input("Input:\n"))

if (huruf >= 80):
    print("Output:\nA")
elif (70 <= huruf <= 79):
    print("Output:\nB")
elif (60 <= huruf <= 69):
    print("Output:\nC")
elif (50 <= huruf <= 59):
    print("Output:\nD")
elif (huruf < 50):
    print("Output:\nE")