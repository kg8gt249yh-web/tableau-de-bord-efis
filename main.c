#include <stdio.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BRIGHT_GREEN "\033[92m"
#define CYAN    "\033[36m"
#define BRIGHT_CYAN "\033[96m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE    "\033[34m"
#define RED     "\033[31m"
#define WHITE   "\033[37m"
#define DIM     "\033[2m"

int main(void)
{
    printf("\033[2J\033[H");

    /* =========================================================
       HEADER
       ========================================================= */

    printf(CYAN
           "+----------------------------------------------------------------------------------------------------------+\n"
           "|                                      A320 FLIGHT DISPLAY                                                  |\n"
           "+----------------------------------------------------------------------------------------------------------+\n"
           RESET);

    printf("|" CYAN " FMA " RESET
           "| " GREEN "THR CLB" RESET
           " | " GREEN "CLB" RESET
           " | " GREEN "NAV" RESET
           " | " GREEN "AP1" RESET
           " | " GREEN "A/THR" RESET
           " |"
           "                                  " CYAN "FCU" RESET
           "  SPD " YELLOW "123" RESET
           "  HDG " YELLOW "090" RESET
           "  ALT " YELLOW "3500" RESET
           " |\n");

    printf("+----------------------------------------------------------------------------------------------------------+\n");

    /* =========================================================
       MAIN DISPLAY
       ========================================================= */

    printf("|" CYAN "                         PRIMARY FLIGHT DISPLAY" RESET
           "              |"
           CYAN "                         NAVIGATION DISPLAY" RESET
           "             |\n");

    printf("|----------------------------------------------------------------------------------------------------------|\n");

    /* SPEED + HORIZON + ALTITUDE / NAVIGATION */
    printf("|" CYAN
           " SPEED      ATTITUDE / HORIZON          ALTITUDE"
           RESET
           " |"
           CYAN "                    NAVIGATION / ND"
           RESET
           "                    |\n");

    printf("|                                                                                                          |\n");

    /* Speed / Horizon / Altitude / ND top */
    printf("|  " WHITE "180" RESET
           "        "BLUE "       ^       "RESET
           "                         "WHITE "4000" RESET
           " |              "GREEN "324" RESET " T"
           "                 "GREEN "12.3 NM" RESET "              |\n");

    printf("|  " WHITE "160" RESET
           "        "BLUE "     / | \\     "RESET
           "                         "WHITE "3500" RESET
           " |                    "MAGENTA "●" RESET "                 |\n");

    printf("|  " YELLOW ">123" RESET
           "       "CYAN "----\\ | /----" RESET
           "                         "YELLOW "3500" RESET
           " |              "CYAN "       030       " RESET "           |\n");

    printf("|  " WHITE "120" RESET
           "        "BLUE "      \\|/      "RESET
           "                         "WHITE "3000" RESET
           " |          "CYAN "  360        " RESET "  "WHITE "  020  040" RESET "       |\n");

    printf("|  " WHITE "100" RESET
           "        "BLUE "       /\\       "RESET
           "                         "WHITE "2500" RESET
           " |      "WHITE "  310       "RESET "   "YELLOW "+" RESET "   "WHITE "  050" RESET "       |\n");

    printf("|   "WHITE "80" RESET
           "        "BLUE "      /  \\      "RESET
           "                         "WHITE "2000" RESET
           " |   "WHITE " 300        "RESET " "CYAN "-----+-----" RESET " "WHITE " 060" RESET "       |\n");

    printf("|           "BLUE "     /    \\     "RESET
           "                         "WHITE "1500" RESET
           " |   "WHITE "290          "RESET "    "YELLOW "△" RESET "     "WHITE "070" RESET "       |\n");

    printf("|           "BLUE "    /      \\    "RESET
           "                         "WHITE "1000" RESET
           " |          "GREEN "YOU" RESET "        "GREEN "▲" RESET "              |\n");

    printf("|           "BLUE "   /        \\   "RESET
           "                         "WHITE " 500" RESET
           " |              "CYAN "TRK 090" RESET "              |\n");

    printf("|           "BLUE "  /          \\  "RESET
           "                         "WHITE "   0" RESET
           " |                                            |\n");

    printf("|                                                                                                          |\n");

    /* =========================================================
       SPEED SCALE
       ========================================================= */

    printf("| "CYAN"  SPEED SCALE"RESET
           "      "WHITE"60   80   100   "RESET "["YELLOW"123"RESET"]"WHITE"   140   160   180"RESET
           " |"
           "       "CYAN"RANGE 20 NM"RESET
           "       "WHITE" 5  10  15  20 NM"RESET
           "       |\n");

    printf("|                    "GREEN"▲"RESET
           "                                                                      "
           "             "MAGENTA"▾"RESET " WP "GREEN"ABC"RESET
           "       |\n");

    printf("+---------------------+-------------------------------------+-------------------+----------------------------+\n");

    /* =========================================================
       HEADING
       ========================================================= */

    printf("|" CYAN
           "                         HEADING / TRACK"
           RESET
           "              |"
           CYAN "                  NAVIGATION DATA"
           RESET
           "                     |\n");

    printf("|                                                                                                          |\n");

    printf("|                         "WHITE "N" RESET
           "                                |"
           "       "WHITE "CRS 090" RESET "        "GREEN "TRK 088" RESET "        "GREEN "GS 324 KT" RESET
           "       |\n");

    printf("|                         "WHITE "|" RESET
           "                                |"
           "       "WHITE "WPT ABC" RESET "        "GREEN "12.3 NM" RESET "        "GREEN "ETA 14:35" RESET
           "       |\n");

    printf("|                 "WHITE "W" RESET
           " -------- "YELLOW "+"RESET" -------- "WHITE "E"RESET
           "                         |"
           "       "WHITE "NEXT WPT" RESET "       "GREEN "DEF" RESET "             "
           "       |\n");

    printf("|                         "WHITE "|" RESET
           "                                |"
           "       "WHITE "HDG 090" RESET "        "GREEN "NAV1" RESET "             "
           "       |\n");

    printf("|                         "WHITE "S" RESET
           "                                |"
           "       "WHITE "FUEL" RESET "          "GREEN "64500 KG" RESET "          "
           "       |\n");

    printf("|                       "YELLOW "090°"RESET
           "                                |"
           "       "WHITE "QNH" RESET "           "GREEN "1013" RESET "              "
           "       |\n");

    printf("|                                                                                                          |\n");

    printf("+--------------------------------------+--------------------------------------+--------------------------+\n");

    /* =========================================================
       LOWER FLIGHT DATA
       ========================================================= */

    printf("|" CYAN " THRUST" RESET
           "                                |"
           CYAN " TERRAIN / FLIGHT PATH" RESET
           "                |"
           CYAN " SYSTEMS" RESET
           "            |\n");

    printf("|                                      |                                      |                         |\n");

    printf("|       "GREEN "S"RESET " ----------- "GREEN "F"RESET
           "                     |             "GREEN "/"RESET "                    |  "GREEN "AP1"RESET "      "GREEN "ON"RESET
           "            |\n");

    printf("|             "GREEN "THR 58.3 %"RESET
           "                  |           "GREEN "/"RESET "                      |  "GREEN "A/THR"RESET "     "GREEN "ON"RESET
           "            |\n");

    printf("|                                      |         "GREEN "/"RESET "                    |  "GREEN "FD"RESET "       "GREEN "ON"RESET
           "            |\n");

    printf("|                                      |       "GREEN "/"RESET "                      |  "GREEN "NAV"RESET "      "GREEN "GPS"RESET
           "            |\n");

    printf("|                                      |   "YELLOW "^^^^^^^"RESET "     "YELLOW "^^^^^^^"RESET
           "       |  "GREEN "TCAS"RESET "     "GREEN "TA/RA"RESET
           "           |\n");

    printf("|                                      |______________________________________|                         |\n");

    /* =========================================================
       FOOTER
       ========================================================= */

    printf("+----------------------------------------------------------------------------------------------------------+\n");

    printf("| "
           "OAT " YELLOW "-2 C" RESET
           "   |   ISA " GREEN "+0 C" RESET
           "   |   FUEL " GREEN "6800 KG" RESET
           "   |   UTC " GREEN "14:28" RESET
           "   |   VOR1 " GREEN "112.30" RESET
           "   |   FLT " GREEN "1:12" RESET
           "   |   VOR2 " GREEN "116.20" RESET
           " |\n");

    printf("+----------------------------------------------------------------------------------------------------------+\n");

    printf(DIM
           "\n"
           "                         A320 EFIS TRAINING DISPLAY - TERMINAL SIMULATION\n"
           RESET);

    return 0;
}
