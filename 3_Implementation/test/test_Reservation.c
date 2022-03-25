#include<unity.h>
#include<Reservation.h>
#define PROJECT_NAME "Airline Reservation System"

void test_reserve();
void test_cancel();
void test_display();

void setUp(){}

void tearDown(){}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_reserve);
    RUN_TEST(test_cancel);
    RUN_TEST(test_display);

    return UNITY_END;
    
}
