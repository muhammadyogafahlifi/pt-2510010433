# P05 Perulangan: Mengulang Instruksi dengan Aman

Pertemuan kelima membahas `for`, `while`, dan `do-while`. Ikuti flowchart yang menyertai program pada modul (Gambar 1–5), terutama panah yang kembali ke kondisi perulangan.

## Kumpulan program

| Berkas                   | Yang dipelajari                                                                                         |
| ------------------------ | ------------------------------------------------------------------------------------------------------- |
| `for_hitung.cpp`         | Perulangan dengan banyak langkah yang sudah diketahui; bandingkan batas `<=` dengan `<`                 |
| `for_jumlah.cpp`         | Akumulator untuk memperoleh jumlah dan rerata dari sejumlah nilai; uji juga jumlah nol                  |
| `while_sentinel.cpp`     | Perulangan yang berhenti saat menerima angka negatif sebagai sentinel                                   |
| `do_while_menu.cpp`      | Menu yang ditampilkan kembali sampai pilihan keluar; menggunakan `switch` dari P04                      |
| `sinilai_v04_awal.cpp`   | Starter SiNilai v0.4: melengkapi validasi jumlah peserta, pengulangan pemrosesan, akumulator, dan rekap |
| `contoh_masukan.txt`     | Tiga catatan mahasiswa untuk menguji program v0.4                                                       |
| `.vscode/`, `.gitignore` | Pengaturan dan pengecualian berkas yang mengikuti pertemuan sebelumnya                                  |

## Data acuan v0.4 (`./sinilai_v04 < contoh_masukan.txt`)

| Mahasiswa    | Kehadiran, mingguan, UTS, UAS | Nilai akhir | Huruf | Status      |
| ------------ | ----------------------------- | ----------: | ----- | ----------- |
| Siti Aminah  | 100, 85.5, 78, 80             |      83.975 | A     | Lulus       |
| Budi Santoso | 80, 70, 65, 60                |       67.75 | C+    | Lulus       |
| Rina Wati    | 60, 50, 40, 55                |        49.5 | D     | Belum lulus |

Rekap untuk data tersebut: 3 mahasiswa, 2 lulus, 1 belum lulus, dan rerata kelas 67.075. Jika jumlah mahasiswa nol atau negatif, program harus meminta jumlah yang valid lagi dengan `do-while`.

## Jika perulangan tidak berhenti

Gunakan `Ctrl+C` pada terminal untuk menghentikan program. Periksa apakah penghitung diperbarui (contohnya `i++`) dan apakah kondisi akhirnya dapat menjadi salah. Jika input angka diisi huruf, `cin` dapat gagal dan menyebabkan alur bermasalah; pemulihan input dibahas pada P07.

## Pengumpulan

Berkas tugas yang diminta adalah `sinilai_v04.cpp` di dalam folder `p05` pada repositori `pt-NPM`. Lihat Modul Pertemuan 5 bagian E.

## Deklarasi AI

AI yang digunakan: GitHub Copilot.

Prompt: "Pada rekap SiNilai v0.4, mengapa `total_nilai` dan `jumlah_lulus` harus tetap disimpan selama loop mahasiswa berlangsung?"

Umpan balik AI: Keduanya merupakan akumulator: `total_nilai` mengumpulkan nilai akhir seluruh peserta, sedangkan `jumlah_lulus` menghitung peserta yang memenuhi syarat. Inisialisasi keduanya sebelum loop dan perbarui di setiap iterasi agar rekap kelas dapat dihitung setelah loop selesai.
