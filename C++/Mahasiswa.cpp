/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Header.hh"

/* Constructor */
Mahasiswa::Mahasiswa() : SivitasAkademik()
{
    this->NIM = "";
    this->faculty = "";
    this->major = "";
}
Mahasiswa::Mahasiswa(string NIK, string name, string gender, string asal_universitas, string email_edu, string NIM, string faculty, string major)
    : SivitasAkademik(NIK, name, gender, asal_universitas, email_edu)
{
    this->NIM = NIM;
    this->faculty = faculty;
    this->major = major;
}

/* Setter & Getter untuk NIM */
string Mahasiswa::getNIM()
{
    return this->NIM;
}
void Mahasiswa::setNIM(string NIM)
{
    this->NIM = NIM;
}

/* Setter & Getter untuk Jurusan */
string Mahasiswa::getMajor()
{
    return this->major;
}
void Mahasiswa::setMajor(string major)
{
    this->major = major;
}

/* Setter & Getter untuk Fakultas */
string Mahasiswa::getFaculty()
{
    return this->faculty;
}
void Mahasiswa::setFaculty(string faculty)
{
    this->faculty = faculty;
}

/* Destructor */
Mahasiswa::~Mahasiswa()
{
}
