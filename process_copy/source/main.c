#include <process_copy.h>

int main(int argc ,char ** argv)
{
	int pronum;
	if(argv[3]==0)
		pronum = 5;
	else
		pronum = atoi(argv[3]);
	check_pram(argc , argv[1], prinum );
	blocksize_cur = blocksize_cur(argv[1],pronum);
	process_create(argv[1] , argv[2] , pronum , blocksize);
	return 0;
}
