# P09 Fungsi dan Pemrograman Modular

Folder kode Pertemuan 9 Pemrograman Terstruktur, pertemuan pertama setelah UTS. Flowchart mulai memakai
simbol kelima: proses terdefinisi (persegi bergaris ganda) untuk pemanggilan fungsi; isi fungsinya digambar
sebagai flowchart tersendiri yang diawali "Mulai namaFungsi" dan diakhiri "Kembali".

## Isi

| Berkas | Kegunaan |
|---|---|
| `sinilai_v07.cpp` | Implementasi lengkap SiNilai v0.7 berbasis fungsi modular dan parameter referensi |
| `contoh_masukan.txt` | Data uji masukan untuk memverifikasi perilaku program |

## Fungsi-fungsi SiNilai v0.7

| Fungsi | Parameter | Mengembalikan | Keterangan |
|---|---|---|---|
| `bacaJumlah()` | tidak ada | `int` jumlah mahasiswa yang sah | Validasi input bilangan bulat >= 1 |
| `bacaNama()` | tidak ada | `string` nama yang sah dan rapi | Validasi tanpa angka/kosong & Title Case |
| `bacaKomponen(string label)` | label (by value) | `double` 0 sampai 100 | Pembacaan aman komponen nilai |
| `bacaData(string& nama, string& npm, double& ...)` | enam referensi | `void`; mengisi variabel main | Membaca seluruh data satu mahasiswa |
| `hitungNilaiAkhir(double, double, double, double)` | empat komponen | `double` nilai akhir | Menghitung nilai terbobot |
| `hurufMutu(double nilai_akhir)` | nilai akhir | `string` huruf | Konversi rentang nilai ke huruf mutu |
| `cetakBaris(string, double, string, bool)` | data satu mahasiswa | `void` | Mencetak rekap satu baris mahasiswa |
| `perbaruiPenghitung(char awal, int& a, ..., int& e)` | huruf pertama dan lima referensi | `void`; menambah penghitung main | Menghitung distribusi huruf mutu |
| `cetakSebaran(int a, ..., int e)` | lima penghitung (by value) | `void` | Menampilkan grafik bintang sebaran nilai |

Bobot komponen ditulis sebagai konstanta global (`const`), bukan variabel global: konstanta tidak pernah
berubah sehingga aman dibaca dari fungsi mana pun.

## Deklarasi AI

Alat yang digunakan: Google Gemini
Tujuan penggunaan: Membantu melengkapi implementasi enam fungsi TODO pada kerangka sinilai_v07_awal.cpp (pemecahan kode modular tanpa variabel global serta penggunaan pass-by-reference pada bacaData dan perbaruiPenghitung) serta menyusun dokumentasi README.md.
Cara memeriksa:
  1.Mengompilasi program dengan flag ketat (g++ -Wall -Wextra -Werror sinilai_v07.cpp -o sinilai_v07) untuk memastikan tidak ada error maupun warning.
  2.Menjalankan pengujian otomatis menggunakan berkas contoh_masukan.txt (./sinilai_v07 < contoh_masukan.txt) dan mencocokkan seluruh baris hasil perhitungan, validasi input tidak sah (r2d2, abc, 120), rata-rata kelas (64.66), nilai tertinggi (Dewi Lestari (90.00)), serta sebaran huruf mutu agar identik dengan keluaran SiNilai v0.6.
