#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <sys/ioctl.h>

int main(int argc,char** argv)
{
	struct winsize argp;
	if(ioctl(0,TIOCGWINSZ,&argp)==0)
	{
		printf("Terminal lenght is %d\n",argp.ws_row);
		printf("Terminal width is %d", argp.ws_col);
	}
	else
	{
		printf("Error using ioctl\n");
		return EXIT_FAILURE;	
	}
	return EXIT_SUCCESS;
}
