#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0.0;
    s.min = numberset[0];
    s.max = 0.0;
    
    float sum = 0.0;
    
    if ((setlength != 0) && (numberset !=0))
    {
        for (int i =0 ; i< setlength; i++)
        {
            if (s.max < numberset[i])
            {
                s.max = numberset[i];
            }
            if (s.min >= numberset[i])
            {
                s.min = numberset[i];
            }
            sum += number[i];
        }
        
        s.average = sum/(float)setlength;
        return s;
    }
    
    else
    {
        s.average = sum/(float)setlength;
        s.min += s.average;
        s.max += s.average;
    }
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
