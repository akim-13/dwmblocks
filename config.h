static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",        "wifi",                 3,                 0},
    {"",        "speed",                1,                 0},
    {"",        "uptime_",              1,                 0},
    {"",        "average_temp",         1,                 0},
    {"",        "bluetooth",            3,                 0},
    {"",        "brightness",           0,                 12},
    {"",        "volume",               0,                 10}, // The command that sends this signal is "kill -44 $(pidof dwmblocks)". Signal=kill_arg-34.
    {"",        "battery",              2,                 0},
    {"",        "layout",               0,                 11},
    {"",        "date_",               60,                 0},
    {"",        "time_",                1,                 0},
};

static char *delim = "   ";
