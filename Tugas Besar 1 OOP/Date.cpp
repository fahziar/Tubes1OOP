#include "Date.h"

using namespace std;

Date::Date()
{
	hari = 0;
	bulan = 0;
	tahun = 0;
}

Date::Date(int h, int b, int t)
{
	hari = h;
	bulan = b;
	tahun = t;
}

Date::~Date()
{

}

int Date::getHari()
{
	return hari;
}

int Date::getBulan()
{
	return bulan;
}

int Date::getTahun()
{
	return tahun;
}

void Date::setHari(int h)
{
	hari = h;
}

void Date::setBulan(int b)
{
	bulan = b;
}

void Date::setTahun(int t)
{
	tahun = t;
}