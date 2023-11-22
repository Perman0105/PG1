#include "collect.h"

Collect::Collect()
{
    for(int i=0;i<42;i++)
    {
        pos[i]=i+1;
    }
}
void Collect :: draw()
{
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<29;j++)
        {
            if(i%2==0)
            {
                if(j%4==0)
                {
                    table[i][j]='|';
                }
                else
                {

                       table[i][j]="-";

                }
            }
            else
            {
                if(j%4==0)
                {
                    table[i][j]='|';
                }
                else
                {
                    table[i][j]=' ';
                }
            }
        }
    }
    int number=0;
    int check_number=2;
    int check_number_2=5;

    for(int i=0;i<13;i++)
    {
        for(int j=0;j<29;j++)
        {
            if(i%2!=0)
            {
                if(j==check_number)
                {
                    table[i][j]=to_string(pos[number]);
                    number++;
                    check_number=check_number+4;
                }
            }
        }
        check_number=2;
        check_number_2=1;
    }
}
void Collect :: print()
{
    int number_col=2;
    int number_row=3;
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<29;j++)
        {
            if(j==number_col&&i==number_row)
            {
                number_col=number_col+4;
                continue;
            }
            else
            {
                cout<<table[i][j];
            }
        }
        number_col=2;
        number_row=number_row+3;
        cout<<endl;
    }
}

