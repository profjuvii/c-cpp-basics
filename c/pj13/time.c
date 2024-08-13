#include <stdio.h>
#include <time.h>   // for working with time 
#include <unistd.h> // sleep() to stop the program


int main(){
    // difftime
    time_t time1, time2;
    time(&time1);   // getting the current time
    sleep(1);       // pause for 1 second
    time(&time2);
    double difference_seconds = difftime(time2, time1);
    printf("Difference in seconds between time1 and time2: %f seconds.\n", difference_seconds);

    // clock
    clock_t start_time, end_time;
    start_time = clock();
    for(int i = 0; i < 10000000; ++i); // simulating a time-consuming operation
    end_time = clock();
    double cpu_time_used = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("CPU time used for the operation: %.2f seconds.\n", cpu_time_used);

    // from 1 january 1970 year to the specified date and time
    struct tm timeinfo;
    timeinfo.tm_year = 121;     // 2021 - 1900
    timeinfo.tm_mon = 0;        // january
    timeinfo.tm_mday = 15;      // 15th

    time_t converted_time = mktime(&timeinfo);
    printf("Converted time:\t\t%ld seconds since epoch.\n", converted_time);

    // time to string
    timeinfo.tm_year = 121;     // 2021 - 1900
    timeinfo.tm_mon = 0;        // january
    timeinfo.tm_mday = 15;      // 15th
    timeinfo.tm_hour = 12;      // 12 PM
    timeinfo.tm_min = 0;        // 0 minute
    timeinfo.tm_sec = 0;        // 0 second

    char *time_string = asctime(&timeinfo);
    printf("Time as string:\t\t%s", time_string);

    // seconds to time (UTC time zone)
    time_t rawtime = time(NULL);
    struct tm *utc_time = gmtime(&rawtime);
    printf("UTC time:\t\t%s", asctime(utc_time));

    // time to seconds (UTC time zone)
    struct tm time_utc;
    time_utc.tm_year = 121;     // 2021 - 1900
    time_utc.tm_mon = 0;        // january
    time_utc.tm_mday = 15;      // 15th
    time_utc.tm_hour = 12;      // 12 PM
    time_utc.tm_min = 0;        // 0 minute
    time_utc.tm_sec = 0;        // 0 second

    time_t time_utc_value = timegm(&time_utc);
    printf("Time value in seconds since epoch for UTC time: %ld.\n", time_utc_value);

    return 0;
}
