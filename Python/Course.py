# Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
# Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Course:  # Course (Mata Kuliah) memiliki Dosen dan Mahasiswa.
    # Attribut private
    __matkul = ""
    __dosen = ""
    __mahasiswa = []

    # Constructor
    def __init__(self, matkul="", dosen="", mahasiswa=[]):
        self.__matkul = matkul
        self.__dosen = dosen
        self.__mahasiswa = mahasiswa or []
        # Note: Mahasiswa dijadikan Array of List karena dalam satu mata kuliah,
        # ada kemungkinan bahwa mata kuliah tersebut dikontrak oleh lebih dari 1 mahasiswa.

    # Setter dan Getter
    # Setter & Getter untuk Nama Mata Kuliah.
    def getMatkul(self):
        return self.__matkul

    def setMatkul(self, matkul):
        self.__matkul = matkul

    # Setter & Getter untuk Dosen.
    def getDosen(self):
        return self.__dosen

    def setDosen(self, dosen):
        self.__dosen = dosen

    # Setter & Getter untuk Mahasiswa.
    def getMahasiswa(self):
        return self.__mahasiswa

    def setMahasiswa(self, mahasiswa):
        self.__mahasiswa.append(mahasiswa)
