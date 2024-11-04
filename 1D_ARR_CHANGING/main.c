#include <stdio.h>
#include <stdlib.h>
int szukajMinimum(int arr[], int wielkosc)
{
    int minimum = arr[0];
    for (int i=0;i<wielkosc;i++)
    {
        if (minimum>arr[i])
        {
            minimum = arr[i];
        }
    }
    return minimum;
}

int szukajMaksimum(int arr[], int wielkosc)
{
    int maksimum = arr[0];
    for(int i=0;i<wielkosc;i++)
    {
        if (maksimum<arr[i])
        {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

int main()
{
    int tab_1[] = {66,12513,51,32,5,71};
    int wejsciowaWartosc;
    printf("podaj wartosc ktora ma znalezc sie w tablicy: ");
    scanf("%d",&wejsciowaWartosc);
    int wielkosc = sizeof(tab_1) / sizeof(tab_1[0]);
    tab_1[wielkosc]=wejsciowaWartosc;
    for(int i=0;i<wielkosc+1;i++)
    {
        printf("wartosc %d jest rowna %d \n",i+1,tab_1[i]);
    }
    int minimalnaWartosc = (szukajMinimum(tab_1,wielkosc+1));
    int maksymalnaWartosc = (szukajMaksimum(tab_1,wielkosc+1));
    printf("Najmniejsza wartosc tablicy wynosi: %d\nNajwieksza wartosc tablicy wynosi: %d\n",minimalnaWartosc,maksymalnaWartosc);
    return 0;
}
