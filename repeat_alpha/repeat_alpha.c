#include <unistd.h>

int isLower(char c){
	return (c >= 'a' && c <= 'z');
}

int isUpper(char c){
	return (c >= 'A' && c <= 'Z');
}


int main(int args, char** argv)
{
	int i;
	int tmp;
	i = 0;

	if(args == 2){
		while(argv[1][i]){
			if(isLower(argv[1][i])){
				tmp = argv[1][i] - 'a';
				while(tmp >= 0){
					write(1, &argv[1][i], 1);
					tmp--;
				}
			}else if(isUpper(argv[1][i])){
				tmp = argv[1][i] - 'A';
                                while(tmp >= 0){
                                        write(1, &argv[1][i], 1);
					tmp--;
                                }
			}else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}	
	}
	write(1, "\n", 1);	
	return (0);
}
