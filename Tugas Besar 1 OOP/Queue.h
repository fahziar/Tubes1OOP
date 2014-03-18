#ifndef QUEUE_OOP_H
#define QUEUE_OOP_H
/*! \brief
	Kelas untuk merepresentasikan antrian dengan menggunakan array.
*/
template <typename T>
class Queue
{
public:
	///Konstruktor. Ukuruan dari antrian dibuat sesuai dengan default size.
	Queue();
	///Konstruktor. Parameter akan menjadi ukuran dari queue
	Queue(int size);
	//Desktruktor
	~Queue();

	///Menambah elemen baru di akhir antrian.
	bool Add(T newElement);
	///Menghapus elemen di awal antrian. Fungsi ini mengembalika elemen yang dihapus.
	T Delete();
	///Menghapus elemen di akhir antrian. Fungsi ini mengembalika elemen yang dihapus.
	T DeleteLast();

	///Menghasilkan jumlah elemen yang ada di queue saat ini.
	int getNumberElement() const;
	///Mengecek apakah queue telah penuh.
	bool isFull() const;
	///Mengembalikan jumlah pada queue saat ini
	int NbElement() const;

private:
	///Array yang digunakan sebgaia representasi queue
	T tabel[];
	///Ukuran dari tabel
	int size;
	///Jumlah elemen saat ini
	int Nb;
	const  T undefined;
	const int defaultSize;
};
#endif