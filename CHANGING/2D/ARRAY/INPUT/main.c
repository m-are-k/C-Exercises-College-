#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab_1[5][5] =
    {
        {
            1,2,3,4,5
        },
        {
            6,7,8,9,10
        },
        {
            11,12,13,14,15
        },
        {
            16,17,18,19,20
        },
        {
            21,22,23,24,25
        }
    };

    int minimum = tab_1[0][0];
    int maksimum = tab_1[0][0];

    for (int y=0;y<5;y++)
    {
    for (int i=0;i<5;i++)
    {
        if (minimum > tab_1[y][i])
        {
            minimum = tab_1[y][i];
        }
    };

    }
    for (int y=0;y<5;y++)
    {
        for (int i=0;i<5;i++)
        {
            if (maksimum < tab_1[y][i])
            {
                maksimum = tab_1[y][i];
            }
        }
    };
    int suma=0;
    for(int i=0;i<5;i++)
    {
        for(int y=0;y<5;y++)
        {
            suma = suma+tab_1[i][y];
        }
    }

    int sumaPoPrzekatnej=0;
        for(int y=0;y<5;y++)
    {
        for(int x=0;x<=y;x++)
        {
            sumaPoPrzekatnej = sumaPoPrzekatnej+tab_1[y][x];
        }
    }

    printf("najmniejsza wartosc: %d\nnajwieksza wartosc: %d\nsuma wszystkich wyrazow to: %d\nsuma wyrazow po przekatnej: %d",minimum,maksimum,suma,sumaPoPrzekatnej);

    return 0;
}
