#include <unistd.h>

int isLower(int c){
	return c >= 'a' && c <= 'z';
}

int isUpper(int c){
	return c >= 'A' && c <= 'Z';
}

int isLetter(int c){
	return isLower(c) || isUpper(c);
}

int main(int ac, char **av){

	int i,j;
	i = 1;
	if(ac == 1){
		write(1, "\n", 1);
	}
	while(i < ac){
		j = 0;
		while(av[i][j] != '\0'){
			if((j == 0 && isLower(av[i][j]))
			|| (av[i][j-1] == ' ' && isLower(av[i][j]))){
				av[i][j] -= ' ';
			}else if(av[i][j-1] != ' ' &&  isUpper(av[i][j])){
				av[i][j] += ' ';
			}
			write(1, &av[i][j], 1);	
			j++;
		}
		write(1, "\n", 1);
		i++;
	}	
	return (0);

}
