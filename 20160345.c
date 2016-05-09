#include<stdio.h>
int main()
{
	int n=1, d=1;//프레임, 처리
	int s=0, s2=0;//넘어진 핀의 수 저장용 변수 
	int sum=0;//총 점수
	int st=0, stt=0, stt2=0;//스트라이크 변수 
	int sp=0;// 스페어 변수
	while(n<=11)
	{
		printf("%d 번째 프레임 %d 번째 처리 핀 수 : ", n, d);
		scanf("%d", &s);
		sum+=s;
		if(sp==1)
		{
			sum+=s;
			sp=0;
		}
		if(stt==1)
		{
			sum+=s;
			stt--;
		}
		if(stt2==1)
		{
			sum+=s;
			stt2--;
		}
		if(s==10)
		{
			stt=st;
			st=1;
			if(n==10)
			{
				d++;
				stt2=0;
			}
			else
			{
				n++;
				stt2=st;
			}
			if(d==3)
				stt=stt2=0;
		}
		else
		{
			st--;
			if(s+s2==10)
			{
				sp=1;
			}
			if(d==2)
			{
				if(n==10)
				{
					d++;
				}
				else
				{
					d=1;
					n++;
				}
			}
			else
				d++;
		}
		s2=s;
		if(s!=10 && d==3)
			break;
		else if(d==4)
			break;
		printf("**** 현재까지  점수 : %d\n", sum);
	}
	printf("**** 최종 점수 : %d\n", sum);
	return 0;
}
