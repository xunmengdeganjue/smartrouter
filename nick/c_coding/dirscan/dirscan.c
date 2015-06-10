#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>



void printdir(char *dir,int depth)
{
	DIR *dp;
	struct dirent *entry;
	struct stat statbuf;
	
	if((dp = opendir(dir)) == NULL )
	{
			fprintf(stderr,"cant open directory: %s\n",dir);
			return ;
	}
	chdir(dir);
	while((entry = readdir(dp))!=NULL)
	{
		lstat(entry->d_name,&statbuf);
		if(S_ISDIR(statbuf.st_mode))
		{
			/*found a directory,but ignore . and ..*/
			if(strcmp(".",entry->d_name) == 0 || strcmp("..",entry->d_name) == 0|| depth > 3)
			{
				continue;
			}
			printf("%*s%s/\n",depth,"",entry->d_name);
			/*Recurse at a new indent level*/
			printdir(entry->d_name,depth+3);
			
		}
		else printf("%*s%s\n",depth,"",entry->d_name);
	}
	chdir("..");
	closedir(dp);
}
int main()
{
	printf("Directory scan of /home/nickli/dirtest:\n");
	printdir("/home/nickli/dirtest",0);
	printf("done.\n");
	
	exit(0);	
}