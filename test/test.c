#include <ctest.h>
#include <func.h>

CTEST(func_suite, test_null)
{
	//Given
	const double a = 0.00;
	const double b = 0.00;
	const double c = 0.00;

	//When
	double x1 = 0, x2 = 0;
	const int st = qwrt(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = -1.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(1, st);
}

CTEST(func_suite, test_nullkorney)
{
	//Given
	const double a = 2.00;
	const double b = 4.00;
	const double c = 7.00;

	//When
	double x1 = 0, x2 = 0;
	const int st = qwrt(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 0.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(0, st);
}
CTEST(func_suite, test_onekoren)
{
	//Given
	const double a = 1.00;
	const double b = 6.00;
	const double c = 9.00;

	//When
	double x1 = 0, x2 = 0;
	const int st = qwrt(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = -3.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(1, st);
}

CTEST(func_suite, test_esliA0)
{
	//Given
	const double a = 0.00;
	const double b = 8.00;
	const double c = 7.00;

	//When
	double x1 = 0, x2 = 0;
	const int st = qwrt(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 0.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(-1, st);
}
CTEST(func_suite, test_esliB0)
{
	//Given
	const double a = 2.00;
	const double b = 0.00;
	const double c = -8.00;

	//When
	double x1 = 0, x2 = 0;
	const int st = qwrt(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 2.00;
	const double expected_x2 = -2.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(2, st);
}
CTEST(func_suite, test_esliC0)
{
	//Given
	const double a = 2.00;
	const double b = 6.00;
	const double c = 0.00;

	//When
	double x1 = 0, x2 = 0;
	const int st = qwrt(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 0.00;
	const double expected_x2 = -3.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(2, st);
}