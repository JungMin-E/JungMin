#include <stdio.h>

//2진수를 10진수로 바꾸기

int main()
{
	int decimal = 0;
	int binary[4] = {1, 1, 0, 1};
	int pos = 0;

	for(int i =(sizeof(binary) / sizeof(int)) - 1; i >=0; i--)
	{
		if(binary[i] == 1)
			decimal += 1 << pos; //decimal = decimal + 1 << po
		
		pos++;
	}
	printf("number: %d\n", decimal);
  printf("안녕하세요"\n);
	printf("안녕히가세요"\n);
	return 0;
}
