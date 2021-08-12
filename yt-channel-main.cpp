#include <iostream>
#include "YTChannel.h";

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

	YTChannel ytc1;
	YTChannel ytc2("Kristine Sav", "Kristina", 100, "State of Emergency: The Movie");
	ytc1.subscribe();
	ytc1.printInfo();
	cout << endl;
	ytc2.subscribe();
	ytc2.unsubscribe();
	ytc2.printInfo();
	return 0;
}