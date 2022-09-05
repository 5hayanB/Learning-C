#include <stdio.h>

#define t8AM     (8 * 60)
#define t9_43AM  ((9 * 60) + 43)
#define t11_19AM ((11 * 60) + 19)
#define t12_47PM ((12 * 60) + 47)
#define t2PM     ((2 + 12) * 60)
#define t3_45PM  (((3 + 12) * 60) + 45)
#define t7PM     ((7 + 12) * 60)
#define t9_45PM  (((9 + 12) * 60) + 45)

int main(void)
{
    int hr,          min,         inputTime,   diff1,       diff2,
        diff3,       diff4,       diff5,       diff6,       diff7,
        diff8,       cTime1,      cTime2,      cTime3,      cTime4,
        cTime5,      cTime6,      cTime,       departTime1, departTime2,
        departTime3, departTime4, departTime5, departTime6, departTime;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    inputTime = (hr * 60) + min;
    diff1 = ((inputTime - t8AM) >= 0)     ? inputTime - t8AM    : t8AM - inputTime;
    diff2 = ((inputTime - t9_43AM) >= 0)  ? inputTime - t9_43AM : t9_43AM - inputTime;
    diff3 = ((inputTime - t11_19AM) >= 0) ? inputTime - t11_19AM: t11_19AM - inputTime;
    diff4 = ((inputTime - t12_47PM) >= 0) ? inputTime - t12_47PM: t12_47PM - inputTime;
    diff5 = ((inputTime - t2PM) >= 0)     ? inputTime - t2PM    : t2PM - inputTime;
    diff6 = ((inputTime - t3_45PM) >= 0)  ? inputTime - t3_45PM : t3_45PM - inputTime;
    diff7 = ((inputTime - t7PM >= 0))     ? inputTime - t7PM    : t7PM - inputTime;
    diff8 = ((inputTime - t9_45PM) >= 0)  ? inputTime - t9_45PM : t9_45PM - inputTime;

    printf("Closest departure time is ");

    if (diff1 <= diff2)
    {
        cTime1 = diff1;
        departTime1 = t8AM;
    }
    else
    {
        cTime1 = diff2;
        departTime1 = t9_43AM;
    }
    if (diff3 <= diff4)
    {
        cTime2 = diff3;
        departTime2 = t11_19AM;
    }
    else
    {
        cTime2 = diff4;
        departTime2 = t12_47PM;
    }
    if (diff5 <= diff6)
    {
        cTime3 = diff5;
        departTime3 = t2PM;
    }
    else
    {
        cTime3 = diff6;
        departTime3 = t3_45PM;
    }
    if (diff7 <= diff8)
    {
        cTime4 = diff7;
        departTime4 = t7PM;
    }
    else
    {
        cTime4 = diff8;
        departTime4 = t9_45PM;
    }
    if (cTime1 <= cTime2)
    {
        cTime5 = cTime1;
        departTime5 = departTime1;
    }
    else
    {
        cTime5 = cTime2;
        departTime5 = departTime2;
    }
    if (cTime3 <= cTime4)
    {
        cTime6 = cTime3;
        departTime6 = departTime3;
    }
    else
    {
        cTime6 = cTime4;
        departTime6 = departTime4;
    }
    if (cTime5 <= cTime6)
    {
        cTime = cTime5;
        departTime = departTime5;
    }
    else
    {
        cTime = cTime6;
        departTime = departTime6;
    }

    switch (departTime)
    {
        case t8AM:     printf("8:00 p.m., arriving at 10:16 a.m.\n");
                       break;
        case t9_43AM:  printf("9:43 a.m., arriving at 11:52 a.m.\n");
                       break;
        case t11_19AM: printf("11:19 a.m., arriving at 1:31 p.m.\n");
                       break;
        case t12_47PM: printf("12:47 p.m., arriving at 3:00 p.m.\n");
                       break;
        case t2PM:     printf("2:00 p.m., arriving at 4:08 p.m.\n");
                       break;
        case t3_45PM:  printf("3:45 p.m., arriving at 5:55 p.m.\n");
                       break;
        case t7PM:     printf("7:00 p.m., arriving at 9:20 p.m.\n");
                       break;
        case t9_45PM:  printf("9:45 p.m., arriving at 11:58 p.m.\n");
                       break;
    }

    return 0;
}
