/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Header.hh"

/* Constructor */
Course::Course()
{
    this->matkul = "";
}
Course::Course(string matkul, Dosen dosen, Mahasiswa mahasiswa)
{
    this->matkul = matkul;
    this->dosen = dosen;
    this->mahasiswa.push_back(mahasiswa);
}

/* Setter & Getter untuk Nama Mata Kuliah */
string Course::getMatkul()
{
    return this->matkul;
}
void Course::setMatkul(string matkul)
{
    this->matkul = matkul;
}

/* Setter & Getter untuk Dosen */
Dosen Course::getDosen()
{
    return this->dosen;
}
void Course::setDosen(Dosen dosen)
{
    this->dosen = dosen;
}

/* Setter & Getter untuk Mahasiswa */
list<Mahasiswa> Course::getMahasiswa()
{
    return this->mahasiswa;
}
void Course::setMahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa.push_back(mahasiswa);
}

/* Destructor */
Course::~Course()
{
}
