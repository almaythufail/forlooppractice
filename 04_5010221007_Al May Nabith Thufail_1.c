/* Program Deret Bilangan
Al May Nabith Thufail
5010221007
Departemen Teknik Sistem dan Industri
Algoritma dan Pemrograman Komputer D*/

#include <stdio.h>

int main (){
    int i,j,k;
        for (i=1;i<=10;i++)
        {
        printf ("Deret Bilangan 1-10 : ");
        printf ("%i \n", i);
        }
        for (j=5;j<=100;j=j+5)
        {
        printf ("Bilangan Kelipatan 5 (5-100): ");
        printf (" %i \n", j);
        }
        for (k=2;k<=1000;k=k+2)
        {
        printf ("Bilangan genap antara 1-1000 : ");
        printf (" %i \n", k);
        }
    return 0;
}