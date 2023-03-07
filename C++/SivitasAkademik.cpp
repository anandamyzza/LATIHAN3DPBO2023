/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Header.hh"

/* Constructor */
SivitasAkademik::SivitasAkademik() : Human()
{
    this->asal_universitas = "";
    this->email_edu = "";
}
SivitasAkademik::SivitasAkademik(string NIK, string name, string gender, string asal_universitas, string email_edu)
    : Human(NIK, name, gender)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}

/* Setter & Getter untuk Asal Universitas */
string SivitasAkademik::getAsal_universitas()
{
    return this->asal_universitas;
}
void SivitasAkademik::setAsal_universitas(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}

/* Setter & Getter untuk Email Edu */
string SivitasAkademik::getEmail_edu()
{
    return this->email_edu;
}
void SivitasAkademik::setEmail_edu(string email_edu)
{
    this->email_edu = email_edu;
}

/* Destructor */
SivitasAkademik::~SivitasAkademik()
{
}
