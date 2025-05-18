#include"cal.h"
#include"../Unity/unity.h"

void setUp(void){

}

void tearDown(void){}

void test_addition(){
    TEST_ASSERT_EQUAL_INT(7,cal(4,3,'+'));
}

void test_subtraction(){
    TEST_ASSERT_EQUAL_INT(1,cal(4,3,'-'));
}


void test_multiply(){
    TEST_ASSERT_EQUAL_INT(12,cal(4,3,'*'));
}

void test_mod(){
    TEST_ASSERT_EQUAL_INT(1,cal(4,3,'%'));
}

void test_div(){
    TEST_ASSERT_EQUAL_INT(2,cal(4,2,'/'));
}




int main(void){

    UNITY_BEGIN();
    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiply);
    RUN_TEST(test_mod);
    RUN_TEST(test_div);
    UNITY_END();
}
