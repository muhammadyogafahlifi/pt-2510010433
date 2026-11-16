// SiNilai v0.6: v0.5 yang tangguh terhadap masukan salah. Dibangun di atas v0.5 (laporan kelas).
// Yang baru: angka dibaca dengan aman (cin.fail, clear, ignore), nama divalidasi dan dirapikan
// huruf per huruf. Perhatikan: pola pembacaan aman ditulis berulang untuk empat komponen;
// itu sengaja, supaya di Pertemuan 9 kamu merasakan sendiri gunanya fungsi..
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double W_HADIR = 0.10;
    const double W_MINGGUAN = 0.45;
    const double W_UTS = 0.25;
    const double W_UAS = 0.20;
    const double AMBANG_LULUS = 60;

    int cacah_mhs = 0;
    string awalan_pesan = "";
    cout << "=== SiNilai v0.6 ===\n";
    for (;;)
    {
        cout << awalan_pesan << "Masukkan jumlah mahasiswa: ";
        cin >> cacah_mhs;
        if (!cin.fail() && cacah_mhs >= 1)
            break;

        cin.clear();
        cin.ignore(1000, '\n');

        awalan_pesan = "Input tidak valid. ";
    }
    // TODO 1: do-while di atas berputar tanpa henti kalau pengguna mengetik huruf (cin gagal, isi jadi 0).
    //         Ganti dengan pola input_aman.cpp: baca sekali, lalu while (cin.fail() || jumlah_mahasiswa < 1)
    //         { cin.clear(); cin.ignore(1000, '\n'); minta lagi; }.

    cin.ignore(1000, '\n'); // buang Enter yang tersisa setelah angka, supaya getline nama tidak memungutnya

    cout << fixed << setprecision(2);

    double jumlah_skor = 0;
    int jml_lulus = 0;
    int hitung_mutu[5] = {0, 0, 0, 0, 0}; // urutan A, B, C, D, E
    double skor_puncak = -1;
    string nama_puncak;

    for (int no = 1; no <= cacah_mhs; no++)
    {
        string nama;
        string npm;
        double s_hadir = 0;
        double s_mingguan = 0;
        double s_uts = 0;
        double s_uas = 0;

        cout << "\n--- Mahasiswa ke-" << no << " dari " << cacah_mhs << " ---\n";

        cout << "Nama      : ";
        getline(cin, nama);
        // TODO 2: bungkus pembacaan nama dengan do-while seperti validasi_nama.cpp: ulangi selama nama
        //         kosong atau hanya spasi, atau mengandung angka. Periksa huruf per huruf dengan for.
        bool sah = false;
        while (!sah)
        {
            bool ada_huruf = false;
            bool ada_angka = false;

            for (size_t i = 0; i < nama.size() && !ada_angka; i++)
            {
                unsigned char c = nama[i];
                if (isdigit(c))
                    ada_angka = true;
                else if (isalpha(c))
                    ada_huruf = true;
            }

            sah = ada_huruf && !ada_angka;
            if (!sah)
            {
                cout << "Nama tidak valid. Masukkan nama lagi: ";
                getline(cin, nama);
            }
        }
        // TODO 3: rapikan nama seperti rapikan_nama.cpp: huruf pertama tiap kata besar, sisanya kecil.
        for (size_t i = 0; i < nama.size(); i++)
        {
            nama[i] = (char)tolower((unsigned char)nama[i]);
        }
        for (size_t i = 0; i < nama.size(); i++)
        {
            if (i == 0 || nama[i - 1] == ' ')
            {
                nama[i] = (char)toupper((unsigned char)nama[i]);
            }
        }

        cout << "NPM       : ";
        getline(cin, npm);

        // TODO 4: tambahkan while (cin.fail() || kehadiran < 0 || kehadiran > 100) { clear; ignore; minta lagi; }
        bool terima;

        cout << "Kehadiran : ";
        do
        {
            cin >> s_hadir;
            terima = !cin.fail() && s_hadir >= 0 && s_hadir <= 100;
            if (!terima)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Kehadiran tidak valid. Masukkan lagi: ";
            }
        } while (!terima);

        cout << "Mingguan  : ";
        do
        {
            cin >> s_mingguan;
            terima = !cin.fail() && s_mingguan >= 0 && s_mingguan <= 100;
            if (!terima)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Mingguan tidak valid. Masukkan lagi: ";
            }
        } while (!terima);

        cout << "UTS       : ";
        do
        {
            cin >> s_uts;
            terima = !cin.fail() && s_uts >= 0 && s_uts <= 100;
            if (!terima)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "UTS tidak valid. Masukkan lagi: ";
            }
        } while (!terima);

        cout << "UAS       : ";
        do
        {
            cin >> s_uas;
            terima = !cin.fail() && s_uas >= 0 && s_uas <= 100;
            if (!terima)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "UAS tidak valid. Masukkan lagi: ";
            }
        } while (!terima);
        // TODO 5: ulangi pola TODO 4 untuk mingguan, uts, dan uas (ya, empat kali; catat rasanya).

        cin.ignore(1000, '\n'); // buang Enter setelah uas, supaya getline nama mahasiswa berikutnya bersih

        double skor_akhir = s_hadir * W_HADIR;
        skor_akhir = skor_akhir + s_mingguan * W_MINGGUAN;
        skor_akhir = skor_akhir + s_uts * W_UTS;
        skor_akhir = skor_akhir + s_uas * W_UAS;

        // pohon keputusan: pisahkan dulu yang >= 60, baru dirinci
        string predikat;
        int posisi; // indeks ke hitung_mutu
        if (skor_akhir >= 60)
        {
            if (skor_akhir >= 75)
            {
                if (skor_akhir >= 80)
                {
                    predikat = "A";
                    posisi = 0;
                }
                else
                {
                    predikat = "B+";
                    posisi = 1;
                }
            }
            else if (skor_akhir >= 70)
            {
                predikat = "B";
                posisi = 1;
            }
            else if (skor_akhir >= 65)
            {
                predikat = "C+";
                posisi = 2;
            }
            else
            {
                predikat = "C";
                posisi = 2;
            }
        }
        else if (skor_akhir >= 40)
        {
            predikat = "D";
            posisi = 3;
        }
        else
        {
            predikat = "E";
            posisi = 4;
        }

        bool tuntas = skor_akhir >= AMBANG_LULUS;

        cout << "  " << left << setw(20) << nama << right << setw(7) << skor_akhir
             << "  " << left << setw(3) << predikat;
        if (tuntas)
        {
            cout << "Lulus\n";
        }
        else
        {
            cout << "Belum lulus\n";
        }

        jumlah_skor += skor_akhir;
        if (tuntas)
        {
            jml_lulus++;
        }
        hitung_mutu[posisi]++;

        if (skor_akhir > skor_puncak)
        {
            skor_puncak = skor_akhir;
            nama_puncak = nama;
        }
    }

    cout << "\n=== Laporan Kelas ===\n";
    cout << "Jumlah mahasiswa : " << cacah_mhs << "\n";
    cout << "Lulus            : " << jml_lulus << "\n";
    cout << "Belum lulus      : " << cacah_mhs - jml_lulus << "\n";
    cout << "Rata-rata kelas  : " << jumlah_skor / cacah_mhs << "\n";
    cout << "Tertinggi        : " << nama_puncak << " (" << skor_puncak << ")\n";

    cout << "\nSebaran huruf mutu:\n";
    int urut = 0;
    while (urut < 5)
    {
        cout << char('A' + urut) << " | ";
        int sisa = hitung_mutu[urut];
        while (sisa > 0)
        {
            cout << "#";
            sisa--;
        }
        cout << " " << hitung_mutu[urut] << "\n";
        urut++;
    }
    return 0;
}