angka = int(input("Input:\n"))

if (angka == 0):
    print("Output:\nNol")
elif (1 <= angka <= 9):
    print("Output:\nSatuan")
elif (10 <= angka <= 19):
    print("Output:\nBelasan")
elif (20 <= angka <= 99):
    print("Output:\nPuluhan")
else :
    print("Output:\nAnda Menginput Melebihi Limit Bilangan")
