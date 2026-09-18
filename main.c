#include <stdio.h>

int main(void)
{
    printf("\033[36m");
    
    printf("+--------------------------------------------------------------------------------+\n");
    printf("|                         A320 FLIGHT DISPLAY                                   |\n");
    printf("+--------------------------------------------------------------------------------+\n");

    printf("| FMA | THR CLB | CLB | NAV | AP1 | A/THR |              FCU  SPD 123  HDG 090 |\n");
    printf("+--------------------------------------+-----------------------------------------+\n");

    printf("|          PRIMARY FLIGHT DISPLAY      |             NAVIGATION DISPLAY          |\n");
    printf("+--------------------------------------+-----------------------------------------+\n");

    printf("| SPEED          ATTITUDE       ALTITUDE|          NAVIGATION / ND                |\n");
    printf("|                                      |                                         |\n");
    printf("|  180              ^             5000 |              030       000       030   |\n");
    printf("|  160            / | \\           4000 |          330    \\     /     /    060   |\n");
    printf("|  140           /  |  \\          3500 |       300         \\ + /         090    |\n");
    printf("| >123   -------/---+---\\-------  3000 |    270 -----------  +  ----------- 090 |\n");
    printf("|  120          \\   |   /         2500 |       240          / \\          120    |\n");
    printf("|  100           \\  |  /          2000 |          210     /     \\     150      |\n");
    printf("|  080            \\ | /           1500 |                 TRK 090                |\n");
    printf("|                                      |                                         |\n");
    printf("|     60  80 100 [123] 140 160 180   |             GS 324 T   12.3 NM         |\n");

    printf("+--------------------------------------+-----------------------------------------+\n");

    printf("|              HEADING / TRACK         |              NAVIGATION DATA            |\n");
    printf("|                                      |                                         |\n");
    printf("|                    N                 |     CRS 090       TRK 088              |\n");
    printf("|                    |                 |     WPT ABC       GS  324 KT            |\n");
    printf("|             W -----+----- E          |     HDG 090       ETA 14:35             |\n");
    printf("|                    |                 |     FUEL 64500 KG                      |\n");
    printf("|                    S                 |     QNH 1013                           |\n");
    printf("|                  090 deg             |                                         |\n");

    printf("+--------------------------------------+-----------------------------------------+\n");

    printf("| THRUST               | TERRAIN / FLIGHT PATH              | SYSTEMS            |\n");
    printf("|                      |                                    |                    |\n");
    printf("| S ---------------- F|             /                      | AP1       ON       |\n");
    printf("|       THR 58.3 %%     |           /   /                   | A/THR     ON       |\n");
    printf("|                      |         /   /                     | FD        ON       |\n");
    printf("|                      |       /                           | NAV       GPS      |\n");
    printf("|                      |  ^^^^^^^^     ^^^^^^^^            | TCAS      TA/RA    |\n");

    printf("+----------------------+------------------------------------+--------------------+\n");

    printf("| OAT -2 C | ISA +0 C | FUEL 6800 KG | UTC 14:28 | VOR1 112.30 | FLT 1:12 | VOR2 116.20 |\n");

    printf("+--------------------------------------------------------------------------------+\n");

    printf("\033[0m");
    printf("                    A320 EFIS TRAINING DISPLAY - TERMINAL SIMULATION\n");

    return 0;
}
