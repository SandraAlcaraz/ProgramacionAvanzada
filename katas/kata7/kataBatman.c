#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);

    int x1 = 0;
    int x2 = W - 1;

    int y1 = 0;
    int y2 = H - 1;


    // game loop
    while (1)
    {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        if (strstr(bombDir, "R") != NULL)
            x1 = X0 + 1;
        else if (strstr(bombDir, "L") != NULL)
            x2 = X0 - 1;

        if (strstr(bombDir, "D") != NULL)
            y1 = Y0 + 1;
        else if( strstr(bombDir, "U") != NULL)
            y2 = Y0 - 1;


        X0 = (x1 +x2) / 2;
       Y0 = (y1 + y2) / 2;

        // the location of the next window Batman should jump to.
        printf("%d %d\n", X0, Y0);
    }

    return 0;
}
