#include <stdio.h>
int index=0;
char arr[1024];
int main()
{

    int code;

    printf("guanlimingancixitong\n");
    while (1)
    {
        printf("1--tianjiaminganzifu\n");
        printf("2--shanchuminganzifu\n");
        printf("3--chakansuoyouminganzifu\n");
        printf("4--tihuanminganzifu\n");
        printf("5--tuichuchengxu\n");

        printf("xuanzexiangyingdegongnengbianhao\n");
        scanf("%d", &code);

        if (code == 1)
        {
            char a;
            printf("qingshuruniyaotianjiademinganzifu\n");
            scanf("%c", &a);
            scanf("%c", &a);

            arr[index] = a;
            index++;

            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            char x;
            printf("shanchu\n");
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("shanchushibai,dianjihichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            printf("suoyouminganzifuruxia\n");
            for (int i = 0; i < index; i++)
            {
                printf("di%dgeminganzifuwei,%c\n", i + 1, arr[i]);
            }
            printf("xianshichenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("tuichuchengxu");
            break;
        }
    }
}