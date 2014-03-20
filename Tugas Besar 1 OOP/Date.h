#ifndef DATE_OOP_H
#define DATE_OOP_H
/*! \brief
	Kelas yang digunakan untuk merepresentasikan tanggal dalam bentuk hari, bulan dan tahun.
*/
class Date
{
private:
	int hari;
	int bulan;
	int tahun;
public:
	
	///Konstruktor date.
	Date();

	///Getter untuk hari.
	int getHari();
	///Getter untuk bulan.
	int getBulan();
	///Getter untuk tahun.
	int getTahun();

	///Setter untuk hari.
	void setHari(int);
	///Setter untuk bulan.
	void setBulan(int);
	///Setter untuk tahun.
	void setTahun(int);

};

#endif