# Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
# Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from SivitasAkademik import SivitasAkademik


class Mahasiswa(SivitasAkademik):  # Mahasiswa mewarisi Sivitas Akademik.
    # Attribut private
    __NIM = ""
    __faculty = ""
    __major = ""

    # Constructor
    def __init__(self, NIM="", faculty="", major="", asal_universitas="", email_edu="", NIK="", name="", gender=""):
        super().__init__(asal_universitas, email_edu, NIK, name, gender)
        self.__NIM = NIM
        self.__faculty = faculty
        self.__major = major

    # Setter dan Getter
    # Setter & Getter untuk NIM.
    def getNIM(self):
        return self.__NIM

    def setNIM(self, NIM):
        self.__NIM = NIM

    # Setter & Getter untuk Faculty/Fakultas.
    def getFaculty(self):
        return self.__faculty

    def setFaculty(self, faculty):
        self.__faculty = faculty

    # Setter & Getter untuk Major/Prodi.
    def getMajor(self):
        return self.__major

    def setMajor(self, major):
        self.__major = major
