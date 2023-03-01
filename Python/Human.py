# Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
# Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Human:
    # Attribut private
    __NIK = ""
    __name = ""
    __gender = ""

    # Constructor
    def __init__(self, NIK="", name="", gender=""):
        self.__NIK = NIK
        self.__name = name
        self.__gender = gender

    # Setter dan Getter
    # Setter & Getter untuk NIK.
    def getNIK(self):
        return self.__NIK

    def setNIK(self, NIK):
        self.__NIK = NIK

    # Setter & Getter untuk Nama.
    def getName(self):
        return self.__name

    def setName(self, name):
        self.__name = name

    # Setter & Getter untuk Gender.
    def getGender(self):
        return self.__gender

    def setGender(self, gender):
        self.__gender = gender
