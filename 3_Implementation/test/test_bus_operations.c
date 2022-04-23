#include "unity.h"
#include "bus_operations.h"
#define PROJECT_NAME "BUS_RESERVATION_SYSTEM"
/* Protypes for all the test functions */
/**
 * @brief testing function for bus
 * 
 */
void test_bus();
/**
 * @brief testing function for book
 * 
 */
void test_book();
/**
 * @brief testing function for name
 * 
 */
void test_name_n0();
/**
 * @brief testing function for read n0
 * 
 */
int test_read_n0();
/**
 * @brief testing function for read name
 * 
 */
void test_read_name();
/**
 * @brief testing function for status
 * 
 */
void test_status();/**
 * @brief testing function for status 1
 * 
 */
void test_status_1();
/**
 * @brief testing function for cancel
 * 
 */
void test_cancel();
/**
 * @brief testing function for login
 * 
 */
void test_login();
/* Required by the unity test framework */
void setUp()
{

}
/* Required by the unity test framework */
void tearDown()
{

}
/* Start of the application test */
int main()
{
    /* Initiate the unity test framework */
    UNITY_BEGIN();
    /* Run test functions */
    RUN_TEST(test_bus);
    RUN_TEST(test_book);
    RUN_TEST(test_name_n0);
    RUN_TEST(test_read_n0);
    RUN_TEST(test_read_name);
    RUN_TEST(test_status);
    RUN_TEST(test_status_1);
    RUN_TEST(test_cancel);
    RUN_TEST(test_login);
    /* Close the unity test framework */
    return UNITY_END;
}


