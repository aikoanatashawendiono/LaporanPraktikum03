angka = input("Input:\n")

angka = (angka.split())

num1 = int(angka[0])
num2 = int(angka[1])

if (num1 > num2):
    num1, num2 = num2, num1
    print("Output:")
    print(num1, num2)

elif (num1 < num2):
    print("Output:")
    print(num1, num2)
