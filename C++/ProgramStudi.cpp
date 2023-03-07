/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Header.hh"

/* Constructor */
ProgramStudi::ProgramStudi()
{
    this->nama_prodi = "";
    this->kode = "";
}
ProgramStudi::ProgramStudi(string nama_prodi, string kode, Course course)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course.push_back(course);
}

/* Setter & Getter untuk Nama Mata Kuliah */
string ProgramStudi::getNama_prodi()
{
    return this->nama_prodi;
}
void ProgramStudi::setNama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

/* Setter & Getter untuk Kode Mata Kuliah */
string ProgramStudi::getKode()
{
    return this->kode;
}
void ProgramStudi::setKode(string kode)
{
    this->kode = kode;
}

/* Setter & Getter untuk Course */
list<Course> ProgramStudi::getCourse()
{
    return this->course;
}
void ProgramStudi::setCourse(Course course)
{
    this->course.push_back(course);
}

/* Destructor */
ProgramStudi::~ProgramStudi()
{
}
