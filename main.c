#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[N_STUDENT];
	int i, avg, sum = 0;

	 printf("input %d grades : ", N_STUDENT);
	 
	 for(i=0;i<N_STUDENT;i++){

	 scanf("%d", &grade[i]);
	 sum+=grade[i];
	}
	
	avg = sum / N_STUDENT;
	printf("average : %d \n", avg);
	system("PAUSE");
	return 0;
}
