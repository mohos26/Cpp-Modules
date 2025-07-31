#include <iostream>
#include <string>
#include <ctime>


using namespace std;

int	main()
{
	time_t timestamp = time(&timestamp);
	struct tm datetime = *localtime(&timestamp);

	cout << ctime(&timestamp);
	cout << datetime.tm_sec << endl;
	cout << datetime.tm_min << endl;
	cout << datetime.tm_hour << endl;
	cout << datetime.tm_mday << endl;
	cout << datetime.tm_mon << endl;
}
