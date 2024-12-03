# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int number, ch, comp, user, c_scr=0, u_scr=0, i, r;

    printf("1.rock\t  2.scissors\t3.paper\n");

    for (i=0; i<4; i++)
    {
        printf("\ninput ch b/w 1, 3\n");
        scanf("%d", &ch);
        user=ch;
        if (user>3 || user<1)
        {
            printf("\nERROR: input valid choice\n");
            return 1;
        }
        else
        {
            srand(time(0));
            number=rand()%3+1;
            comp=number;
            if (comp==1 && user==2) c_scr++;
            else if (comp==2 && user==1) u_scr++;
            else if (comp==3 && user==2) u_scr++;
            else if (comp==2 && user==3) c_scr++;
            else if (comp==1 && user==3) u_scr++;
            else if (comp==3 && user==1) c_scr++;
        }
    }
    if (u_scr>c_scr)
    {
        printf("\nUSER Wins!!\n");
        return 1;
    }
    else if (c_scr>u_scr)
    {
        printf("\nCOMP Wins!!\n");
        return 1;
    }
    else
    {
        printf("\nOops! there's a TIE..\n\n");
        r=0;
    }
    while (r!=1)
    {
        for (i=0; i<4; i++)
        {
            printf("\ninput ch b/w 1, 3\n");
            scanf("%d", &ch);
            if (user>3 || user<1)
            {
                printf("\nERROR: input valid choice\n");
                return 1;
            }
            else
            {
                srand(time(0));
                number=rand()%3+1;
                comp=number;
                if (comp==1 && user==2) c_scr++;
                else if (comp==2 && user==1) u_scr++;
                else if (comp==3 && user==2) u_scr++;
                else if (comp==2 && user==3) c_scr++;
                else if (comp==1 && user==3) u_scr++;
                else if (comp==3 && user==1) c_scr++;
            }
        }
        if (u_scr>c_scr || c_scr>u_scr) r++;
        else
        {
            printf("\nOops! there's again a TIE..\n\n");
            r=0;
        }
    }
    if (u_scr>c_scr) printf("\nUSER Wins!!\n");
    else printf("\nCOMP Wins!!\n");
    return 0;
}
