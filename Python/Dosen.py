# Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
# Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from SivitasAkademik import SivitasAkademik


class Dosen(SivitasAkademik):  # Dosen mewarisi Sivitas Akademik.
    # Attribut private
    __NIP = ""
    __faculty = ""
    __major = ""
    __pend_terakhir = ""
    __keahlian = ""

    # Constructor
    def __init__(self, NIP="", faculty="", major="", pend_terakhir="", keahlian="", asal_universitas="", email_edu="", NIK="", name="", gender=""):
        super().__init__(asal_universitas, email_edu, NIK, name, gender)
        self.__NIP = NIP
        self.__faculty = faculty
        self.__major = major
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian

    # Setter dan Getter
    # Setter & Getter untuk NIP.
    def getNIP(self):
        return self.__NIP

    def setNIP(self, NIP):
        self.__NIP = NIP

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

    # Setter & Getter untuk Pendidikan Terakhir.
    def getPend_terakhir(self):
        return self.__pend_terakhir

    def setPend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    # Setter & Getter untuk Keahlian.
    def getKeahlian(self):
        return self.__keahlian

    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
