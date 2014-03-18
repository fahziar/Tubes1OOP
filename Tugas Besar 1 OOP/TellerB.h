#ifndef TELLER_B_OOP_H
#define TELLER_B_OOP_H
#include <queue>
/*! \brief
	Kelas ini digunakan untuk merepresentasikan teler. Queue yang digunakan adalah queue STL.
*/
template <typename T>
class TellerA : public Teller
{
private:
	std::queue<T> q;
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