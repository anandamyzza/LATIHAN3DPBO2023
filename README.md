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
Terdapat 6 class di program ini, yaitu:
1. **Class Human** memiliki 3 atribut yaitu NIK (Nomor Induk Kependudukan), name (Nama), gender (Jenis Kelamin), dan 1 atribut tambahan di bahasa PHP, photo (Foto Profil). **Human** merupakan **_parent_** dari **SivitasAkademik** karena **SivitasAkademik** adalah sebuah komunitas yang pada dasarnya melibatkan manusia (Dosen, mahasiswa, staff, dll) sehingga memiliki objek yang sama dengan **Human** yaitu manusia. Setiap atribut pada class ini diberi setter dan getter.
2. **Class SivitasAkademik** memiliki 2 atribut yaitu asal_universitas (Asal Universitas) dan email_edu (Email Pendidikan). Karena **SivitasAkademik** merupakan komunitas yang melibatkan manusia (**Human**), namun tidak semua manusia (**Human**) merupakan bagian dari suatu **SivitasAkademik**, sehingga **Class SivitasAkademik** menjadi **_child_** dari **Class Human**. Setiap atribut pada class ini diberi setter dan getter.
3. **Class Mahasiswa** memiliki 3 atribut yaitu NIM (Nomor Induk Mahasiswa), faculty (Fakultas), dan major (Program Studi). **Mahasiswa** merupakan **_child_** dari **Class SivitasAkademik** karena menurut definisi dari **SivitasAkademik**, **Mahasiswa** yang memiliki objek yang sama dengan **Human** yaitu manusia, merupakan salah satu bagian dari komunitas (**SivitasAkademik**) tersebut. Dari penjelasan berikut, maka **Mahasiswa** yang merupakan **_child_** dari **Class SivitasAkademik** juga menjadi **_grandchild_** dari **Human**. Setiap atribut pada class ini diberi setter dan getter.
4. **Class CRUD** _(C++, Java, Python)_ dan **Class Cread** _(PHP)_ merupakan class yang dibuat untuk metode Create (Menambahkan data, create()), Read (Menampilkan data, read()), Update (Mengubah data, update()), dan Delete (Menghapus data, remove()), serta 1 metode tambahan untuk membantu proses update dan delete yaitu search (Mencari data berdasarkan NIM, search()). Khusus untuk bahasa PHP, hanya memiliki metode create() dan read() saja dengan nama **Class Cread**. Class ini memiliki 1 atribut dinamakan data yang merupakan List of Object dari Class Mahasiswa.

### UML Desain
![UML](https://user-images.githubusercontent.com/100767177/222177014-e88d0183-d0ea-4019-9d24-9d49b6882730.png)

## Alur Program
C++, Java, dan Python memiliki alur program yang sama, yaitu sebagai berikut:

## Dokumentasi
#### 1. Python
![Dokumentasi_1](https://user-images.githubusercontent.com/100767177/222172065-a72e4fb2-bd8d-4d9f-b907-bc3558585fe6.png)
![Dokumentasi_2](https://user-images.githubusercontent.com/100767177/222172073-d0e9e7d9-70d3-4025-b84c-f1377e2abd02.png)
