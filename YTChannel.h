#pragma once
#include <iostream>
using std::string; 

class YTChannel {
public:
	YTChannel();
	YTChannel(string _name, string _ownerName, int _subsCount, string _publishedVideo);
	int getSubsCount();
	void subscribe();
	void unsubscribe();
	void printInfo();

private:
	string name;
	string ownerName;
	int subsCount;
	string publishedVideo;
};

