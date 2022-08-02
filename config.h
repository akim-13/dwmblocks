// BUG: Can't have more than 8 entries, zsh throws segmentation error and dumps the core.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",        "average_temp",         1,                 0},
    {"",        "volume",               0,                 10}, // The command that sends this signal is "kill -44 $(pidof dwmblocks)". No idea why 44.
    {"",        "wifi",                 3,                 0},
    {"",        "speed",                1,                 0},
    // {"",        "uptime_",              1,                 0},
    {"",        "battery",              2,                 0},
    {"",        "date_",               60,                 0},
    {"",        "time_",                1,                 0},
    {"",        "layout",               0,                 10},
};

static char *delim = "   ";
