#include "stats.h"
#include "alerter.h"

int emailAlertCallCount;
int ledAlertCallCount;

int emailAlertFunctionCall;
int ledAlerterFunctionCall;

void check_and_alert(float maxThreshold , alerter_funcptr alerters[], struct Stats computedStats)
{
	if(computedStats.max > maxThreshold)
	{
		(*alerters[0])();
		(*alerters[1])();
		
		emailAlertFunctionCall++;
		ledAlerterFunctionCall++
	}
}

void emailAlerter()
{
	emailAlertCallCount++;
}

void ledAlerter()
{
	ledAlertCallCount++;
}
