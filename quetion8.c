/*Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 2 )*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,w1= -1,w2= -1,min=1000,temp;
    char word[4][20],word1[20],word2[20];
    printf("\nENTER STRING\n");
    for(i=0;i<4;i++)
    {
        gets(word[i]);
    }
    printf("ENTER WORD1");
    gets(word1);
    printf("ENTER WORD2");
    gets(word2);
    for(i=0;i<4;i++)
    {
        if(strcmp(word[i],word1)==0)
            w1=i;
        if(strcmp(word[i],word2)==0)
            w2=i;
        if(w1!=-1&&w2!=-1)
        {
            temp= abs (w2-w1);
            if(temp<min)
                min=temp;
        }
    }
     printf("%d",min-1);
        return 0;
}
