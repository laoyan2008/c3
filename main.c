#include<stdio.h>
#include<math.h>

struct Point
{
    int x;
    int y;
};
int main()
{
    int index=0;
    struct Point arr[100];
    printf("欢迎进入车辆位置管理系统\n");

    while(1)
    {
         printf("1---添加车辆位置\n");
        printf("2---删除车辆位置\n");
        printf("3---显示全部车辆位置\n");
        printf("4---返回离我位置最近的车辆\n");
        printf("5---退出\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);
        if(code==1)
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
        if(code==2)
        {
            if(index>0)
            {
                index--;
                printf("删除成功\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }   
            else
            {
                printf("当前无车辆位置信息\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if(code==3)
        {
            s
            
        }
        if(code==4)
        {
            
        }
        if(code==5)
        {
            
        }
    }
    return 0;
}