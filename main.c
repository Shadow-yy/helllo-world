#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Number:200210417\nName:��ӰӰ\nSubject No.3-program: No.3\n\n\n\n");

    printf("����ǰ�������\n\n");

    int square;
    double number=1;
    double sum=1;
    double V;
    for(square=2;square<=64;square++)
    {
        number=number*2;
        sum=sum+number;
    }
    V=sum/1.42e8;
    printf("V=%e,sum=%e\n\n",V,sum);


    sum=number=1;  /*���¸�sum��number��ֵΪ1*/
    printf("ֱ�Ӽ����ۼӵ�ͬ��:\n\n");
    for(square=2;square<=64;square++)
    {
        number=pow(2,square-1);
        sum=sum+number;
    }
    V=sum/1.42e8;
    printf("V=%e,sum=%e",V,sum);

}
