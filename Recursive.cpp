// Recursive C++ program for insertion sort
#include <iostream>
using namespace std;

// Fungsi rekursif untuk mengurutkan array menggunakan
// insertion sort
void insertionSortRecursive(int arr[], int n)
{
	// Base case
	if (n <= 1)
		return;

	// Urutkan n-1 elemen pertama
	insertionSortRecursive( arr, n-1 );

	//Masukkan elemen terakhir pada posisi yang benar dalam array yang diurutkan.
	int last = arr[n-1];
	int j = n-2;

	/* Pindahkan elemen arr[0..i-1], yaitu
    lebih besar dari kunci, ke satu posisi di depan
    dari posisi mereka saat ini */
	while (j >= 0 && arr[j] > last)
	{
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = last;
}

// Fungsi utilitas untuk mencetak array berukuran n
void printArray(int arr[], int n)
{
	for (int i=0; i < n; i++)
		cout << arr[i] <<" ";
}

/* Program driver untuk menguji jenis penyisipan */
int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSortRecursive(arr, n);
	printArray(arr, n);

  return 0;
}
