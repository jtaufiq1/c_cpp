#include <stdio.h>
#include <unistd.h>

int main()
{
	int count = 502, uid, _uid, _gid;

	_uid = getuid();
	_gid = getgid();

	while(count != _uid){
		printf("%d: UID: %d - GID: %d\n", count, _uid, _gid);
		count += 100;
	}
	return 0;
}
