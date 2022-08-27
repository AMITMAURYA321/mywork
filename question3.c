/* Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
int main()
{
    int day;
    printf("enter a number of day week\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf(" today is monday\nGod promises never fail ==> Joshua 21:45 Not one of all the Lord good promises to Israel failed; every one was fulfilled.");
        break;
        case 2:
        printf(" today is tuesday\nGod is always good. ==> Psalm 119:68 “You are good and do good. Teach me your statues.");
        break;
        case 3:
        printf(" today is wednesday\nGod is always with me ==> Joshua 1:9 “This is my command-be strong and courageous! Do not be afraid or discouraged. For the Lord your God is with you wherever you go.”");
        break;
        case 4:
        printf(" today is thursday\nGod is faithful ==> Hebrews 10:23 “Let us hold unswervingly to the hope we profess, for he who promised is faithful.”");
        break;
        case 5:
        printf(" today is friday\nGod is kind and compassionate ==> Isaiah 54:10 “Though the mountains be shaken and the hills be removed, yet my unfailing love {kindness} for you will not be shaken nor my covenant of peace be removed, says the Lord, who has compassion on you.”");
        break;
        case 6:
        printf(" today is saturday\nGod designed me for a purpose. ==> Ephesians 2:10 “For we are God’s handiwork, created in Christ Jesus to do good works, which God prepared in advance for us to do.”");
        break;
        case 7:
        printf(" today is sunday\nGod will strengthen and help me ==> Isaiah 41:10 “So do not fear, for I am with you, do not be dismayed, for I am your God. I will strengthen you and help you; I will uphold you with my righteous right hand.”");
        break;
        default:
        printf("invalid number");
    }
    return 0;
}