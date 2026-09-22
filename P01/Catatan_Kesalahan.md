# Catatan Kesalahan 

## Tabel

| No | Berkas | Jenis Kesalahan | Pesan/Error | Penyebab | Solusi |
|---|---|---|---|---|---|
| 1 | `k1_sintaks.cpp` | Kesalahan Sintaks | Muncul pesan `expected ',' or ';' before 'std'` dan `unused variable 'nilai'` | Variabel `nilai` sudah dibuat tetapi belum digunakan. Selain itu, penulisan `nilai = 80` belum diakhiri dengan tanda `;` | Tambahkan tanda `;` setelah deklarasi `int nilai = 80`. Variabel dapat digunakan dalam proses perhitungan atau dihapus jika tidak diperlukan |
| 2 | `k2_nama.cpp` | Kesalahan Nama Variabel | Program tidak mengenali `Nilai` dan menunjukkan bahwa `bonus` belum dideklarasikan | Nama variabel ditulis tidak sesuai dengan deklarasinya, yaitu `Nilai` seharusnya `nilai`. Variabel `bonus` juga belum memiliki deklarasi | Ubah penulisan `Nilai` menjadi `nilai` dan deklarasikan variabel `bonus` sebelum digunakan |
| 3 | `k3_runtime.cpp` | Kesalahan Logika | Terjadi pembagian dengan nilai `0` saat jumlah mahasiswa yang dimasukkan adalah `0` | Program melakukan pembagian tanpa mengecek terlebih dahulu apakah `jumlah_mahasiswa` bernilai nol | Lakukan pengecekan `jumlah_mahasiswa == 0` terlebih dahulu sebelum menjalankan operasi pembagian |
| 4 | `k4_logika.cpp` | Kesalahan Logika | Hasil perhitungan menjadi `81`, padahal seharusnya `81.67` | Pembagian menggunakan angka `3` sehingga hasilnya menjadi bilangan bulat | Ganti pembagi menjadi `3.0` supaya hasil perhitungan dapat menampilkan nilai desimal |

## Kesimpulan

Dari kegiatan yang telah dilakukan, dapat diketahui bahwa kesalahan dalam program dapat terjadi karena beberapa hal, seperti kesalahan penulisan kode, penggunaan nama variabel, maupun kesalahan dalam proses perhitungan. Kesalahan logika perlu diperiksa dengan teliti karena program masih bisa dijalankan meskipun hasil akhirnya tidak sesuai. Oleh karena itu, setiap program sebaiknya diuji dan diperiksa kembali agar kesalahan dapat ditemukan dan hasil yang diperoleh sesuai dengan tujuan program.
