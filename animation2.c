#include <stdio.h>
#include <Windows.h>

// title function

void Title(type)
{

    // FRAMES

    char title[] = {"############       ###       ##           #####\n"
                    "#           #      ####      ##         ##     ##\n"
                    "#            #     ## ##     ##        ##       ##\n"
                    "#             #    ##  ##    ##       ##         ##\n"
                    "#             #    ##   ##   ##      ## ######### ##\n"
                    "#            #     ##    ##  ##     ##             ##\n"
                    "#           #      ##     ## ##    ##               ##\n"
                    "############       ##      ####   ##                 ##\n\n\n\n\n\n\n\n\n"};



    char title2[] = {"#######|###        ###        ##         ##|##\n"
                     "#           #      ####      ##         ##     ##\n"
                     "#            #     ## ##     ##        ##       ##\n"
                     "#             #    ##  ##    |#       ##         ##\n"
                     "#             #    ##   ##   ##      ## |######## ##\n"
                     "#            #     ##    ##  ##     ##             ##\n"
                     "#           #      ##     ## ##    ##               ##\n"
                     "####|#######       ##      ####   ##                 ##\n\n\n\n\n\n\n\n\n"};

    char title3[] = {"########|###       ###       ##           #####\n"
                     "#           #      ####      ##         ##     ##\n"
                     "#            #     ## ##     ##        ##       ##\n"
                     "#             #    ##  ##    #|       ||         ##\n"
                     "#             #    ##   ##   ##      ## ######### ##\n"
                     "#            #     ##    ##  ##     ##             ##\n"
                     "#           #      ##     ## ##    ##               ##\n"
                     "###|########       ##      ####   ##                 ##\n\n\n\n\n\n\n\n\n"};

    char title4[] = {"######|#|###       ###       ##           #####\n"
                     "#           #      ####      ##         ##     ##\n"
                     "#            #     ## ##     ##        ##       ##\n"
                     "#             #    ##  ##    #|       ||         ##\n"
                     "#             #    ##   ##   ##      ## ######### ##\n"
                     "#            #     ##    ##  ##     ##             ##\n"
                     "#           #      ##     ## ##    ||               ##\n"
                     "|##|########       ##      ####   ##                 ##\n\n\n\n\n\n\n\n\n"};

    char title5[] = {"####&###|###       ###       ##           #####\n"
                     "#           #      ####      $#         ##     ##\n"
                     "#            #     ## ##     ##        ##       ##\n"
                     "#             #    ##  ##    #|       ||         ##\n"
                     "#             #    ##   #$   ##      ## ######### ##\n"
                     "#            #     ##    ##  ##     ##             ##\n"
                     "#           #      ##     ## ##    ##               ##\n"
                     "##$|########       ##      ####   ##                 ##\n\n\n\n\n\n\n\n\n"};


    // Title animation types (switching frames every depending on type)

    // type 1

    if (type == 1)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_BLUE);

        printf("%s", title);
    }

    // type 2

    if (type == 2)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_GREEN);

        printf("%s", title2);
    }

    // type 3

    if (type == 3)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_BLUE);

        printf("%s", title3);
    }

    // type 4

    if (type == 4)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_GREEN);

        printf("%s", title4);
    }

    // type 5

    if (type == 5)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_BLUE);

        printf("%s", title5);
    }

}


// animation

void animation(type)
{

    // FRAMES

    char square[] = {"########\n"
                     "########\n"
                     "########\n"};

    char square2[] = {"########\n"
                     "########\n"
                     " ########\n"};

    char square3[] = {" ########\n"
                     "########\n"
                     "  ########\n"};

    char square4[] = {"########\n"
                     "  ########\n"
                     " ########\n"};

    char square5[] = {"########\n"
                     "  ########\n"
                     "########\n"};


    // animation types (switching frames every depending on type)

    // type 1

    if (type == 1)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_BLUE);

        printf("%s", square);
    }

    // type 2

    if (type == 2)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_BLUE);

        printf("%s", square2);
    }

    // type 3

    if (type == 3)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_GREEN);

        printf("%s", square3);
    }

    // type 4

    if (type == 4)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_GREEN);

        printf("%s", square4);
    }

    // type 5

    if (type == 5)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole,
        FOREGROUND_BLUE);

        printf("%s", square5);
    }
}



// Main function



int main()
{
    // type frame

    int tp = 0;
    int t = 0;

    // title while loop (frame switcher for title)

    while (10 == 10)
    {
        Sleep(150);
        t += 1;
        Title(t);
        if (t == 6)
        {
            break;
        }
    }

    // switching frames on while true

    while (10 == 10)
    {

        // switching frames

        Sleep(100);
        tp += 1;
        animation(tp);

        // reseting variable at 6

        if (tp == 6)
        {
            tp = 0;
        }
    }

    return 0;
}
