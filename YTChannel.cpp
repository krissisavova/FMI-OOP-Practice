#include "YTChannel.h"
#include <iostream>
using std::cout;
using std::string;

YTChannel::YTChannel() {
	this->name = "Untitled";
	this->ownerName = "JaneDoe";
	this->subsCount = 0;
	this->publishedVideo = "Default Video";
}

YTChannel::YTChannel(string _name, string _ownerName, int _subsCount, string _publishedVideo) {
	this->name = _name;
	this->ownerName = _ownerName;
	this->subsCount = _subsCount;
	this->publishedVideo = _publishedVideo;
}

int YTChannel::getSubsCount() {
	return subsCount;
}

void YTChannel::subscribe() {
	subsCount++;
}

void YTChannel::unsubscribe() {
	(subsCount > 0) ? subsCount-- : subsCount = 0;
}

void YTChannel::printInfo() {
	cout << "Name of channel: " << name << std::endl;
	cout << "Name of owner: " << ownerName << std::endl;
	cout << "Number of subscribers: " << subsCount << std::endl;
	cout << "Name of video: " << publishedVideo << std::endl;
}