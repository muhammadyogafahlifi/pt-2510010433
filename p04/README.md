# P04 Percabangan dan Keputusan dalam Program

Materi ini memperkenalkan `if`, `if-else`, percabangan bertingkat, operator logika, dan `switch`. Program yang memiliki alur keputusan dipasangkan dengan flowchart pada modul (Gambar 2–7); pelajari diagramnya sebelum menelusuri kode.

## Berkas latihan

| Berkas                   | Fokus praktik                                                                             |
| ------------------------ | ----------------------------------------------------------------------------------------- | --- | ------------------------------------------------------------------------ |
| `if_dasar.cpp`           | Menampilkan peringatan ketika nilai kurang dari 60 menggunakan satu cabang `if`           |
| `if_else.cpp`            | Memilih keluaran lulus atau belum lulus                                                   |
| `bertingkat.cpp`         | Menyusun beberapa rentang kondisi; coba ubah urutan syarat                                |
| `logika.cpp`             | Operator `&&`, `                                                                          |     | `, dan `!` untuk menyatakan syarat gabungan, termasuk kelayakan ikut UAS |
| `switch_menu.cpp`        | Alur menu menggunakan `switch`, `break`, dan `default`; amati akibat jika `break` dihapus |
| `sinilai_v03_awal.cpp`   | Starter SiNilai v0.3 untuk mengubah nilai menjadi huruf mutu, keterangan, dan status      |
| `contoh_masukan.txt`     | Data uji yang mengikuti format dari pertemuan sebelumnya                                  |
| `.vscode/`, `.gitignore` | Konfigurasi lokal seperti yang digunakan sebelumnya                                       |

## Pemeriksaan kasus SiNilai v0.3

| Nilai empat komponen       | Nilai akhir | Huruf | Keterangan    | Status      |
| -------------------------- | ----------: | ----- | ------------- | ----------- |
| `contoh_masukan.txt`       |      83.975 | A     | Sangat baik   | Lulus       |
| 80 untuk setiap komponen   |          80 | A     | Sangat baik   | Lulus       |
| 79.9 untuk setiap komponen |        79.9 | B+    | Baik          | Lulus       |
| 60 untuk setiap komponen   |          60 | C     | Cukup         | Lulus       |
| 59.9 untuk setiap komponen |        59.9 | D     | Kurang        | Belum lulus |
| 30 untuk setiap komponen   |          30 | E     | Sangat kurang | Belum lulus |

## Pengumpulan

Kumpulkan `sinilai_v03.cpp` dan `README.md` di folder `p04` pada repositori `pt-NPM`. Rincian tugas terdapat di Modul Pertemuan 4 bagian E.

## Deklarasi AI

AI yang digunakan: GitHub Copilot.

Prompt: "Saat memakai `switch` pada karakter pertama dari `huruf_mutu`, bagaimana memastikan setiap pilihan huruf mengisi keterangan yang benar dan tidak jatuh ke cabang yang salah?"

Umpan balik AI: Cocokkan tiap `case` dengan karakter awal huruf mutu—A, B, C, atau D—dan gunakan `default` untuk E. Tambahkan `break` agar eksekusi tidak berlanjut ke cabang berikutnya. Saya membandingkan keterangan untuk beberapa nilai batas.
