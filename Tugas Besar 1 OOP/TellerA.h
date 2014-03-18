#ifndef TELLER_OOP_A
#define TELLER_OOP_A
#include "Teller.h"
#include "Queue.h"
/*! \brief
	Kelas ini digunakna untuk merepresentasikan Teller. Queue yang digunakan adalah queue buatan sendiri
*/
template <typename T>
class TellerA : public Teller
{
private:
	Queue <T> q;
public:
	//Fungsi dari queue
	///Menambah elemen baru ke paling belakang antrian
	void addAntrian(T elemen);
	///Menghapus elemen paling depan antrian. Mengembalikan elemen yang dihapus
	T deleteAntrian();
	///Menghapus elemen paling belakang antrian. Mengembalikan elemen yang dihapus.
	T deleteLastAntrian();
};

#endif