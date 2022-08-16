// BUG: Can't have more than 8-9 entries, zsh dies:
// zsh: segmentation fault (core dumped)  dwmblocks
//
// I think it's related to the number of chars rather
// than entries, because I can have 9 entries, but
// whenever uptime or volume indicators go in the triple
// digits, it crashes.

static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",        "brightness",           0,                 12},
    {"",        "uptime_",              1,                 0},
    {"",        "average_temp",         1,                 0},
    {"",        "wifi",                 3,                 0},
    {"",        "speed",                1,                 0},
    {"",        "volume",               0,                 10}, // The command that sends this signal is "kill -44 $(pidof dwmblocks)". Signal=kill_arg-34.
    {"",        "date_",               60,                 0},
    {"",        "layout",               0,                 11},
    {"",        "time_",                1,                 0},
    {"",        "battery",              2,                 0},
};

static char *delim = "   ";
