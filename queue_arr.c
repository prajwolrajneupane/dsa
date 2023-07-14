#include <stdio.h>
#include <conio.h>
int queue[5], f = -1, r = -1;
void rear()
{
    int item;
    if (r == 5 - 1)
    {
        printf("Queue is full");
    }
    else
    {
        if (f == -1)
        {
            f = 0;
        }
        printf("Insert element in queue:");
        scanf("%d", &item);
        r = r + 1;
        queue[r] = item;
    }
};
void front()
{
    if (f == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Deleted %d", queue[f]);
        f = f + 1;
    }
};
void show()

{
    int i;
    if (f == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("queue elements:");
        for (int i = f; i < r; i++)
        {
            printf("%d", queue[i]);
        }
    }
};
void main()
{
    int n;
    printf("1:rear");
    printf("2:front");
    printf("3:show");
    printf("4:exit");

    printf("Enter choice:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        rear();

        break;
    case 2:
        front();

        break;
    case 3:
        show();

        break;
    case 4:
        break;

    default:
        printf("invalid!");
        break;
    }
}