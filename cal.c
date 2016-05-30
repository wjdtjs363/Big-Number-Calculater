#include <stdio.h>
int main(void)
{
	unsigned year, month;
	int day=0, t_day=0, i=0;
	while(year!=-1){
		printf("년도를 입력하세요 : ");
		scanf("%u", &year);
		printf("월을 입력하세요 : ");
		scanf("%u", &month);
		printf("     %d 년 %d 월     \n", year, month);
		printf(" Sun Mon Tue Wen Thu Fri Sat\n");

		for(i=1;i<=(year-1);i++){
			if ((i%4==0)&&!(i%100==0)||(i%400==0))
				t_day+=366;
			else
				t_day+=365;
		}
	}
}
