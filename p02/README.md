# P02 Variabel, Tipe Data, Konstanta, dan Input

Pertemuan ini mengenalkan tipe data dasar, konstanta, serta cara membaca data dari pengguna. Buka folder proyek ini di VS Code agar konfigurasi lokal `.vscode` dapat digunakan.

## Materi dan berkas

| Berkas                   | Pokok bahasan                                                                                                           |
| ------------------------ | ----------------------------------------------------------------------------------------------------------------------- |
| `tipe_dasar.cpp`         | Contoh tipe `int`, `double`, `char`, `bool`, dan `string`; mulai materi ini contoh kelas memakai `using namespace std;` |
| `konstanta.cpp`          | Pemakaian `const` untuk nilai bobot penilaian; terdapat nilai yang dapat dicoba diubah                                  |
| `input_dasar.cpp`        | Membaca input dengan `cin`; bandingkan perilaku saat nama satu kata dan dua kata                                        |
| `sinilai_v01_awal.cpp`   | Kerangka SiNilai v0.1 untuk menerima data mahasiswa dan menampilkan kartu data                                          |
| `contoh_masukan.txt`     | Contoh data uji yang dapat dialirkan ke program melalui `./sinilai_v01 < contoh_masukan.txt`                            |
| `.vscode/`, `.gitignore` | Pengaturan yang mengikuti pertemuan sebelumnya, termasuk build dan pengecualian berkas hasil kompilasi                  |

## Contoh keluaran SiNilai v0.1

```text
=== SiNilai v0.1 ===
Nama      : Siti Aminah
NPM       : 2024010101
Kehadiran : 100
Mingguan  : 85.5
UTS       : 78
UAS       : 80

--- Kartu Data Mahasiswa ---
Nama      : Siti Aminah
NPM       : 2024010101
Kehadiran : 100
Mingguan  : 85.5
UTS       : 78
UAS       : 80
```

## Pengumpulan

Kumpulkan `sinilai_v01.cpp` dan `README.md` dalam folder `p02` pada repositori `pt-NPM`. Rujuk Modul Pertemuan 2 bagian E.

## Deklarasi AI

AI yang digunakan: GitHub Copilot.

Prompt: "Untuk data SiNilai v0.1, apa bedanya `cin >> nama` dan `getline(cin, nama)` ketika nama berisi lebih dari satu kata?"

Umpan balik AI: Ekstraksi dengan `cin >>` berhenti pada spasi pertama, sedangkan `getline` membaca sampai akhir baris sehingga nama lengkap beserta spasinya dapat tersimpan. NPM dapat disimpan sebagai teks karena tidak dihitung dan mungkin diawali nol. Saya membandingkan kedua cara membaca nama menggunakan contoh input.
