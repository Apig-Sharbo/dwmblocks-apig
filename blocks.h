//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {" ", "~/.local/bin/statusbar/brightness-script",   1,      1},
    {"", "~/.local/bin/statusbar/volume",               1,      2},
    {"", "date '+%Y %b %d (%a) %r'",                    1,      3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
