/* Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Header.hh"

int main()
{
     /* Deklarasi Variabel */
     vector<ProgramStudi> listProdi; // Variabel untuk menampung data inputan.

     /* Input Hardcode */
     // Data Dosen.
     Dosen dosen1 = Dosen("78210838", "Rasim", "Pria", "UPI", "rasim@upi.edu", "46738439", "FPMIPA", "Ilmu Komputer", "S3", "Operating System");
     Dosen dosen2 = Dosen("62347573", "Rosa Ariani", "Wanita", "UPI", "rosa@upi.edu", "52137673", "FPMIPA", "Ilmu Komputer", "S3", "Programming");
     Dosen dosen3 = Dosen("7364873", "uhamad Salman", "Pria", "UPI", "atepsalman@upi.edu", "123124245", "FPMIPA", "Ilmu Komputer", "S3", "Kriptografi");

     // Data Mahasiswa.
     Mahasiswa anandamyzza = Mahasiswa("130903007", "Ananda Myzza", "Pria", "UPI", "anandamyzza@upi.edu", "2100702", "FPMIPA", "Ilmu Komputer");
     Mahasiswa dickif = Mahasiswa("200703006", "Dicki Fathurohman", "Pria", "UPI", "dickif@upi.edu", "2103842", "FPMIPA", "Ilmu Komputer");
     Mahasiswa mdaffa = Mahasiswa("060703022", "Muhammad Daffa Yusuf Fadhillah", "Pria", "UPI", "mdaffa@upi.edu", "2100543", "FPMIPA", "Ilmu Komputer");
     Mahasiswa gopur = Mahasiswa("150902015", "Muhammad Fadhlan Ghafur", "Meragukan", "UPI", "gopurgaplan", "2106923", "FPMIPA", "Ilmu Komputer");

     // Data Mata Kuliah.
     Course dpbo = Course("Desain Pemrograman Berorientasi Objek", dosen2, anandamyzza);
     dpbo.setMahasiswa(gopur);

     Course grafikom = Course("Grafika Komputer", dosen1, anandamyzza);
     grafikom.setMahasiswa(dickif);
     grafikom.setMahasiswa(gopur);

     Course kalkulus = Course("Kalkulus", dosen3, anandamyzza);
     kalkulus.setMahasiswa(mdaffa);

     // Data Program Studi.
     ProgramStudi ilkom = ProgramStudi("Ilmu Komputer", "IK-UPI", dpbo);
     ilkom.setCourse(grafikom);
     ilkom.setCourse(kalkulus);

     // Menambahkan data kedalam vector.
     listProdi.push_back(ilkom);

     // Perulangan untuk print data.
     for (int i = 0; i < listProdi.size(); i++)
     {
          // Print Data Program Studi.
          cout << i + 1 << ". Program Studi " << listProdi[i].getNama_prodi()
               << " | Kode Jurusan: " << listProdi[i].getKode() << endl;

          // Perulangan untuk Print Data Mata Kuliah.
          list<Course> listCourse = listProdi[i].getCourse();
          cout << "\n     Daftar Kontrak Mata Kuliah:" << endl;
          int j = 0;
          for (list<Course>::iterator crs = (listCourse).begin(); crs != (listCourse).end(); crs++)
          {
               if (j > 0)
               {
                    cout << endl;
               }
               cout << "     " << j + 1 << ". " << crs->getMatkul() << endl;
               cout << "            Dosen Pengampu: " << crs->getDosen().getName()
                    << " | NIK: " << crs->getDosen().getNIK()
                    << " | Jenis Kelamin: " << crs->getDosen().getGender() << endl;
               cout << "            NIP: " << crs->getDosen().getNIP()
                    << " | Universitas: " << crs->getDosen().getAsal_universitas()
                    << " | Email Edu: " << crs->getDosen().getEmail_edu() << endl;
               cout << "            Fakultas: " << crs->getDosen().getFaculty()
                    << " | Program Studi: " << crs->getDosen().getMajor() << endl;
               cout << "            Pendidikan Terakhir: " << crs->getDosen().getPend_terakhir()
                    << " | Keahlian: " << crs->getDosen().getKeahlian() << endl;
               j++;

               // Perulangan untuk Print Data Mahasiswa yang Mengontrak Mata Kuliah Tertentu.
               int k = 0;
               list<Mahasiswa> listMhs = crs->getMahasiswa();
               cout << "\n                 Daftar Mahasiswa yang mengontrak:" << endl;
               for (list<Mahasiswa>::iterator mhs = (listMhs).begin(); mhs != (listMhs).end(); mhs++)
               {
                    cout << "                 " << k + 1 << ". " << mhs->getName()
                         << " | NIK: " << mhs->getNIK()
                         << " | Jenis Kelamin: " << mhs->getGender() << endl;
                    cout << "                        NIM           : " << mhs->getNIM() << endl;
                    cout << "                        Universitas   : " << mhs->getAsal_universitas() << endl;
                    cout << "                        Fakultas      : " << mhs->getFaculty() << endl;
                    cout << "                        Jurusan       : " << mhs->getMajor() << endl;
                    cout << "                        Email Edu     : " << mhs->getEmail_edu() << endl;
                    k++;
               }
          }
     }
     return 0;
}
