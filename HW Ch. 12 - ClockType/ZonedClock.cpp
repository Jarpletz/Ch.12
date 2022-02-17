#include "ZonedClock.h"

ZonedClock::ZonedClock() {
	zoneIndex = 0;
	zoneName = "EST";
}
ZonedClock::ZonedClock(int h, int m, int s, int zone) {
	setTime(h, m, s);
	zoneIndex = zone;
}
void ZonedClock::setZone() {
	cout << "What Time Zone is "<< clockName<< " set to ? (American only - EST, CST, MST, PST, AST, or HST) : ";
	cin >> zoneName;
	
	for (int i = 0; i < static_cast<int>(zoneName.length());i++) {
		zoneName[i]=toupper(zoneName[i]);
	}

	if (zoneName == "EST") {
		zoneIndex = 0;
		return;
	}
	else if (zoneName == "CST") {
		zoneIndex = 1;
		return;
	}
	else if (zoneName == "CST") {
		zoneIndex = 2;
		return;
	}
	else if (zoneName == "PST") {
		zoneIndex = 3;
		return;
	}
	else if (zoneName == "AST") {
		zoneIndex = 4;
		return;
	}
	else if (zoneName == "HST") {
		zoneIndex = 4;
		return;
	}
	else {
		cout << "Invalid Time Zone!!!" << endl;
		setZone();
		return;
	}
}

void ZonedClock::printZone() const {
	cout << zoneName;
}

void ZonedClock::compareZones(ZonedClock otherClock) const {
	if (zoneIndex == otherClock.zoneIndex) {
		cout << "The two clocks are on the same time zone!";
	}
	else if (zoneIndex < otherClock.zoneIndex) {
		cout << clockName <<" ("<<zoneName<<") is " << otherClock.zoneIndex - zoneIndex << " hours ahead of " << otherClock.clockName << " (" << otherClock.zoneName << ")."<<endl;
		otherClock.incrementHours(otherClock.zoneIndex - zoneIndex);
		cout << "When Converted to " << clockName << "'s time zone, " << otherClock.clockName << " has a time of ";
	    otherClock.printTime();
		cout<< endl;
	}
	else {
		cout << clockName << " (" << zoneName << ") is " << zoneIndex - otherClock.zoneIndex << " hours behind " << otherClock.clockName << " (" << otherClock.zoneName << ")." << endl;
		otherClock.incrementHours(otherClock.zoneIndex - zoneIndex);
		cout << "When Converted to " << clockName << "'s time zone, " << otherClock.clockName << " has a time of ";
		otherClock.printTime();
		cout << endl;
	}
}