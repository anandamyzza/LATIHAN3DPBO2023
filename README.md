## Janji
Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Deskripsi Tugas Latihan 4 DPBO 2023
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
* **Mahasiswa**: NIM, nama, jenis_kelamin, fakultas, prodi
* **Human**: NIK, nama, jenis_kelamin
* **SivitasAkademik**: asal_universitas, email_edu
* **Dosen**: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
* **Course**: nama_matakuliah
* **Program Studi**: nama_prodi, kode, course

## Desain Program
### UML Desain
![UML drawio](https://user-images.githubusercontent.com/100767177/222178254-8885750d-f53b-44e5-bd67-22ac88944fef.png)

Terdapat 6 class di program ini, yaitu:
1. **Class Human** memiliki 3 atribut yaitu NIK (Nomor Induk Kependudukan), name (Nama), gender (Jenis Kelamin). **Human** merupakan **_parent_** dari **SivitasAkademik** karena jika melihat atribut **SivitasAkademik** (Dapat dilihat pada nomor 2), dapat diasumsikan bahwa **SivitasAkademik** adalah manusia yang memiliki relasi dengan suatu lingkungan akademik seperti di Universitas (contoh: Dosen, mahasiswa, staff, dll) sehingga memiliki objek yang sama dengan **Human** yaitu manusia. Setiap atribut pada class ini diberi setter dan getter.
2. **Class SivitasAkademik** memiliki 2 atribut yaitu asal_universitas (Asal Universitas) dan email_edu (Email Pendidikan). Jika melihat dari atribut yang dimiliki **SivitasAkademik**, dapat diasumsikan bahwa **SivitasAkademik** merupakan manusia yang memiliki relasi dengan suatu lingkungan akademik, namun tidak semua manusia (**Human**) merupakan bagian dari suatu **SivitasAkademik**, sehingga **Class SivitasAkademik** menjadi **_child_** dari **Class Human**. Setiap atribut pada class ini diberi setter dan getter.
3. **Class Mahasiswa** memiliki 3 atribut yaitu NIM (Nomor Induk Mahasiswa), faculty (Fakultas), dan major (Program Studi). **Mahasiswa** merupakan **_child_** dari **Class SivitasAkademik** karena menurut definisi dari **SivitasAkademik**, **Mahasiswa** yang memiliki objek yang sama dengan **Human** yaitu manusia, merupakan salah satu bagian dari suatu lingkungan akademik. Dari penjelasan berikut, maka **Mahasiswa** yang merupakan **_child_** dari **Class SivitasAkademik** juga menjadi **_grandchild_** dari **Human**. Atribut name (Nama) dan gender (Jenis Kelamin) pada **Class Mahasiswa** ini dihapus karena dapat dipindahkan kepada class yang lebih tinggi, yaitu **Class Human**. Setiap atribut pada class ini diberi setter dan getter.
4. **Class Dosen** memiliki 5 atribut yaitu NIP (Nomor Identitas Pegawai Negeri Sipil), faculty (Fakultas), major (Program Studi), pend_terakhir (Pendidikan Terakhir), dan keahlian. **Dosen** merupakan **_child_** dari **Class SivitasAkademik** karena menurut definisi dari **SivitasAkademik**, **Dosen** yang memiliki objek yang sama dengan **Human** yaitu manusia, merupakan salah satu bagian dari suatu lingkungan akademik yang sama seperti **Class Mahasiswa**. Dari penjelasan berikut, maka **Dosen** yang merupakan **_child_** dari **Class SivitasAkademik** juga menjadi **_grandchild_** dari **Human**. Sama seperti **Class Mahasiswa**, **Dosen** juga memiliki atribut yang dihapus yaitu name (Nama) dan gender (Jenis Kelamin) karena dapat dipindahkan kepada class yang lebih tinggi, yaitu **Class Human**. Setiap atribut pada class ini diberi setter dan getter.

_Note: **Class Mahasiswa** dan **Dosen** tetap memiliki atribut faculty (Fakultas) dan major (jurusan) masing-masing dan tidak dipindahkan kepada **Class SivitasAkademik**, dengan asumsi bahwa tidak seluruh orang/manusia pada **SivitasAkademik** berasal dari fakultas dan jurusan tertentu seperti staff yang mungkin bekerja pada kantor pusat universitas dan tidak termasuk kepada fakultas yang spesifik._

5. **Class Course** memiliki 3 atribut yaitu matkul (Nama Mata Kuliah), dosen (Dosen yang mengajar mata kuliah tersebut), dan mahasiswa (Kumpulan mahasiswa `list<Mahasiswa>` yang mengontrak mata kuliah yang diampu oleh dosen tersebut). **Class Course** menampung data mata kuliah seperti yang dijelaskan pada bagian atribut, sehingga **Class Course** memiliki data dosen beserta mahasiswanya. Saya menambahkan 2 atribut baru ke dalam class ini agar **Class Course** bisa memiliki hubungan _Composite_ dengan **Class Mahasiswa** dan **Class Dosen**. Setiap atribut pada class ini diberi setter dan getter.
6. **Class ProgramStudi** memiliki 3 atribut yaitu nama_prodi (Nama Program Studi dari Kumpulan Mata Kuliah), kode (Kode Program Studi), dan course (Kumpulan mata kuliah `list<Course>` pada program studi tertentu). **Class ProgramStudi** memiliki data-data kumpulan mata kuliah yang hadir dalam program studi tersebut, sehingga **Class ProgramStudi** memiliki **Class Course**. Setiap atribut pada class ini diberi setter dan getter.

## Alur Program
Input data dilakukan secara manual/hardcode pada file **Main.cpp/.py** berupa instansiasi object dari class yang ada. Lalu output akan menampilkan data secara lengkap dari suatu Program Studi beserta data mata kuliah, dosen yang mengampu mata kuliah, dan mahasiswa yang mengontrak mata kuliah tersebut. Inputan dilakuan secara berurut dari menginput data dosen, mahasiswa, mata kuliah, program studi, lalu memasukan data-data tersebut ke dalam variabel list yang dinamakan listProdi.

## Dokumentasi
#### 1. Python
![Dokumentasi_1](https://user-images.githubusercontent.com/100767177/222172065-a72e4fb2-bd8d-4d9f-b907-bc3558585fe6.png)
![Dokumentasi_2](https://user-images.githubusercontent.com/100767177/222172073-d0e9e7d9-70d3-4025-b84c-f1377e2abd02.png)
