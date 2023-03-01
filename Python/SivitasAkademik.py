# Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
# Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Human import Human


class SivitasAkademik(Human):  # Sivitas Akademik mewarisi Human.
    # Attribut private
    __asal_universitas = ""
    __email_edu = ""

    # Constructor
    def __init__(self, asal_universitas="", email_edu="", NIK="", name="", gender=""):
        super().__init__(NIK, name, gender)
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu

    # Setter dan Getter
    # Setter & Getter untuk Asal Universitas.
    def getAsal_universitas(self):
        return self.__asal_universitas

    def setAsal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas

    # Setter & Getter untuk Email Edu.
    def getEmail_edu(self):
        return self.__email_edu

    def setEmail_edu(self, email_edu):
        self.__email_edu = email_edu
