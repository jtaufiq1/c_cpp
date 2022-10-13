#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
	// Get userID
	int userid, e_userid;
	userid = getuid();
	e_userid = geteuid();

	printf("[UserID] %d\n", userid);
	printf("[Effective UserID] %d\n", e_userid);

	// Write to file
	// int fd, open_mode, file_perm;

	// open_mode = O_WRONLY|O_CREAT|O_TRUNC;
	// file_perm = S_IRUSR|S_IWUSR|S_IRGRP;
	// fd = open(file_name, open_mode, file_perm);
	
	char *file_name = "uid_test";
	FILE *fp = fopen(file_name, "w");
	if(!fp)
		printf("[!!] Failed to write to file\n"); 
	else {
		putwc(userid, fp);
		putwc('\n', fp);
		putwc(e_userid, fp);
		// Write UserID & Effective UserID to file
		// fwrite(&userid, 4, 5, fp);
		// fwrite(&e_userid, 4, 5, fp);
		// fwrite(0, 1, 1, fp);
		
		// Close file descriptor
		fclose(fp);
	}
	exit(0);
}
