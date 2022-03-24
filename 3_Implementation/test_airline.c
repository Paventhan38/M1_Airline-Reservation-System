#include "unity.h"
#define PROJECT_NAME "Airline-Reservation-System"

extern void test_airline();

void setUp(void)
{}
void tearDown(void)
{}

int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(test_airline);
    return(UnityEnd());

}