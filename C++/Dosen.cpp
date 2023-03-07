/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Header.hh"

/* Constructor */
Dosen::Dosen() : SivitasAkademik()
{
    this->NIP = "";
    this->faculty = "";
    this->major = "";
    this->pend_terakhir = "";
    this->keahlian = "";
}
Dosen::Dosen(string NIK, string name, string gender, string asal_universitas, string email_edu, string NIP, string faculty, string major, string pend_terakhir, string keahlian)
    : SivitasAkademik(NIK, name, gender, asal_universitas, email_edu)
{
    this->NIP = NIP;
    this->faculty = faculty;
    this->major = major;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

/* Setter & Getter untuk NIP */
string Dosen::getNIP()
{
    return this->NIP;
}
void Dosen::setNIP(string NIP)
{
    this->NIP = NIP;
}

/* Setter & Getter untuk Jurusan */
string Dosen::getMajor()
{
    return this->major;
}
void Dosen::setMajor(string major)
{
    this->major = major;
}

/* Setter & Getter untuk Fakultas */
string Dosen::getFaculty()
{
    return this->faculty;
}
void Dosen::setFaculty(string faculty)
{
    this->faculty = faculty;
}

/* Setter & Getter untuk Pendidikan Terakhir */
string Dosen::getPend_terakhir()
{
    return this->pend_terakhir;
}
void Dosen::setPend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

/* Setter & Getter untuk Keahlian */
string Dosen::getKeahlian()
{
    return this->keahlian;
}
void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

/* Destructor */
Dosen::~Dosen()
{
}
