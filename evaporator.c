#include <stdio.h>
#include <stdlib.h>

int evaporator(double content, double evap_per_day, double threshold) {
    int days = 0;
    threshold /= 100;
    threshold = content*threshold;
    evap_per_day /= 100;
    while (content > threshold) {
        content = content - (content*evap_per_day);
        days++; 
    }
    
    return days;
}

int main() {
    double content, evap_per_day, threshold;
    content = 50;
    evap_per_day = 12;
    threshold = 1;
    evaporator(content, evap_per_day, threshold);
    return 0;
}
