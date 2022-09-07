#include <Ext/Core/Tester.hpp>
#include <Fallout/Critters/Stats.hpp>

void TestCrittersStatsEnumMax()
{
	EXT_TESTER_EQUAL(Fallout::Critters::Stats::Max > 0);
}

void TestCrittersStatsInitDefault()
{
	Fallout::Critters::Stats stats;

	for (size_t i = 0; i < stats.Max; i++)
	{
		EXT_TESTER_EQUAL(stats.Value(i)       == 0);
		EXT_TESTER_EQUAL(stats.Current(i)     == 0);
		EXT_TESTER_EQUAL(stats.Number(i)      == 0);
		EXT_TESTER_EQUAL(stats.Percent(i)     == 0);
		EXT_TESTER_EQUAL(stats.StatValue(i)   == 0);
		EXT_TESTER_EQUAL(stats.StatCurrent(i) == 0);
	}
}

void TestCrittersStatsInitValues()
{
	Fallout::Critters::Stats stats;

	for (size_t i = 0; i < stats.Max; i++)
	{
		stats.Value(i, 100);
		stats.Current(i, 200);
		stats.Number(i, 50);
		stats.Percent(i, 10);

		EXT_TESTER_EQUAL(stats.Value(i)       == 100);
		EXT_TESTER_EQUAL(stats.Current(i)     == 200);
		EXT_TESTER_EQUAL(stats.Number(i)      == 50);
		EXT_TESTER_EQUAL(stats.Percent(i)     == 10);
		EXT_TESTER_EQUAL(stats.StatValue(i)   == 160);
		EXT_TESTER_EQUAL(stats.StatCurrent(i) == 200);
	}
}

void TestCrittersStatsClear()
{
	Fallout::Critters::Stats stats;

	for (size_t i = 0; i < stats.Max; i++)
	{
		stats.Value(i, 1);
		stats.Current(i, 2);
		stats.Number(i, 3);
		stats.Percent(i, 4);
	}

	for (size_t i = 0; i < stats.Max; i++)
	{

		EXT_TESTER_EQUAL(stats.Value(i)       == 0);
		EXT_TESTER_EQUAL(stats.Current(i)     == 0);
		EXT_TESTER_EQUAL(stats.Number(i)      == 0);
		EXT_TESTER_EQUAL(stats.Percent(i)     == 0);
		EXT_TESTER_EQUAL(stats.StatValue(i)   == 0);
		EXT_TESTER_EQUAL(stats.StatCurrent(i) == 0);
	}
}

int main(int argc, char* argv[])
{
	TestCrittersStatsEnumMax();
	TestCrittersStatsInitDefault();
	TestCrittersStatsInitValues();

	return 0;
}