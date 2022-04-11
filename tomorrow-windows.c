#include <stdio.h>

int main () {
    char nama[200];
    printf("Masukkan nama anda: ");
    scanf("%[^\n]%*c", nama);
    system("cls");

    printf("Halo selamat datang %s di program Date ini.\n\n", nama);

    int tanggal, bulan, tahun;
    int loop = 1;

    while (loop == 1) {
        printf("Masukkan tanggalnya     : ");
        scanf("%d", &tanggal);
        printf("Masukkan bulannya       : ");
        scanf("%d", &bulan);
        printf("Masukkan tahunnya       : ");
        scanf("%d", &tahun);
        system("cls");

        int ada31 = 0;
        int ada30 = 0;
        int bulan31[] = {1, 3, 5, 7, 8, 10, 12};
        int bulan30[] = {4, 6, 9, 11};

        for (int i = 0; i < 7; i++) {
            if (bulan == bulan31[i]) {
                ada31 = 1;
                break;
            }
        }

        for (int i = 0; i < 4; i++) {
            if (bulan == bulan30[i]) {
                ada30 = 1;
                break;
            }
        }

        int kabisat;
            char str_kabisat[10];

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
            system("cls");
            printf("Tanggal yang kamu masukkan tidak valid. \n\n");
                    
        }

        else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 30) && (ada30 == 1))) {
            system("cls");
            printf("Tanggal yang kamu masukkan tidak valid. \n\n");
        }

        else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 29) && (bulan == 2) && (kabisat == 1))) {
            system("cls");
            printf("Tanggal yang kamu masukkan tidak valid. \n\n");
        }

        else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 28) && (bulan == 2) && (kabisat == 0))) {
            system("cls");
            printf("Tanggal yang kamu masukkan tidak valid. \n\n");
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
                printf("Next day dari tanggal yang kamu input adalah 1/%d/%d\n\n",tahun);
            }

            else {
                printf("Next day dari tanggal yang kamu input adalah %d/%d/%d\n\n",tanggal + 1, bulan, tahun);
            }
        }

        char yn[1];

        printf("Masih mau melakukan operasi?\n");
        printf("Yes (y) or no (n) : ");
        scanf("%s", yn);
        system("cls");

        int sama = strcmp("y", yn);

        if (sama != 0) {
            break;
        }    
    }

    return 0;
}