/*
---------------------------------------------------------------------------------------------------------------
Program Tomorrow

{Program ini adalah program yang berfungsi untuk menentukan tanggal esok hari dari tanggal yang
dimasukkan oleh user}
---------------------------------------------------------------------------------------------------------------
Kamus

nama        : string {mendefenisikan nama pengguna}
tanggal     : integer {tanggal yang dimasukkan oleh user}
bulan       : integer {bulan yang dimasukkan oleh user}
tahun       : integer {tahun yang dimasukkan oleh user}
loop        : integer {initial variable untuk membantu loop}
ada31       : integer {merepresentasikan true dan false pada bulan. apabila bernilai 1 berarti bulan
                   yang dimasukkan user adalah bulan yang memiliki tanggal 31 hari}
ada30       : integer {merepresentasikan true dan false pada bulan. Apabila bernilai 1 berarti bulan 
                   yang dimasukkan oleh user adalah bulan yang memiliki tanggal 30 hari}
bulan31     : integer {merupakan bulan-bulan yang memiliki 31 hari}
bulan30     : integer {merupakan bulan-bulan yang memiliki 30 hari}
i           : integer {menentukan lokasi bulan pada array}
kabisat     : integer {merepresentasikan true dan false pada tahun. Apabila bernilai 1, berarti tahun
                   yang dimasukkan oleh user adalah tahun kabisat}
str_kabisat : string {membantu untuk memprint bahwa tahun yang di input user merupakan tahun 
                      kabisat atau tidak}
bulanhuruf  : string {mengonversi nilai bulan dalam bentuk integer yang dimasukkan oleh user ke dalam
                      betuk bulan string. Contohnya bulan 1 = bulan Januari}
yn          : string {membantu untuk memberikan pertanyaan kepada user, apakah ingin melakukan
                      operasi menentukan tanggal esok lagi atau tidak. Jika input "n", maka program
                      akan berhenti}
sama        : integer {mengonversi input fungsi yn sebelumnya ke dalam bentuk integer}
---------------------------------------------------------------------------------------------------------------
Algoritma

input(nama)
output("Nama kamu adalah ", nama)

while (loop = 1) do
	output("Masukkan tanggalnya 	:")
	input(tanggal)
	output("Masukkan bulannya 		:")
	input(bulan)
	output("Masukkan tahunnya 		:")
	input(tahun)

	if ((tanggal < 0) or (bulan < 0) or (bulan > 0) or (tahun < 0)) then
		output("Tanggal yang kamu masukkan tidak valid")
	else if ((tanggal > 31) && (month = {1, 3, 5, 7, 8, 10, 12})) then
		output("Tanggal yang kamu masukkan tidak valid")
	else if ((tanggal > 30) && month = {4, 6, 9, 11})
		output("Tanggal yang kamu masukkan tidak valid")
	else {
		output("Nextday dari tanggal yang kamu input adalah ", date +1, month + 1, year + 1)
	}


---------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char nama[200];
    printf("------------------------------------------------------------------------\n");
    printf("Masukkan nama anda: ");
    scanf("%[^\n]%*c", nama);
    printf("------------------------------------------------------------------------\n");

    printf("Halo selamat datang %s di program Date ini.\n", nama);

    int tanggal, bulan, tahun;
    int loop = 1;

    while (loop == 1) {
    	printf("------------------------------------------------------------------------\n");
        printf("Masukkan tanggalnya     : ");
        scanf("%d", &tanggal);
        printf("Masukkan bulannya       : ");
        scanf("%d", &bulan);
        printf("Masukkan tahunnya       : ");
        scanf("%d", &tahun);
        printf("------------------------------------------------------------------------\n");

        int ada31 = 0;
        int ada30 = 0;
        int bulan31[] = {1, 3, 5, 7, 8, 10, 12};
        int bulan30[] = {4, 6, 9, 11};
        int i;

        for (i = 0; i < 7; i++) {
            if (bulan == bulan31[i]) {
                ada31 = 1;
                break;
            }
        }

        for (i = 0; i < 4; i++) {
            if (bulan == bulan30[i]) {
                ada30 = 1;
                break;
            }
        }

        int kabisat;
        char str_kabisat[100];

            if (((tahun % 4) == 0) && ((tahun % 100) != 0)) {
                kabisat = 1;
                strcpy(str_kabisat, "adalah tahun Kabisat");
            }

            else if ((tahun % 400) == 0) {
                kabisat = 1;
                strcpy(str_kabisat, "adalah tahun Kabisat");
            }

            else {
                kabisat = 0;
                strcpy(str_kabisat, "bukan tahun Kabisat");
            }

        if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 31) && (ada31 == 1))) {
            printf("Tanggal yang kamu masukkan tidak valid. \n");
            printf("------------------------------------------------------------------------\n");
                    
        }

        else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 30) && (ada30 == 1))) {
            printf("Tanggal yang kamu masukkan tidak valid. \n");
            printf("------------------------------------------------------------------------\n");
        }

        else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 29) && (bulan == 2) && (kabisat == 1))) {
            printf("Tanggal yang kamu masukkan tidak valid. \n");
            printf("------------------------------------------------------------------------\n");
        }

        else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 28) && (bulan == 2) && (kabisat == 0))) {
            printf("Tanggal yang kamu masukkan tidak valid. \n");
            printf("------------------------------------------------------------------------\n");
        }

        else {
            char bulanhuruf[10];

            switch (bulan) {
                case 1:
                strcpy(bulanhuruf, "Januari");
                break;

                case 2:
                strcpy(bulanhuruf, "Februari");
                break;

                case 3:
                strcpy(bulanhuruf, "Maret");
                break;

                case 4:
                strcpy(bulanhuruf, "April");
                break;

                case 5:
                strcpy(bulanhuruf, "Mei");
                break;

                case 6:
                strcpy(bulanhuruf, "Juni");
                break;

                case 7:
                strcpy(bulanhuruf, "Juli");
                break;

                case 8:
                strcpy(bulanhuruf, "Agustus");
                break;

                case 9:
                strcpy(bulanhuruf, "September");
                break;

                case 10:
                strcpy(bulanhuruf, "Oktober");
                break;

                case 11:
                strcpy(bulanhuruf, "November");
                break;

                case 12:
                strcpy(bulanhuruf, "Desember");
                break;
            }

            int bulan31[] = {1, 3, 5, 7, 8, 10, 12};
            int bulan30[] = {4, 6, 9, 11};

            printf("Baik, tanggal yang kamu input adalah %d %s %d.\n", tanggal, bulanhuruf, tahun);

            printf("Perlu kamu ketahui, bahwa tahun yang kamu input %s\n", str_kabisat);
            
            if ((bulan == 2) && (kabisat == 1) && (tanggal == 29)) {
                printf("Next day dari tanggal yang kamu input adalah 1/%d/%d\n\n", bulan + 1, tahun);
            }

            else if ((bulan == 2) && (kabisat == 0) && (tanggal == 28)) {
                printf("Next day dari tanggal yang kamu input adalah 1/%d/%d\n\n", bulan + 1, tahun);
            }
            
            else if ((ada31 == 1) && (tanggal == 31) && (bulan != 12)) {
                printf("Next day dari tanggal yang kamu input adalah 1/%d/%d\n\n", bulan + 1, tahun);
            }

            else if ((tanggal == 31) && (bulan == 12)) {
                printf("Next day dari tanggal yang kamu input adalah 1/1/%d\n\n",tahun + 1);
            }

            else if ((ada30 == 1) && (tanggal == 30)) {
                printf("Next day dari tanggal yang kamu input adalah 1/%d/%d\n\n",bulan + 1, tahun);
            }

            else {
                printf("Next day dari tanggal yang kamu input adalah %d/%d/%d\n\n",tanggal + 1, bulan, tahun);
            }
        }

        char yn[1];

        printf("Masih mau melakukan operasi?\n");
        printf("Yes (y) or no (n) : ");
        scanf("%s", yn);
        printf("------------------------------------------------------------------------\n");

        int sama = strcmp("y", yn);

        if (sama != 0) {
            break;
        }    
    }

    return 0;
}
