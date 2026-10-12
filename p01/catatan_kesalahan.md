# Rangkuman Temuan Kesalahan Praktikum 5

Dokumen ini berisi beberapa kendala yang muncul selama pengerjaan program, beserta penyebab dan langkah yang dapat dilakukan untuk memperbaikinya.

## Daftar Kasus

| No. | Berkas           | Kategori                            | Tanda yang terlihat                                                                                                   | Sumber masalah                                                                               | Langkah penyelesaian                                                                                                             |
| --: | ---------------- | ----------------------------------- | --------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------- |
|   1 | `k1_sintaks.cpp` | Sintaks dan variabel tidak terpakai | Kompiler menampilkan pesan terkait `,` atau `;` sebelum `std`, serta memberi peringatan bahwa `nilai` tidak digunakan | Baris `int nilai = 80` belum diakhiri `;`, dan variabel tersebut tidak dirujuk lagi          | Lengkapi deklarasi dengan titik koma. Pakai `nilai` pada proses berikutnya atau buang variabel itu bila memang tidak diperlukan. |
|   2 | `k2_nama.cpp`    | Kesalahan identitas variabel        | Nama `Nilai` dianggap tidak dikenal, sedangkan `nilai` disarankan; `bonus` juga belum ditemukan                       | Huruf kapital dan kecil dianggap berbeda oleh C++. Variabel `bonus` digunakan sebelum dibuat | Tetapkan satu bentuk penulisan, misalnya `nilai`, lalu gunakan secara konsisten. Buat deklarasi `bonus` sebelum pemakaiannya.    |
|   3 | `k3_runtime.cpp` | Gangguan saat eksekusi              | Terjadi pembagian dengan nol jika jumlah mahasiswa yang dimasukkan adalah 0                                           | Tidak ada pemeriksaan terhadap nilai jumlah sebelum dipakai sebagai pembagi                  | Pastikan jumlah mahasiswa valid sebelum menghitung. Jika nilainya nol, tampilkan informasi atau hentikan perhitungan.            |
|   4 | `k4_logika.cpp`  | Hasil logika perhitungan keliru     | Program menampilkan rata-rata `81`, bukan `81.67`                                                                     | Pembagian menggunakan operand integer, sehingga bagian pecahan hasil tidak disimpan          | Jadikan salah satu operand bertipe pecahan, contohnya memakai pembagi `3.0`, agar hasil desimal tetap diperoleh.                 |

## Catatan Pembelajaran

Masalah dalam kode bisa muncul sebelum maupun sesudah program dijalankan. Kesalahan sintaks umumnya diketahui saat kompilasi, sedangkan kesalahan perhitungan bisa tersembunyi meskipun program berhasil berjalan. Oleh sebab itu, periksa hasil keluaran dengan hitungan acuan dan coba berbagai masukan, termasuk kondisi khusus seperti jumlah mahasiswa nol.

# Evaluasi Kesalahan Praktikum 5

Berikut adalah catatan beberapa masalah yang dijumpai pada latihan pemrograman, alasan masalah itu terjadi, dan cara menanganinya.

## Kasus yang Ditinjau

| No. | Berkas           | Kelompok masalah                | Indikasi                                                                                             | Penyebab utama                                                                                        | Saran perbaikan                                                                                                          |
| --: | ---------------- | ------------------------------- | ---------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------ |
|   1 | `k1_sintaks.cpp` | Kesalahan sintaks dan deklarasi | Kompiler mengeluhkan tanda `,` atau `;` sebelum `std` serta mengingatkan bahwa `nilai` tidak dipakai | Deklarasi `int nilai = 80` tidak ditutup dengan titik koma; variabel tersebut juga tidak dipakai lagi | Tambahkan `;` setelah deklarasi. Gunakan `nilai` dalam operasi berikutnya atau hapus jika tidak dibutuhkan.              |
|   2 | `k2_nama.cpp`    | Kesalahan penamaan              | `Nilai` tidak ditemukan dan kompiler mengusulkan `nilai`; `bonus` juga belum dikenal                 | C++ membedakan kapitalisasi nama. `bonus` dirujuk sebelum dideklarasikan                              | Tulis nama variabel secara seragam, misalnya selalu `nilai`, dan deklarasikan `bonus` sebelum baris yang menggunakannya. |
|   3 | `k3_runtime.cpp` | Kesalahan waktu eksekusi        | Terjadi operasi bagi nol saat jumlah mahasiswa bernilai nol                                          | Program tidak memastikan penyebutnya valid sebelum melakukan pembagian                                | Tambahkan validasi jumlah mahasiswa. Jangan jalankan perhitungan jika jumlahnya nol; berikan pesan atau akhiri proses.   |
|   4 | `k4_logika.cpp`  | Kesalahan logika perhitungan    | Nilai rata-rata keluar sebagai `81`, bukan `81.67`                                                   | Kedua nilai dalam operasi pembagian bertipe integer, sehingga pecahan terpotong                       | Pakai pembagi pecahan seperti `3.0` supaya operasi menghasilkan rata-rata desimal.                                       |

## Pelajaran dari Pengujian

Kompilasi yang berhasil belum tentu membuktikan hasil program sudah benar. Ada masalah yang langsung menghentikan kompilasi, seperti tanda baca atau nama yang tidak dikenali, sementara kesalahan logika baru tampak setelah keluaran diperiksa. Uji program dengan nilai normal dan kondisi khusus—termasuk jumlah nol—serta bandingkan hasilnya terhadap hitungan manual.
