# Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
# Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from ProgramStudi import ProgramStudi
from Course import Course
from Mahasiswa import Mahasiswa
from Dosen import Dosen

# Deklarasi Variabel
listProdi = []  # Variabel untuk menampung data inputan.

# Input Hardcode
# Dosen
dosen1 = Dosen("78210838", "FPMIPA", "Ilmu Komputer", "S3", "Operating System", "UPI",
               "rasim@upi.edu", "46738439", "Rasim", "Pria")
dosen2 = Dosen("62347573", "FPMIPA", "Ilmu Komputer", "S3", "Programming", "UPI",
               "rosa@upi.edu", "52137673", "Rosa Sukamti", "Wanita")
dosen3 = Dosen("7364873", "FPMIPA", "Ilmu Komputer", "S3", "Kriptografi", "UPI",
               "atepsalman@upi.edu", "123124245", "Muhamad Salman", "Pria")

# Mahasiswa
anandamyzza = Mahasiswa("2100702", "FPMIPA", "Ilmu Komputer", "UPI",
                        "anandamyzza@upi.edu", "130903007", "Ananda Myzza", "Pria")
dickif = Mahasiswa("2103842", "FPMIPA", "Ilmu Komputer", "UPI", "dickif@upi.edu",
                   "200703006", "Dicki Fathurohman", "Pria")
mdaffa = Mahasiswa("2100543", "FPMIPA", "Ilmu Komputer", "UPI", "mdaffa@upi.edu",
                   "060703022", "Muhammad Daffa Yusuf Fadhillah", "Pria")
gopur = Mahasiswa("2106923", "FPMIPA", "Ilmu Komputer", "UPI", "gopurgaplan@upi.edu",
                  "150902015", "Muhammad Fadhlan Ghafur", "Meragukan")

# Course
dpbo = Course("Desain Pemrograman Berorientasi Objek",
              dosen2, mahasiswa=[anandamyzza, gopur])
grafikom = Course("Grafika Komputer", dosen1, mahasiswa=[
                  anandamyzza, dickif, gopur])
kalkulus = Course("Kalkulus", dosen3, mahasiswa=[anandamyzza, mdaffa])

# Prodi
ilkom = ProgramStudi("Ilmu Komputer", "IK-UPI",
                     course=[dpbo, grafikom, kalkulus])

# Menambahkan data kedalam list.
listProdi.append(ilkom)

# Perulangan untuk Print Data
for i, data in enumerate(listProdi):
    # Print Data Program Studi
    print(f"{i+1}.", "Program Studi", data.getNama_prodi(),
          "| Kode Jurusan:", data.getKode())

    # Perulangan untuk Print Data Mata Kuliah
    print('\n{:5s}Daftar Kontrak Mata Kuliah:'.format(''))
    for j, crs in enumerate(data.getCourse()):
        if (j > 0):
            print()
        print('{:5s}{}. {}'.format(
            '', j+1, crs.getMatkul()))
        print('{:8s}Dosen Pengampu: {} | NIK: {} | Jenis Kelamin: {}'.format(
            '', crs.getDosen().getName(), crs.getDosen().getNIK(), crs.getDosen().getGender()))
        print('{:8s}NIP: {} | Universitas: {} | Email Edu: {}'.format(
            '', crs.getDosen().getNIP(), crs.getDosen().getAsal_universitas(), crs.getDosen().getEmail_edu()))
        print('{:8s}Fakultas: {} | Program Studi: {}'.format(
            '', crs.getDosen().getFaculty(), crs.getDosen().getMajor()))
        print('{:8s}Pendidikan Terakhir: {} | Keahlian: {}'.format(
            '', crs.getDosen().getPend_terakhir(), crs.getDosen().getKeahlian()))

        # Perulangan untuk Print Data Mahasiswa yang Mengontra Mata Kuliah Tertentu
        print('\n{:13s}Daftar Mahasiswa yang mengontrak:'.format(''))
        for k, mhs in enumerate(crs.getMahasiswa()):
            print('{:13s}{}. {} | NIK: {} | Jenis Kelamin: {}'.format(
                '', k+1, mhs.getName(), mhs.getNIK(), mhs.getGender()))
            print('{:16s}NIM           : {}'.format(
                '', mhs.getNIM()))
            print('{:16s}Universitas   : {}'.format(
                '', mhs.getAsal_universitas()))
            print('{:16s}Fakultas      : {}'.format(
                '', mhs.getFaculty()))
            print('{:16s}Program Studi : {}'.format(
                '', mhs.getMajor()))
            print('{:16s}Email Edu     : {}'.format(
                '', mhs.getEmail_edu()))
