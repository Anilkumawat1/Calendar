/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int days(int, int);
    int blank(int, int);
    int s = 0;
    int d;
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    int n;
    printf("\n------------------------------------------");
    printf("\n  IF YOU WANT THE MONTH CALENDAR PRESS 1.");
    printf("\n-----------------------------------------");
    printf("\n\n------------------------------------------------");
    printf("\n   IF YOU WANT THE DAY OF THE GIVEN DATE PRESS 2.");
    printf("\n------------------------------------------------\n");
    printf("\n----------------------------");
    printf("\n  ENTER THE DESIRED VALUE:");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("\n\n***************");
        printf("\nFOR JANUARY PESS 1 AND ENTER \n");
        printf("FOR FEBRUARY PESS 2 AND ENTER \n");
        printf("FOR MARCH PESS 3 AND ENTER \n");
        printf("FOR APRIL PESS 4 AND ENTER \n");
        printf("FOR MAY PESS 5 AND ENTER \n");
        printf("FOR JUNE PESS 6 AND ENTER \n");
        printf("FOR JULY PESS 7 AND ENTER \n");
        printf("FOR AUGUST PESS 8 AND ENTER \n");
        printf("FOR SEPTEMBER PESS 9 AND ENTER \n");
        printf("FOR OCTOBER PESS 10 AND ENTER \n");
        printf("FOR NOVEMBER PESS 11 AND ENTER \n");
        printf("FOR DECEMBER PESS 12 AND ENTER ");
        printf("\n***************\n");

        int m;
        printf("\n----------------------------");
        printf("\n  ENTER THE DESIRED VALUE:");
        scanf("%d", &m);
        if (m > 12)
        {
            printf("\n----------------------------------");
            printf("\n  *ENTER THE PROPER VALUE*");
            printf("\n----------------------------------");
        }

        else
        {
            int y;

            printf("\n-----------------------");
            printf("\n  ENTER THE YEAR:");
            scanf("%d", &y);
            if (m == 1)
            {
                printf("\n\n             JANUARY  %d", y);
            }
            else if (m == 2)
            {
                printf("\n\n             FEBRUARY  %d", y);
            }
            else if (m == 3)
            {
                printf("\n\n             MARCH  %d", y);
            }
            else if (m == 4)
            {
                printf("\n\n             APRIL  %d", y);
            }
            else if (m == 5)
            {
                printf("\n\n             MAY  %d", y);
            }
            else if (m == 6)
            {
                printf("\n\n             JUNE  %d", y);
            }
            else if (m == 7)
            {
                printf("\n\n             JULY  %d", y);
            }
            else if (m == 8)
            {
                printf("\n\n             AUGUST  %d", y);
            }
            else if (m == 9)
            {
                printf("\n\n            SEPTEMBER  %d", y);
            }
            else if (m == 10)
            {
                printf("\n\n             OCTOBER  %d", y);
            }
            else if (m == 11)
            {
                printf("\n\n             NOVEMBER  %d", y);
            }
            else
            {
                printf("\n\n             DECEMBER  %d", y);
            }

            printf("\n -----------------------------------");
            printf("\n  SUN  MON  TUE  WED  THU  FRI  SAT");
            printf("\n -----------------------------------\n");
            d = days(m, y);
            int k;
            y -= m < 3;
            k = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + 1) % 7;

            for (int i = 1; i <= k; i++)
            {
                printf("     ");
                s++;
            }

            for (int i = 1; i <= d; i++)
            {
                printf("%5d", i);
                s++;
                if (s > 6)
                {
                    printf("\n");
                    s = 0;
                }
            }
            printf("\n -----------------------------------");
        }
    }
    else if (n == 2)

    {
        int da, mon, ye, monthcode, yearcode, daycode, a, b, c, d;
        printf("\n-------------------");
        printf("\n  ENTER THE DATE:");
        scanf("%d", &da);
        if (da > 31)
        {
            printf("\n----------------------------------");
            printf("\n  *ENTER THE PROPER VALUE*");
            printf("\n----------------------------------");
        }
        printf("\n--------------------");
        printf("\n  ENTER THE MONTH:");
        scanf("%d", &mon);
        printf("\n--------------------");
        printf("\n  ENTER THE YEAR:");
        scanf("%d", &ye);
        printf("\n--------------------------------");
        printf("\n  GIVEN DATA IS: %d / %d / %d.", da, mon, ye);
        printf("\n--------------------------------");
        if (da > 31)
        {
            printf("\n----------------------------------");
            printf("\n  *ENTER THE PROPER VALUE*");
            printf("\n----------------------------------");
        }
        else
        {

            switch (mon)
            {

            case 1:
                if (((ye % 4 == 0) && (ye % 100 != 0)) || (ye % 400 == 0))
                    monthcode = 0;
                else
                    monthcode = 1;
                break;

            case 2:
                if (((ye % 4 == 0) && (ye % 100 != 0)) || (ye % 400 == 0))
                    monthcode = 3;
                else
                    monthcode = 4;
                break;

            case 3:
                monthcode = 4;
                break;

            case 4:
                monthcode = 0;
                break;

            case 5:
                monthcode = 2;
                break;

            case 6:
                monthcode = 5;
                break;

            case 7:
                monthcode = 0;
                break;

            case 8:
                monthcode = 3;
                break;

            case 9:
                monthcode = 6;
                break;

            case 10:
                monthcode = 1;
                break;

            case 11:
                monthcode = 4;
                break;

            case 12:
                monthcode = 6;
                break;

            default:
                printf("Enter correct value");
            }

            a = ye / 100;
            a = a * 100;
            if (a % 400 == 0)
                yearcode = 6;
            if (a % 400 == 100)
                yearcode = 4;
            if (a % 400 == 200)
                yearcode = 2;
            if (a % 400 == 300)
                yearcode = 0;

            b = ye % 100;
            c = b / 4;
            d = (da + b + monthcode + yearcode + c);
            daycode = d % 7;

            switch (daycode)
            {
            case 0:
                printf("\n\n****");
                printf("\nSATURDAY");
                printf("\n****");
                break;

            case 1:
                printf("\n\n****");
                printf("\nSUNDAY");
                printf("\n****");
                break;

            case 2:
                printf("\n\n****");
                printf("\nMONDAY");
                printf("\n****");
                break;

            case 3:
                printf("\n\n****");
                printf("\nTUESDAY");
                printf("\n****");
                break;

            case 4:
                printf("\n\n****");
                printf("\nWEDNESDAY");
                printf("\n****");
                break;

            case 5:
                printf("\n\n****");
                printf("\nTHURSDAY");
                printf("\n****");
                break;

            case 6:
                printf("\n\n****");
                printf("\nFRIDAY");
                printf("\n****");
                break;
            }
        }
    }
    else
    {
        printf("\n----------------------------------");
        printf("\n  *ENTER THE PROPER VALUE*");
        printf("\n----------------------------------");
    }

   
    return 0;
}

int days(int md, int y)
{
    if (md == 1)
    {
        return 31;
    }
    else if (md == 2)
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            return (29);
        else
            return (28);
    }
    else if (md == 3)
    {
        return 31;
    }
    else if (md == 4)
    {
        return 30;
    }
    else if (md == 5)
    {
        return 31;
    }
    else if (md == 6)
    {
        return 30;
    }
    else if (md == 7)
    {
        return 31;
    }
    else if (md == 8)
    {
        return 31;
    }
    else if (md == 9)
    {
        return 30;
    }
    else if (md == 10)
    {
        return 31;
    }
    else if (md == 11)
    {
        return 30;
    }
    else if (md == 12)
    {
        return 31;
    }
}
