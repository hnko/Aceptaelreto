#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, num, count;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &num);
		count = 0;

		while(num/5!=0){
			if (num%5==4) count++;
			num /= 5;
		}
		if(num==4) count++;
		
	printf((count<2)?"NO\n": "SI\n");
	}
	return 0;
}


