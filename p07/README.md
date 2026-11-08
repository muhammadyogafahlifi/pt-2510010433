# P07 String dan Validasi Input

Pertemuan ketujuh—materi terakhir sebelum UTS—membahas pengolahan teks, `std::string`, dan penanganan masukan yang tidak sesuai. Sebagian contoh memiliki keputusan atau loop yang dipetakan dalam flowchart; `gabung_banding.cpp` dan `getline_campur.cpp` mengikuti alur lurus.

## Daftar materi

| Berkas                   | Hal yang dipraktikkan                                                                               |
| ------------------------ | --------------------------------------------------------------------------------------------------- |
| `gabung_banding.cpp`     | Penggabungan dan perbandingan string, `.length()`, serta akses karakter dengan indeks               |
| `huruf_per_huruf.cpp`    | Loop atas karakter untuk menghitung kata/vokal, membalik teks, dan mengubah kapitalisasi            |
| `rapikan_nama.cpp`       | Kapitalisasi awal kata memakai bendera `awal_kata`, `toupper`, dan `tolower`                        |
| `getline_campur.cpp`     | Masalah newline sisa setelah `cin >>` dan penggunaan `cin.ignore(1000, '\n')` sebelum `getline`     |
| `input_aman.cpp`         | Pemulihan input angka dengan `cin.fail()`, `cin.clear()`, serta `cin.ignore()`                      |
| `validasi_nama.cpp`      | Mengulang masukan nama sampai tidak kosong, bukan hanya spasi, dan tidak mengandung angka           |
| `sinilai_v06_awal.cpp`   | Starter v0.6 yang menambahkan pembacaan aman, pemeriksaan nama, dan perapian nama pada program v0.5 |
| `contoh_masukan.txt`     | Enam mahasiswa dengan data penguji yang memuat nama/input tak valid dan angka di luar rentang       |
| `.vscode/`, `.gitignore` | Pengaturan pertemuan sebelumnya, termasuk konfigurasi debugger                                      |

## Data pengujian SiNilai v0.6

Jalankan program dengan `./sinilai_v06 < contoh_masukan.txt`. Data uji sengaja mencakup variasi kapitalisasi seperti `siti AMINAH` dan `BUDI SANTOSO`, baris nama kosong, nama `r2d2`, masukan teks `abc` untuk nilai mingguan, dan nilai `120` untuk UTS. Program diharapkan meminta ulang input yang tidak sah, merapikan kapitalisasi nama, lalu menghasilkan ringkasan yang sama dengan v0.5.

| Nama setelah dirapikan | Nilai akhir | Huruf | Status      |
| ---------------------- | ----------: | ----- | ----------- |
| Siti Aminah            |       83.97 | A     | Lulus       |
| Budi Santoso           |       67.75 | C+    | Lulus       |
| Rina Wati              |       49.50 | D     | Belum lulus |
| Dewi Lestari           |       90.00 | A     | Lulus       |
| Eko Prasetyo           |       71.00 | B     | Lulus       |
| Fajar Nugroho          |       25.75 | E     | Belum lulus |

Rekap: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata 64.66, tertinggi Dewi Lestari (90.00), dan sebaran A 2, B 1, C 1, D 1, E 1. B+ digabungkan ke B dan C+ digabungkan ke C.

Starter dirancang berjalan dengan masukan bersih. Gunakan berkas contoh untuk menemukan dan memperbaiki alur yang belum tahan terhadap input salah.

## Pengumpulan

Letakkan `sinilai_v06.cpp` di folder `p07` pada repositori `pt-NPM`. Lihat Modul Pertemuan 7 bagian E.

## Deklarasi AI

AI yang digunakan: GitHub Copilot.

Prompt: "Pada validasi nama SiNilai v0.6, bagaimana membedakan nama yang hanya berisi spasi dari nama yang memiliki huruf, dan mengapa pemeriksaan angka saja belum cukup?"

Umpan balik AI: Periksa apakah string kosong atau hanya terdiri dari spasi, pastikan ada setidaknya satu huruf, dan tolak jika ditemukan angka. Dengan demikian input seperti baris kosong, spasi saja, atau `r2d2` tidak diterima sebagai nama. Saya mencocokkan aturan tersebut dengan data jebakan pada file masukan.
