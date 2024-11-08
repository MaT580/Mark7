#include <stdio.h>

int main()
    {
        
            int a;
            int b;
            int sex;
            /*定义副自变量*/
            float maleheight=0.0;
            float femaleheight = 0.0;
            /*定义变量，并初始化*/
            double mst;
            double fst;
            /*定义父母亲身高量*/
            printf("你是否坚持训练？肯定输入1，否定输入0：\n");
            scanf_s("%d", &a);

            printf("你是否有健康的饮食习惯？肯定输入1，否定输入0：\n");
            scanf_s("%d", &b);

            printf("你是男性还是女生，男性输入1，女性输入0：\n");
            scanf_s("%d", &sex);

            printf("请输入父亲的身高,单位为cm：");
            scanf_s(" %lf",&fst);

            printf("请输入母亲的身高,单位为cm：");
            scanf_s("%lf",&mst);
            /*进行询问*/

            /*根据性别与对应习惯进行判断并输出*/
            if (sex == 1)
            {
                double  maleheight = (fst+mst) * 0.54;
                if (a = 1)
                {
                    maleheight=maleheight*1.002;
                }
                else if (b = 1)
                {
                   maleheight=maleheight*1.0015;

                }
                else 
                {
                    printf("输入错误！");
                }
                printf("你的身高是：%f，,单位为cm", maleheight);
                return maleheight;
            }
            if (sex==0)
            {
                double  femaleheight = (fst*0.923 +mst)/2;
                if (a==1)
                {
                    femaleheight=femaleheight*1.002;
                }
                else if (b==1)
                {
                    femaleheight=femaleheight*1.0015;
                }
                else
                {
                    printf("输入错误！");
                }
               
                printf("你的身高是：%f,单位为cm",femaleheight);
                return  femaleheight;
               
            }
        }
    