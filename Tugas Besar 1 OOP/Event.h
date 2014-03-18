#ifndef EVENT_OOP_H
#define EVENT_OOP_H
#include "DateTime.h"
#include "Teller.h"
/*! \brief
	Kelas abstract untuk merepresentasikan event.
*/
class Event
{
public:
	///Mengeset nilai TMax
	virtual void setTMax(DateTime Tmax) = 0;
	///Mengeset nilai TMin
	virtual void setTMin(DateTime Tmin) = 0;

	///Menghasilkan nilai TMax
	virtual DateTime getTMax() = 0;
	///Menghasilkan nilai TMin
	virtual DateTime getTMin() = 0;

	///Memproses kedatangan pelanggan. Inputnya yaitu waktu kedatangan pelanggan.
	virtual void arrive(DateTime t);
	///Memproses pelanggan yang sudah dilayanai. Inputnya yaitu id pelanggan yang pergi
	virtual void depart(int id);

	///Memproses jockeying. Menghasilkan nomor tujuan antrian jockeying. Jika tidak terjadi jockeying, mengembalikan nilai -1
	friend int Jockeying(int iOrigin);
	
private:
	///Jam tutup bank
	DateTime Tmax;
	///Jam buka bank
	DateTime Tmin;

	///Teller
	Teller *T;
};
#endif