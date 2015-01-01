#include <project.h>
#include <limits.h>
#include <signal.h>

static void test_precision_o_sharp_zero(t_test *test)
{
	// debug_next_assert();
	assert_printf("%#.o, %#.0o", 0, 0);
}

static void test_precision_x_sharp_zero(t_test *test)
{
	// debug_next_assert();
	assert_printf("%#.x, %#.0x", 0, 0);
}

static void test_precision_p_zero(t_test *test)
{
	// debug_next_assert();
	// assert_printf("%#+12.45llo", 42645454564);
	assert_printf("%.p, %.0p", 0, 0);
}

void	suite_72_precision_mixed_with_flags(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_precision_o_sharp_zero);
	SUITE_ADD_TEST(suite, test_precision_x_sharp_zero);
	SUITE_ADD_TEST(suite, test_precision_p_zero);
}
