#include <stdio.h>
#include <math.h>
struct Point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct Point arr[100];
    printf("欢迎进入车辆位置管理系统!\n");

    while (1)
    {
        printf("1---添加车辆位置\n");
        printf("2---删除车辆位置\n");
        printf("3---显示全部车辆位置\n");
        printf("4---返回离我位置最近的车辆\n");
        printf("5---退出\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入车辆位置的x坐标与y坐标：\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("添加完成，点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 2)
        {
            if (index > 0)
            {
                index--;
                printf("删除完成，点击回车继续\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("无车辆位置信息，删除失败，点击回车继续\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (code == 3)
        {
            printf("所有车辆位置如下：\n");

            for (int i = 0; i < index; i++)
            {
                printf("第%d个车辆的位置为(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("\n点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 4)
        {
            printf("请输入当前位置坐标：\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            double min = 100000;
            int carID = 0;
            for(int i=0;i<index;i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx*dx+dy*dy);
                if(min > l)
                {
                    min = l;
                    carID = i;
                }
            }
            printf("用户当前位置与第%d个车的距离为%lf，是最小距离\n",carID+1,min);
            printf("\n点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 5)
        {
            printf("应用已经退出\n");
            break;
        }
    }
    return 0;
}
