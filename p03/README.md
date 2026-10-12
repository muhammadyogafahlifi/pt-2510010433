# P03 Operator dan Ekspresi: Mengolah Nilai

Pada pertemuan ketiga, latihan berfokus pada operasi aritmetika, urutan evaluasi ekspresi, dan perbedaan perilaku tipe integer dengan pecahan. Buka folder ini di VS Code untuk memakai konfigurasi `.vscode`.

## Daftar latihan

| Berkas                   | Tujuan                                                                                                            |
| ------------------------ | ----------------------------------------------------------------------------------------------------------------- |
| `operator.cpp`           | Mencoba lima operator aritmetika pada `int` dan `double`, termasuk pembagian integer dan perbedaannya dari Python |
| `prioritas.cpp`          | Mengamati prioritas dan arah evaluasi operator, serta mencoba `+=` dan `++`; prediksi hasil sebelum menjalankan   |
| `campuran.cpp`           | Membandingkan tiga ekspresi rerata yang mencampur `int` dengan `double`                                           |
| `sinilai_v02_awal.cpp`   | Starter SiNilai v0.2; data sudah dibaca dan perhitungan nilai akhir perlu dilengkapi                              |
| `contoh_masukan.txt`     | Data uji dari P02, dapat dipakai dengan `./sinilai_v02 < contoh_masukan.txt`                                      |
| `.vscode/`, `.gitignore` | Pengaturan editor dan pengecualian berkas lokal seperti pada pertemuan sebelumnya                                 |
| `_kunci/`                | Bahan jawaban SiNilai v0.2 untuk dosen                                                                            |

## Contoh bagian keluaran SiNilai v0.2

```text
--- Kartu Nilai Mahasiswa ---
Nama        : Siti Aminah
NPM         : 2024010101
Nilai akhir : 83.975
Rerata polos: 85.875
```

Nilai berbobot pada contoh dihitung sebagai $100(0{,}10)+85{,}5(0{,}45)+78(0{,}25)+80(0{,}20)=83{,}975$.

## Pengumpulan

Simpan hasil sebagai `sinilai_v02.cpp` bersama `README.md` di folder `p03` pada repositori `pt-NPM`. Lihat Modul Pertemuan 3 bagian E.

## Deklarasi AI

AI yang digunakan: GitHub Copilot.

Prompt: "Mengapa ekspresi campuran pada `campuran.cpp` dapat menghasilkan rata-rata berbeda, dan bagaimana memastikan pembagian tidak kehilangan nilai pecahan?"

Umpan balik AI: Jenis operand memengaruhi jenis operasi. Jika pembagian berlangsung sebagai integer, pecahannya terbuang; gunakan nilai pecahan seperti `4.0` atau konversi ke `double`. Untuk nilai akhir SiNilai, kalikan masing-masing komponen dengan bobotnya, lalu jumlahkan. Saya membandingkan hasil dengan data contoh.
