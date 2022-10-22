/* Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/
int main()
{
    int i,j;
    char sort[10][20],t[30];
    for(i=0;i<10;i++)
    {
        sort[i];
    }
    for(i=0;i<9;i++)
    {
        for(j+i;j<10;j++)
        {
            if(strcmp(sort[i],sort[j]>0))
            {
                strcpy(t,sort[i]);
                strcpy(sort[i],sort[j]);
                strcpy(sort[j],t);
            }
        }
     
    }
    for(i=0;i<10;i++)
    printf("%s\n",sort[i]);
    return 0;


}