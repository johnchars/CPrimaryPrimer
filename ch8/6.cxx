#include <iostream>
#include <cstring>
template <class T>
T maxn(T* arr, int n);

template <> char* maxn(char* arr[], int n);

int main(){
	using namespace std;
	int arrInt[6];
	double arrD[4];
	char* arrS[] = {
		"Chai Wenjie",
		"Xu mengying",
		"Zhang yibo",
		"Liu Quan",
		"Wang Weili"
	};
	/*
	cout << "Enter Int array, 6 elements concluding.\n";
	for (int i=0; i<6; i++){
		cin >> arrInt[i];
	}
	cin.get();
	cout << "Enter double array, 4 elemengts concluding.\n";
	for (int i=0; i<4; i++){
		cin >> arrD[i];
	}
	cin.get();
	cout << "maximum of int array is: ";
	cout << maxn(arrInt,6)<<endl;
	
	cout << "Maximum of double array is: ";
	cout << maxn(arrD,4)<<endl;
	*/
	
	cout << "const string content:" << endl;
	for (int i=0; i<5; i++)
		cout << arrS[i] << endl;

	cout << "Maximum of char array address is: ";
	cout << (void *)maxn(arrS,5)<<endl;
	cout << "the end.";
	return 0;
}

template <class T>
T maxn( T* arr, int n){
	std::cout << "Call function template\n";
	T temp= *arr;
	for (int i=1; i<n; i++){
		if (temp < *(arr+i))
			temp = *(arr+i);
	}
	return temp;
}

template <> char* maxn(char* arr[], int n){
	//int temp=0, count =0;
	//std::cout << std::endl << "Call function explicit specialization function\n";
	char* pa = *arr;
	int temp = strlen(*arr);

	for (int i=1; i<n; i++){
		//count = strlen(arr+i);
		if (temp<strlen(*(arr+i))){
			pa = *(arr+i);
			temp = strlen(*(arr+i));
	//		std::cout << "strlen is: " << temp << std::endl;
		}
		//else if (count == temp)
	}
//	std::cout << "pa is: " << pa << std::endl;
	return pa;
}
