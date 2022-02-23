#include <stdio.h>
#include <stdlib.h>

void turnModule(float sample[][3]);

int main()
{

    float sample[3][3] = {{7.5, -4.3, -1.5},
                          {9.1, 15.5, -12.3},
                          {-0.3, 5, -2.2}};

    turnModule(sample);

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%.2f ", sample[i][j]);
    }

    return 0;
}

void turnModule(float sample[][3])
{
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (sample[i][j] < 0){
                    sample[i][j] = sample[i][j] * (-1);
                }
}