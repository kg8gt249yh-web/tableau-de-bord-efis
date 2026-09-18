#include <stdio.h>

int main(void)
{
    /* Valeurs principales du tableau de bord */
    int vitesse = 123;
    int altitude = 3500;
    int cap = 90;

    /* Graduations de vitesse calculées */
    int vitesse_m40 = vitesse - 40;
    int vitesse_m20 = vitesse - 20;
    int vitesse_p20 = vitesse + 20;
    int vitesse_p40 = vitesse + 40;

    /* Graduations d'altitude calculées */
    int altitude_m1000 = altitude - 1000;
    int altitude_m500 = altitude - 500;
    int altitude_p500 = altitude + 500;
    int altitude_p1000 = altitude + 1000;

    /* Graduations de cap calculées */
    int cap_m30 = cap - 30;
    int cap_m15 = cap - 15;
    int cap_p15 = cap + 15;
    int cap_p30 = cap + 30;

    printf("+-----------------------------------------------------------------------+\n");
    printf("|                         A320 FLIGHT DISPLAY                           |\n");
    printf("+--------------------------------------+--------------------------------+\n");

    printf("|              PRIMARY FLIGHT DISPLAY  |       NAVIGATION DISPLAY       |\n");
    printf("+--------------------------------------+--------------------------------+\n");

    printf("| SPEED        ATTITUDE       ALTITUDE |          HEADING               |\n");
    printf("|                                      |                                |\n");

    printf("| %3d              ^           %4d   |             %03d               |\n",
           vitesse_p40, altitude_p1000, cap_p30);

    printf("| %3d           /  |  \\        %4d   |       %03d       %03d           |\n",
           vitesse_p20, altitude_p500, cap_m15, cap_p30);

    printf("| %3d         /    |    \\      %4d   |   %03d     +     %03d           |\n",
           vitesse_m20, altitude, cap_m30, cap);

    printf("|>%3d -------+-----+-----       %4d   |       %03d       %03d           |\n",
           vitesse, altitude_m500, cap_m15, cap_p15);

    printf("| %3d         \\    |    /      %4d   |             %03d               |\n",
           vitesse_m20, altitude_m1000, cap);

 printf("| %3d           \\  |  /        %4d   |                                |\n",
       vitesse_m40, altitude_m500);

   printf("| %3d              v           %4d   |             E                  |\n",
       vitesse_m20, altitude_m1000);

    printf("|                                      |                                |\n");

    printf("|     %3d  %3d  [%3d]  %3d  %3d       |      %03d  %03d  %03d  %03d      |\n",
           vitesse_m40, vitesse_m20, vitesse,
           vitesse_p20, vitesse_p40,
           cap_m30, cap_m15, cap, cap_p15);

    printf("+--------------------------------------+--------------------------------+\n");

    printf("|              HEADING / TRACK         |        FLIGHT DATA             |\n");
    printf("|                                      |                                |\n");
    printf("|                  N                   | SPEED      %3d KTS             |\n",
           vitesse);
    printf("|                  |                   | ALTITUDE   %4d FT              |\n",
           altitude);
    printf("|            W ----+---- E             | HEADING    %03d DEG             |\n",
           cap);
    printf("|                  |                   |                                |\n");
    printf("|                  S                   |                                |\n");
    printf("|                %03d deg               |                                |\n",
           cap);

    printf("+--------------------------------------+--------------------------------+\n");

    printf("|              HORIZON / TURN         |        AIRCRAFT DATA            |\n");
    printf("|                                      |                                |\n");
    printf("|                  ^                   | THRUST       58 %%               |\n");
    printf("|              /   |   \\               | VERTICAL      0 FT/MIN         |\n");
    printf("|            /     |     \\             |                                |\n");
    printf("|----------+-------+-------+-----------|                                |\n");
    printf("|            \\     |     /             |                                |\n");
    printf("|              \\   |   /               |                                |\n");
    printf("|                  v                   |                                |\n");

    printf("+-----------------------------------------------------------------------+\n");

    printf("| SPD %3d KTS | ALT %4d FT | HDG %03d | EFIS TRAINING DISPLAY          |\n",
           vitesse, altitude, cap);

    printf("+-----------------------------------------------------------------------+\n");

    return 0;
}
