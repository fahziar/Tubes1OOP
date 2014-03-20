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
	void Add(T newElement);
	///Menghapus elemen di awal antrian. Fungsi ini mengembalika elemen yang dihapus.
	T Delete();
	///Menghapus elemen di akhir antrian. Fungsi ini mengembalika elemen yang dihapus.
	T DeleteLast();

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
	int head, tail;
	static const int defaultSize = 50;
};

template <typename T>
Queue<T>::Queue()
{
	this->T = new T[Queue::defaultSize + 1];

	if (this->T == NULL)
	{
		this->size = 0;
	}
	else {
		this->size = Queue::defaultSize;
		this->head = 1;
		this->tail = 1;
		Nb = 0;
	}
}


template <typename T>
Queue<T>::Queue(int size)
{
	this->T = new T[size + 1];

	if (this->T == NULL)
	{
		this->size = 0;
	}
	else {
		this->size = size;
		Nb = 0;
		this->head = 1;
		this->tail = 2;
	}
}

template <typename T>
Queue<T>::~Queue()
{
	delete[] T;
}

template <typename T>
bool Queue<T>::isFull()
{
	if (this->head + 1 == this->tail)
	{
		return true;
	}
	else {
		return false;
	}
}

template <typename T>
int Queue<T>::NbElement()
{
	if (this->head + 1 == this->tail)
	{
		return 0;
	}
	else if (this->head >= this->tail) {
		return ((this->size - this->head) + this->tail);
	}
	else if (this->head < this->tail) {
		return (this->tail - this->head - 1);
	}
}

template <typename T>
void Queue<T>::Add(T newElement)
{
	this->T[this->tail] = newElement;
	this->tail++;
	if (this->tail == this->size + 2)
	{
		this->tail = 1;
	}
}

template <typename T>
T Queue<T>::Delete()
{
	this->head++;
	if (this->head == this->size + 2)
	{
		this->head = 1;

	}

	return this->T[this->head];
}

template <typename T>
T Queue<T>::DeleteLast()
{
	this->tail--;
	if (this->tail < 1)
	{
		this->tail = this->size + 1;
	}

	retur this->T[tail];
}

#endif