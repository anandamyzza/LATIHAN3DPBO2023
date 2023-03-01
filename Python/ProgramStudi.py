# Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
# Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class ProgramStudi:  # Program Studi memiliki Course (Mata Kuliah).
    # Attribut private
    __nama_prodi = ""
    __kode = ""
    __course = []

    # Constructor
    def __init__(self, nama_prodi="", kode="", course=[]):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__course = course or []
        # Note: Dalam satu program studi, sudah pasti memiliki lebih dari 1 mata kuliah,
        # sehingga course dijadikan Array of List.

    # Setter dan Getter
    # Setter & Getter untuk Nama Prodi.
    def getNama_prodi(self):
        return self.__nama_prodi

    def setNama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    # Setter & Getter untuk Kode Prodi.
    def getKode(self):
        return self.__kode

    def setKode(self, kode):
        self.__kode = kode

    # Setter & Getter untuk Mata Kuliah.
    def getCourse(self):
        return self.__course

    def setCourse(self, course):
        self.__course.append(course)
