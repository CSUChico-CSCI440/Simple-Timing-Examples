#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    struct timespec start, end;
    /*
    CLOCK_REALTIME : clock that measures real i.e., wall-clock) time.
    CLOCK_PROCESS_CPUTIME_ID : High-resolution per-process timer from the CPU.
    CLOCK_MONOTONIC : High resolution timer that is unaffected by system date changes (e.g. NTP daemons).
    */
    sleep(10);
    clock_gettime(CLOCK_MONOTONIC, &start);
    sleep(10);//threads do work
    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e9;
    time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;
    printf("Time taken %.6f seconds\n", time_taken);
}