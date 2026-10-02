def jumlah_lulus10(nilai):
    lulus = 0
    for i in range(10):
        if nilai[i] >= 75:
            lulus += 1
    return lulus


def jumlah_mahasiswa10():
    return 10


class NilaiMahasiswa10:
    def cek10_mahasiswa(self):
        print("Jumlah mahasiswa =", jumlah_mahasiswa10(), "\n")

        nilai = [80, 65, 90, 70, 55, 60, 85, 95, 100, 75]

        for i in range(10):
            print("Nilai mahasiswa ke-", i + 1, "=", nilai[i], ": ", end="")

            if nilai[i] >= 75:
                print("Lulus")
            else:
                print("Tidak Lulus")

        print("\nJumlah mahasiswa yang lulus =", jumlah_lulus10(nilai))


print("=======================================")
print("=        KELOMPOK 10 (SHIFT 2)        =")
print("=======================================\n")

kelompok10 = NilaiMahasiswa10()
kelompok10.cek10_mahasiswa()