#include <stdio.h>
void swap(int *a, int *b){
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int tabla[100000];
int main(int argc, char const *argv[])
{
	while(1){
		int i=0, num, count=0, a, b, j, aux, flag=0;
		scanf("%d", &a);
		if(a==-1) flag=1;
		tabla[i]=a;
		i++;
		count++;
		while(flag!=1){
			scanf("%d", &a);
			if(a==-1)break;
			tabla[i]=a;
			i++;
			count++;
		}
		scanf("%d", &num);
		if(flag==1 && num==0) return 0;
		while(num--){
			scanf("%d", &b);
			aux=count-b;
			//printf("aux=%d\n", aux);
			//printf("count-1=%d\n", count-1);
			for(i=aux, j=count-1; i<j && j>i; i++, j--){
				//printf("%d %d\n", tabla[i], tabla[j]);
				swap(&tabla[i], &tabla[j]);
			}
		}
		printf("%d\n", tabla[count-1]);
	}
	return 0;
}