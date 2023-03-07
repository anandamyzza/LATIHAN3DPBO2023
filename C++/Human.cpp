/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Header.hh"

/* Constructor */
Human::Human()
{
    this->NIK = "";
    this->name = "";
    this->gender = "";
}
Human::Human(string NIK, string name, string gender)
{
    this->NIK = NIK;
    this->name = name;
    this->gender = gender;
}

/* Setter & Getter untuk NIK */
string Human::getNIK()
{
    return this->NIK;
}
void Human::setNIK(string NIK)
{
    this->NIK = NIK;
}

/* Setter & Getter untuk Nama */
string Human::getName()
{
    return this->name;
}
void Human::setName(string name)
{
    this->name = name;
}

/* Setter & Getter untuk Gender */
string Human::getGender()
{
    return this->gender;
}
void Human::setGender(string gender)
{
    this->gender = gender;
}

/* Destructor */
Human::~Human()
{
}
