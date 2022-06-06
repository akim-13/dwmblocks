//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",        "average_temp",         1,                 0},
    {"",        "volume",               0,                 10}, // signal should be 10, but it results in a weird char being displayed
    {"",        "wifi",                 3,                 0},
    {"",        "speed",                1,                 0},
    {"",        "uptime_",              1,                 0},
    {"",        "battery",              2,                 0},
    {"",        "date_",               60,                 0},
    {"",        "time_",                1,                 0},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
// │┃
static char *delim = "   ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
