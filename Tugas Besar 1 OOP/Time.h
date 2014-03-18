#ifndef TIME_OOP_H
#define TIME_OOP_H
/*! \brief
	Kelas untuk merepresentasikan waktu dalam jam, menit dan detik.
*/
class Time
{
public:
	///Konstruktor untuk waktu.
	Time();
	~Time();

	///Getter untuk jam.
	int getJam();
	///Getter untuk menit.
	int getMenit();
	///Getter untuk detik
	int getDetik();
	
	///Setter untuk jam. Jam harus bernilai 0 <= jam < 24. Jika diluar range tersebut, akan diabaikan
	void setJam(int);
	///Setter untuk menit. Menit harus bernilai 0 <= Menit < 59. Jika diluar range tersebut, akan diabaikan
	void setMenit(int);
	///Setter untuk detik. Detik harus bernilai 0 <= Detik < 59. Jika diluar range tersebut, akan diabaikan
	void setDetik(int);
private:
	///Variabel yang berisi jam.
	int jam;
	///Variabel yang berisi menit.
	int menit;
	///Variabel yang berisi detik.
	int detik;
};

Time::Time()
{
}

Time::~Time()
{
}
#endif