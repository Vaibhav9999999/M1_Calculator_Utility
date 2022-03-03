# include"calculator.h"
# include"unity.h"

void setUp()
{

}

void tearDown()
{

}

 void test_addition(void)
{
  TEST_ASSERT_EQUAL_FLOAT(10,addition(7,3));
}
 void test_subtract(void)
{
  TEST_ASSERT_EQUAL_FLOAT(4,subtract(7,3));
}
 void test_multiply(void)
{
  TEST_ASSERT_EQUAL_FLOAT(21,multiply(7,3));
}
 void test_divide(void)
{
  TEST_ASSERT_EQUAL_FLOAT(2,divide(6,3));
}
 void test_square(void)
{
  TEST_ASSERT_EQUAL_FLOAT(49,square(7));
}
 void test_percentage(void)
{
  TEST_ASSERT_EQUAL_FLOAT(0.07,percentage(7));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_addition);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    RUN_TEST(test_square);
    RUN_TEST(test_percentage);

    return UNITY_END();
}


