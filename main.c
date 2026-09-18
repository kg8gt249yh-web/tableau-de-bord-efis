#include <stdio.h>

int main(void)
{
    int vitesse = 123;
    int altitude = 3500;
    int cap = 90;

    int vitesse_1 = vitesse - 40;
    int vitesse_2 = vitesse - 20;
    int vitesse_3 = vitesse + 20;
    int vitesse_4 = vitesse + 40;

    int altitude_1 = altitude - 1000;
    int altitude_2 = altitude - 500;
    int altitude_3 = altitude + 500;
    int altitude_4 = altitude + 1000;

    int cap_1 = cap - 30;
    int cap_2 = cap - 15;
    int cap_3 = cap + 15;
    int cap_4 = cap + 30;

    char direction = 'E';

    printf("+-----------------------------------------------------------------------+\n");
    printf("|                         A320 FLIGHT DISPLAY                           |\n");
    printf("+--------------------------------------+--------------------------------+\n");
    printf("|              PRIMARY FLIGHT DISPLAY  |       NAVIGATION DISPLAY       |\n");
    printf("+--------------------------------------+--------------------------------+\n");
    printf("| SPEED        ATTITUDE       ALTITUDE  |          HEADING               |\n");
    printf("|                                      |                                |\n");
    printf("| %3d              ^           %4d    |             %03d               |\n",
           vitesse_4, altitude_4, cap_4);
    printf("| %3d           /  |  \\        %4d    |       %03d       %03d           |\n",
           vitesse_3, altitude_3, cap_3, cap_4);
    printf("| %3d         /    |    \\      %4d    |   %03d     +     %03d           |\n",
           vitesse_2, altitude_2, cap_2, cap);
    printf("|>%3d -------+-----+-----       %4d    |       %03d       %03d           |\n",
           vitesse, altitude, cap_1, cap_2);
    printf("| %3d         \\    |    /      %4d    |             %03d               |\n",
           vitesse_1, altitude_1, cap);
    printf("| %3d           \\  |  /        %4d    |                                |\n",
           vitesse_2, altitude_2, cap);
    printf("| %3d              v           %4d    |             %c                  |\n",
           vitesse_1, altitude_1, direction);
    printf("|                                      |                                |\n");
    printf("|     %3d  %3d  [%3d]  %3d  %3d       |      %03d  %03d  %03d  %03d      |\n",
           vitesse_1, vitesse_2, vitesse, vitesse_3, vitesse_4,
           cap_1, cap_2, cap, cap_3);
    printf("+--------------------------------------+--------------------------------+\n");
    printf("|              HEADING / TRACK         |        FLIGHT DATA             |\n");
    printf("|                                      |                                |\n");
    printf("|                  N                   | SPEED       %3d KTS            |\n",
           vitesse);
    printf("|                  |                   | ALTITUDE   %4d FT             |\n",
           altitude);
    printf("|            W ----+---- E             | HEADING     %03d DEG            |\n",
           cap);
    printf("|                  |                   |                                |\n");
    printf("|                  S                   |                                |\n");
    printf("+--------------------------------------+--------------------------------+\n");
    printf("|              END OF DISPLAY          |                                |\n");
    printf("+-----------------------------------------------------------------------+\n");

    return 0;
}
