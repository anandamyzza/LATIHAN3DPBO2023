/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <bits/stdc++.h>

using namespace std;

/* Deklarasi Class Human */
class Human
{
    /* Atribut Private */
private:
    string NIK;
    string name;
    string gender;

public:
    // Constructor
    Human();
    Human(string NIK, string name, string gender);

    // Setter & Getter
    string getNIK();
    void setNIK(string NIK);
    string getName();
    void setName(string name);
    string getGender();
    void setGender(string gender);

    // Destructor
    ~Human();
};

/* Deklarasi Class SivitasAkademik yang Mewarisi Human */
class SivitasAkademik : public Human
{
    /* Atribut Private */
private:
    string asal_universitas;
    string email_edu;

public:
    // Constructor
    SivitasAkademik();
    SivitasAkademik(string NIK, string name, string gender, string asal_universitas, string email_edu);

    // Setter & Getter
    string getAsal_universitas();
    void setAsal_universitas(string asal_universitas);
    string getEmail_edu();
    void setEmail_edu(string email_edu);

    // Destructor
    ~SivitasAkademik();
};

/* Deklarasi Class Mahasiswa yang Mewarisi SivitasAkademik */
class Mahasiswa : public SivitasAkademik
{
    /* Atribut Private */
private:
    string NIM;
    string faculty;
    string major;

public:
    // Constructor
    Mahasiswa();
    Mahasiswa(string NIK, string name, string gender, string asal_universitas, string email_edu, string NIM, string faculty, string major);

    // Setter & Getter
    string getNIM();
    void setNIM(string NIM);
    string getFaculty();
    void setFaculty(string faculty);
    string getMajor();
    void setMajor(string major);

    // Destructor
    ~Mahasiswa();
};

/* Deklarasi Class Dosen yang Mewarisi SivitasAkademik */
class Dosen : public SivitasAkademik
{
    /* Atribut Private */
private:
    string NIP;
    string faculty;
    string major;
    string pend_terakhir;
    string keahlian;

public:
    // Constructor
    Dosen();
    Dosen(string NIK, string name, string gender, string asal_universitas, string email_edu, string NIP, string faculty, string major, string pend_terakhir, string keahlian);

    // Setter & Getter
    string getNIP();
    void setNIP(string NIP);
    string getFaculty();
    void setFaculty(string faculty);
    string getMajor();
    void setMajor(string major);
    string getPend_terakhir();
    void setPend_terakhir(string pend_terakhir);
    string getKeahlian();
    void setKeahlian(string keahlian);

    // Destructor
    ~Dosen();
};

/* Deklarasi Class Course yang Mempunyai (Has a) Dosen dan Mahasiswa */
class Course
{
    /* Atribut Private */
private:
    string matkul;
    Dosen dosen;
    list<Mahasiswa> mahasiswa;

public:
    // Constructor
    Course();
    Course(string matkul, Dosen dosen, Mahasiswa mahasiswa);

    // Setter & Getter
    string getMatkul();
    void setMatkul(string matkul);
    Dosen getDosen();
    void setDosen(Dosen dosen);
    list<Mahasiswa> getMahasiswa();
    void setMahasiswa(Mahasiswa mahasiswa);

    // Destructor
    ~Course();
};

/* Deklarasi Class Program Studi yang Mempunyai (Has a) Course */
class ProgramStudi
{
    /* Atribut Private */
private:
    string nama_prodi;
    string kode;
    list<Course> course;

public:
    // Constructor
    ProgramStudi();
    ProgramStudi(string nama_prodi, string kode, Course course);

    // Setter & Getter
    string getNama_prodi();
    void setNama_prodi(string nama_prodi);
    string getKode();
    void setKode(string kode);
    list<Course> getCourse();
    void setCourse(Course course);

    // Destructor
    ~ProgramStudi();
};
