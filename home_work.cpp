#include <iostream>
#include <fstream>
void print_arr_1(int size, int* arr, std::ofstream &fout) {

	for (int i = 0; i < size - 1; ++i) {
		fout << arr[i + 1] << " ";
	}
	fout << arr[0];
}
void print_arr_2(int size, int* arr, std::ofstream &fout) {
	fout << arr[size - 1] << " ";
	for (int i = 0; i < (size - 1); ++i) {
		fout << arr[i] << " ";
	}
}
int main()
{
	
	std::fstream fin("in.txt");
	if (fin) {
		int a(0);
		int b(0);
		fin >> a;
		int* arr_1 = new int[a];

		for (int i = 0; i < a; ++i) {
			fin >> arr_1[i];
		}
		fin >> b;
		int* arr_2 = new int[b];

		for (int i = 0; i < b; ++i) {
			fin >> arr_2[i];
		}
		std::ofstream fout("out.txt");
		fout << b << "\n";
		print_arr_2(b, arr_2, fout);
		fout  << "\n" << a << "\n";
		print_arr_1(a, arr_1, fout);
		fin.close();
		delete[] arr_1;
		delete[] arr_2;
	}
	else {
		std::cout << "Error!";
	}




}
