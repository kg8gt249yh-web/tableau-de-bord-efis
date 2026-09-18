#include <stdio.h>

#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m"
#define WHITE   "\033[37m"
#define BLUE    "\033[34m"
#define DIM     "\033[2m"

int main(void)
{
    printf("\033[2J\033[H");

    printf(CYAN
    "+--------------------------------------------------------------------------------+\n"
    "|                         A320 FLIGHT DISPLAY                                    |\n"
    "+--------------------------------------------------------------------------------+\n"
    RESET);

    printf(
    "| FMA | " GREEN "THR CLB" RESET " | " GREEN "CLB" RESET " | " GREEN "NAV" RESET
    " | " GREEN "AP1" RESET " | " GREEN "A/THR" RESET
    " |              FCU  SPD " YELLOW "123" RESET
    " HDG " YELLOW "090" RESET
    " ALT " YELLOW "3500" RESET " |\n");

    printf(CYAN
    "+--------------------------------------+-----------------------------------------+\n"
    "|          PRIMARY FLIGHT DISPLAY      |           NAVIGATION DISPLAY            |\n"
    "+--------------------------------------+-----------------------------------------+\n"
    RESET);

    printf(
    "| SPEED        ATTITUDE       ALTITUDE  |              NAVIGATION / ND            |\n"
    "|                                      |                                         |\n"
    "| 180              ^             5000  |       030       000       030           |\n"
    "| 160           /  |  \\          4000  |    330    \\             /    060        |\n"
    "| 140         /    |    \\        3500  |  300        \\    " MAGENTA "● ABC" RESET "    /    090        |\n"
    "| " YELLOW ">123" RESET " -----+-----+-----       3000  |              \\    " YELLOW "+" RESET "    /              |\n"
    "| 120         \\    |    /        2500  |  270 --------- " YELLOW "▲" RESET " --------- 090          |\n"
    "| 100           \\  |  /          2000  |              /         \\                 |\n"
    "| 080              v             1500  |           120           060              |\n"
    "|                                      |                                         |\n"
    "|        60 80 100 [" YELLOW "123" RESET "] 140 160 180     |          " GREEN "TRK 090" RESET "   " GREEN "12.3 NM" RESET "          |\n"
    "+--------------------------------------+-----------------------------------------+\n"
    );

    printf(
    "|             HEADING / TRACK          |              NAVIGATION DATA             |\n"
    "|                                      |                                         |\n"
    "|                  N                   | CRS   " GREEN "090" RESET "       TRK   " GREEN "088" RESET "              |\n"
    "|                  |                   | WPT   " GREEN "ABC" RESET "       GS    " GREEN "324 KT" RESET "            |\n"
    "|            W ----+---- E             | HDG   " GREEN "090" RESET "       ETA   " GREEN "14:35" RESET "            |\n"
    "|                  |                   | FUEL  " GREEN "64500 KG" RESET "                           |\n"
    "|                  S                   | QNH   " GREEN "1013" RESET "                              |\n"
    "|                " YELLOW "090°" RESET "                   |                                         |\n"
    "+--------------------------------------+-----------------------------------------+\n"
    );

    printf(
    "| THRUST                               | TERRAIN / FLIGHT PATH                    |\n"
    "|                                      |                                         |\n"
    "|      S ----------- F                 |              " GREEN "/" RESET "                    |\n"
    "|           " GREEN "THR 58.3 %" RESET "               |           " GREEN "/" RESET "                      |\n"
    "|                                      |        " GREEN "/" RESET "                        |\n"
    "|                                      |     " YELLOW "^^^^^^^" RESET "      " YELLOW "^^^^^^^" RESET "              |\n"
    "+--------------------------------------+-----------------------------------------+\n"
    );

    printf(
    "| SYSTEMS                              | STATUS                                  |\n"
    "|                                      | AP1       " GREEN "ON" RESET "                        |\n"
    "| A/THR      " GREEN "ON" RESET "                  | FD        " GREEN "ON" RESET "                        |\n"
    "| NAV        " GREEN "GPS" RESET "                 | TCAS      " GREEN "TA/RA" RESET "                      |\n"
    "+--------------------------------------------------------------------------------+\n"
    );

    printf(
    "| OAT " YELLOW "-2 C" RESET
    " | ISA " GREEN "+0 C" RESET
    " | FUEL " GREEN "6800 KG" RESET
    " | UTC " GREEN "14:28" RESET
    " | VOR1 " GREEN "112.30" RESET
    " | FLT " GREEN "1:12" RESET
    " | VOR2 " GREEN "116.20" RESET " |\n"
    "+--------------------------------------------------------------------------------+\n"
    );

    printf(DIM
    "                         A320 EFIS TRAINING DISPLAY\n"
    RESET);

    return 0;
}
