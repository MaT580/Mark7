#include <stdio.h>

int main()
    {
        
            int a;
            int b;
            int sex;
            /*���帱�Ա���*/
            float maleheight=0.0;
            float femaleheight = 0.0;
            /*�������������ʼ��*/
            double mst;
            double fst;
            /*���常ĸ�������*/
            printf("���Ƿ���ѵ�����϶�����1��������0��\n");
            scanf_s("%d", &a);

            printf("���Ƿ��н�������ʳϰ�ߣ��϶�����1��������0��\n");
            scanf_s("%d", &b);

            printf("�������Ի���Ů������������1��Ů������0��\n");
            scanf_s("%d", &sex);

            printf("�����븸�׵����,��λΪcm��");
            scanf_s(" %lf",&fst);

            printf("������ĸ�׵����,��λΪcm��");
            scanf_s("%lf",&mst);
            /*����ѯ��*/

            /*�����Ա����Ӧϰ�߽����жϲ����*/
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
                    printf("�������");
                }
                printf("�������ǣ�%f��,��λΪcm", maleheight);
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
                    printf("�������");
                }
               
                printf("�������ǣ�%f,��λΪcm",femaleheight);
                return  femaleheight;
               
            }
        }
    