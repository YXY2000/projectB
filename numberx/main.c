#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int x=0;
    long int x2=0;
    long int score=0;
    long int n=0;
    int m=0;
    int m1=0;
    int m2=0;
    int m3=0;
    int m4=0;
    int m5=0;
    int m6=0;
    printf("     ����һ������ϲ���ġ�����(��λ�����ڣ�\n\n");
    printf("����Ϸ˵�������Խ��˺����ֽ�����������ͣ��ٴηֽ���������\n");
    printf("  ֱ����С��10���Ϊ����ʱֹͣ���˺ͼ�Ϊ���յ÷�)\n\n");
    printf("���������");
    scanf("%d",&x);
    while(x>=10)
    {
        if(x%1!=0)
        {
            score=-1;
            printf("\nscore:-1\n");
            return 0;
        }
        else{

            while(m6==0)
            {
                    while(m==0)
                    {
                        if(x%(n+2)==0)
                        {
                            m=n+2;
                        }
                        else{
                            n++;
                        }
                        if(n>100000)
                        {
                            x=m1+m2+m3+m4+m5+m6+x2;
                            printf("\nscore:%d\n",x);
                            return 0;
                        }
                    }
                x=x/m;
                if(m1==0)m1=m;
                else if(m2==0)m2=m;
                else if(m3==0)m3=m;
                else if(m4==0)m4=m;
                else if(m5==0)m5=m;
                else if(m6==0)m6=m;
                printf("%d   ",m);
                m=0;
            }
            x=m1+m2+m3+m4+m5+m6+x2;
            x2=x;
            m1=0;
            m2=0;
            m3=0;
            m4=0;
            m5=0;
            m6=0;
        }
    }
    score=x;
    printf("\n%d\n",score);
    return 0;
}
