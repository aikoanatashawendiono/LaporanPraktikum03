detik = int(input("Input: \n"))

hari = detik // 86400
hari_sisa = detik % 86400
jam = hari_sisa // 3600
detik_sisa = detik % 3600
menit = detik_sisa // 60
detik = detik_sisa % 60

if (hari >= 1):
    waktu_format = f"{hari:01d} hari {jam:02d}:{menit:02d}:{detik:02d}"
    print("Output:")
    print(waktu_format)
else:
    waktu_format = f"{jam:02d}:{menit:02d}:{detik:02d}"
    print("Output:")
    print(waktu_format)
    