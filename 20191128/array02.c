#include<stdio.h>
#define STUDENTS 10

int main()
{
	int score[STUDENTS], i, sum = 0;
	float avg;
	
	for(i=0; i<STUDENTS; i++)
	{
		printf("%d���� �л� ���� �Է�:",i+1);
		scanf("%d",&score[i]);
		sum += score[i];
	}
	for(i=0;i<STUDENTS;i++)
		printf("%d�� �л��� ���� = %d\n",i+1,score[i]);
		
	printf("\n��ü �л��� ������ �� = %d\n",sum);
	
	avg = (float)sum/STUDENTS;
	
	printf("\n��ü �л��� ������ ��� = %.2f\n",avg);	// .2=�Ҽ������ϴ� ��°������ ��� 
	return 0;	 
}

//score[5]�� �迭�� ������ ��� score[0~4]������ ������. score[5]�� �������� ����. 
