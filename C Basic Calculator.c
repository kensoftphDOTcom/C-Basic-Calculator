#include<stdio.h>

#include<conio.h>

main() {
    char choice, c;
    float x, a, b, ans;
    int remain, z, y;
    clrscr();
    gotoxy(38, 10);
    textcolor(RED);
    cprintf("LOADING\n");
    gotoxy(49, 11);
    textcolor(GREEN);
    cprintf("]");
    x = 1;
    gotoxy(33, 11);
    textcolor(GREEN);
    cprintf("[");
    for (x = 1; x <= 15; x++) {
        textcolor(RED);
        cprintf("=");
        delay(100);
    }
    clrscr();
    textcolor(RED);
    gotoxy(38, 10);
    cprintf("LOADING\n");
    gotoxy(49, 11);
    textcolor(GREEN);
    cprintf("]");
    x = 1;
    gotoxy(33, 11);
    textcolor(GREEN);
    cprintf("[");
    for (x = 1; x <= 15; x++) {
        textcolor(YELLOW);
        cprintf("=");
        delay(100);
    }
    clrscr();
    textcolor(RED);
    gotoxy(38, 10);
    cprintf("LOADING\n");
    gotoxy(49, 11);
    textcolor(GREEN);
    cprintf("]");
    x = 1;
    gotoxy(33, 11);
    textcolor(GREEN);
    cprintf("[");
    for (x = 1; x <= 15; x++) {
        textcolor(GREEN);
        cprintf("=");
        delay(100);
    }
    clrscr();
    textcolor(RED);
    gotoxy(13, 20);
    cprintf("Press ^Alt & Enter^ hold together to MAXIMIZE/RESTORE DOWN");
    textcolor(GREEN + BLINK);
    gotoxy(35, 2);
    cprintf("SIMPLE CALCULATOR");
    gotoxy(38, 2);
    textcolor(BLUE);
    cprintf("\nMAIN MENU");
    gotoxy(35, 5);
    textcolor(YELLOW);
    cprintf("\n\n[+]=Addition");
    gotoxy(35, 5);
    cprintf("\n[-]=Subtraction");
    gotoxy(35, 7);
    cprintf("\n[x]=Multiplication");
    gotoxy(35, 8);
    cprintf("\n[/]=Division");
    gotoxy(35, 9);
    textcolor(CYAN);
    cprintf("\n[A]=About");
    textcolor(WHITE);
    gotoxy(60, 13);
    cprintf("]");
    gotoxy(35, 11);
    textcolor(GREEN);
    cprintf("[E]=Exit");
    gotoxy(30, 11);
    textcolor(WHITE);
    cprintf("\n\nPLEASE CHOOSE YOUR OPERATOR:[");
    scanf("%s", & choice);
    switch (choice) {
    case '+': {
        clrscr();
        gotoxy(35, 4);
        textcolor(YELLOW + BLINK);
        cprintf("Enter numbers now!!!");
        gotoxy(40, 5);
        printf("\n ");
        gotoxy(40, 6);
        scanf("%f", & a);
        gotoxy(38, 7);
        printf("+");
        gotoxy(40, 8);
        printf("\n ");
        gotoxy(40, 8);
        scanf("%f", & b);
        ans = a + b;
        gotoxy(38, 9);
        printf("-----------");
        gotoxy(40, 10);
        printf("%.2f", ans);
        printf("\n\nNOTE:If you choose =>N<= the application will exit!");
        gotoxy(30, 11);
        textcolor(RED);
        gotoxy(10, 12);
        cprintf("\n===> [1/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\nInvalid input\tTry again!");
        gotoxy(10, 13);
        textcolor(RED);
        cprintf("===> [2/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\n\nInvalid input");
        printf("\nI'm sorry this application is decided to exit ^press any key^");
        break;
    }
    case '-': {
        clrscr();
        gotoxy(35, 4);
        textcolor(YELLOW + BLINK);
        cprintf("Enter numbers now!!!");
        gotoxy(40, 5);
        printf("\n ");
        gotoxy(40, 6);
        scanf("%f", & a);
        gotoxy(38, 7);
        printf("-");
        gotoxy(40, 8);
        printf("\n ");
        gotoxy(40, 8);
        scanf("%f", & b);
        ans = a - b;
        gotoxy(38, 9);
        printf("-----------");
        gotoxy(40, 10);
        printf("%.2f", ans);
        printf("\n\nNOTE:If you choose =>N<= the application will exit!!");
        textcolor(RED);
        gotoxy(10, 11);
        cprintf("\n\n===> [1/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\nInvalid input\tTry again!");
        gotoxy(10, 12);
        textcolor(RED);
        cprintf("\n===> [2/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\n\nInvalid input");
        printf("\nI'm sorry this application is decided to exit ^press any key^");
        break;
    }
    case 'x':
    case 'X': {
        clrscr();
        textcolor(YELLOW + BLINK);
        gotoxy(35, 4);
        cprintf("Enter numbers now!!!");
        gotoxy(40, 5);
        printf("\n ");
        gotoxy(40, 6);
        scanf("%f", & a);
        gotoxy(38, 7);
        printf("x");
        gotoxy(40, 8);
        printf("\n ");
        gotoxy(40, 8);
        scanf("%f", & b);
        ans = a * b;
        gotoxy(39, 9);
        printf("----------");
        gotoxy(40, 10);
        printf("%.2f", ans);
        printf("\n\nNOTE:If you choose =>N<= the application will exit!");
        textcolor(RED);
        gotoxy(10, 11);
        cprintf("\n\n===> [1/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\nInvalid input\tTry again!");
        gotoxy(10, 12);
        textcolor(RED);
        cprintf("\n===> [2/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\n\nInvalid input");
        printf("\nI'm sorry this application is decided to exit ^press any key^");
        break;
    }
    case '/': {
        clrscr();
        gotoxy(35, 4);
        textcolor(YELLOW + BLINK);
        cprintf("Enter numbers now!!!");
        gotoxy(40, 5);
        printf("\n ");
        gotoxy(40, 6);
        scanf("%d", & z);
        gotoxy(38, 7);
        printf("/");
        gotoxy(40, 8);
        printf("\n ");
        gotoxy(40, 8);
        scanf("%d", & y);
        remain = z / y;
        gotoxy(39, 9);
        printf("-----------");
        gotoxy(40, 10);
        printf("%d", remain);
        remain = z % y;
        gotoxy(30, 10);
        textcolor(YELLOW);
        cprintf("\nREMAINDER:%d", remain);
        printf("\n\nNOTE:If you choose =>N<= the application will exit!");
        textcolor(RED);
        gotoxy(10, 11);
        cprintf("\n\n\n===> [1/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\nInvalid input\tTry again!");
        gotoxy(10, 12);
        textcolor(RED);
        cprintf("\n\n===> [2/2] Back to MAIN MENU? [Y/N]");
        c = getche();
        if ((c == 'Y') || (c == 'y')) {
            main();
        }
        if ((c == 'N') || (c == 'n')) {
            exit(0);
        } else
            printf("\n\nInvalid input");
        printf("\nI'm sorry this application is decided to exit ^press any key^");
        break;
        case 'E':
        case 'e': {
            {
                exit(0);
            }
            break;
        }
        case 'A':
        case 'a': {
            clrscr();
            textcolor(WHITE);
            gotoxy(3, 2);
            cprintf("I made this application year 2015 and I finished year 2016.");
            gotoxy(3, 2);
            cprintf("\nThe application is USER FRIENDLY it means EASY TO USE.");
            gotoxy(3, 5);
            cprintf("Compatibility mode");
            gotoxy(3, 6);
            cprintf("\nThis program will run to the following WINdOWS:");
            gotoxy(3, 7);
            cprintf("\nWindows 95");
            gotoxy(3, 8);
            cprintf("\nWindows 98");
            gotoxy(3, 9);
            cprintf("\nWindows XP");
            gotoxy(3, 10);
            cprintf("\nWindows Vista");
            gotoxy(3, 11);
            cprintf("\nWindows 7");
            gotoxy(3, 12);
            cprintf("\nWindows 8 But DosBox is needed and also with Windows 10");
            textcolor(BLUE);
            gotoxy(3, 15);
            cprintf("Programming Language:TURBO C");
            textcolor(GREEN);
            gotoxy(3, 16);
            cprintf("Programmer:KENT STRONG KEEP");
            gotoxy(26, 20);
            textcolor(YELLOW);
            cprintf("===> [1/3] Press H to return home");
            c = getche();
            if ((c == 'H') || (c == 'h')) {
                main();
            } else
                printf("\nINVALID INPUT\tTry again!");
            gotoxy(26, 20);
            textcolor(YELLOW);
            cprintf("===> [2/3] Press H to return home");
            c = getche();
            if ((c == 'H') || (c == 'h')) {
                main();
            } else
                printf("\n\nINVALID INPUT\tTry again!");
            textcolor(YELLOW);
            gotoxy(26, 20);
            cprintf("===> [3/3] Press H to return home");
            c = getche();
            if ((c == 'H') || (c == 'h')) {
                main();
            } else
                printf("\n\n\nINVALID INPUT");
            printf("\tI'm sorry this application is decided to exit ^press any key^");
            break;
        }
    }
    default:
        clrscr();
        gotoxy(30, 12);
        textcolor(RED);
        cprintf("The operator is not correct!");
        textcolor(GREEN);
        gotoxy(26, 15);
        cprintf("\n\n===> [1/2] Press H to return home");
        c = getche();
        if ((c == 'H') || (c == 'h')) {
            main();
        } else
            gotoxy(30, 17);
        textcolor(WHITE);
        cprintf("\nInvalid input     Try again!");
        gotoxy(26, 16);
        textcolor(GREEN);
        cprintf("\n===> [2/2] Press H to return home");
        c = getche();
        if ((c == 'H') || (c == 'h')) {
            main();
        } else
            gotoxy(30, 17);
        textcolor(WHITE);
        cprintf("\n\nInvalid input");
        printf("\n\nI'm sorry this application is decided to exit ^press any key^");
    }
    getch();
}