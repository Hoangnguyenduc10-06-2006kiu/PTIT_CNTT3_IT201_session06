#include <stdio.h>
void towerhn(int plate, char from, char to,char temp )
{
    //dieu kien dung
    if (plate == 1)
    {
        printf("dia 1 di chuyen tu %c sang %c\n",from,to);
        return;
    }
    //b1 chuyen n-1 dia tu form sang twmp
    towerhn(plate-1,from,temp,to);

    //b2 chuyen dia thu n tu form sang to
    printf("dia %d di chuen tu %c sang %c\n",plate,from,to);
    //b3 chuyen n-1 dai tu temp sang to
    towerhn(plate-1,temp,to,from);

}
int main(void)
{
    int plate;
    printf("nhap vao so dia");
    scanf("%d",&plate);
    towerhn(plate, 'a', 'b', 'c');
    return 0;
}