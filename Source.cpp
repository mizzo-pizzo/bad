#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

		//case 1
		/*int day;
		cin >> day;*/
		/*if (day == 1) {
			cout << "monday" << endl;
		}
		else if (day == 2) {
			cout << "tuesday" << endl;
		} */
		/*	switch (day) {
			case 1: cout << "monday" << endl; break;
			case 2: cout << "tuesday" << endl; break;
			case 3: cout << "wednesday" << endl; break;
			case 4: cout << "thursday" << endl; break;
			case 5: cout << "friday" << endl; break;
			case 6: cout << "saturday" << endl; break;
			case 7: cout << "sunday" << endl; break;
			default: cout << "wrong day number" << endl;

			} */

			//case 2	/*	int k;	cin >> k;	case 1: cout << "plo" << endl; break;	case 2: cout << "neyd" << endl; break;	case 3: cout << "ydo" << endl; break;	case 4: cout << "xopo" << endl; break;	case 5: cout << "otl" << endl; break;	*/	/*//case 3;		int month;	cin >> month;	case 12:	case 1:	case 2: cout << "winter" << endl; break;	case 3:	case 4:	case 5: cout << "spring" << endl; break;	case 6 :	case 7:	case 8:cout << "summer" << endl; break;	case 9:	case 10:		case 11:cout << "autumn" << endl; break; */

	//Case4. ��� ����� ������ � ����� ����� � ��������� 1�12(1 � ������, 2 �
		//������� � �.�.).���������� ���������� ���� � ���� ������ ��� ������������� ����.
	/*int day;
	cin >> day;
	switch (day) {
	case 2: cout << "28 days" << endl;  break;
	case 3: 
	case 4:
	case 7: 
	case 8:
	case 11: 
	case 12: cout << " 31 days" << endl; break;
	case 5:
	case 1:
	case 6: cout << " 30 days" << endl; break;
		default: cout << "wrong day number" << endl;
	*/
	//Case5.�������������� �������� ��� ������� ������������� ���������
	//	������� : 1 � ��������, 2 � ���������, 3 � ���������, 4 � �������.���
	//	����� �������� N(����� ����� � ��������� 1�4) � ������������ ����� A
	//	� B(� �� ����� 0).��������� ��� ������� ��������� �������� � �������
	//	���������.
	/*int a, b, c;
	cin >> a >> b >> c;
	switch (a) {
	case 1: cout << c + b;
	case 2: cout << b - c;
	case 3: cout << b * c;
	case 4: cout << b / c;
	}
*/

	//Case8. ���� ��� ����� �����: D (����) � M (�����), ������������ ���������� ���� ������������� ����. ������� �������� D � M ��� ����,
	//�������������� ���������.	/*int D, M;
	cout << "������� ����:";
	cin >> D;
	cout << "������� ����� ������:";
    cin >> M;
	D = D - 1;
	if (D == 0) {
		M = M - 1;
		if (M = 0) {
			M = 12;
		}
		switch (M)
		{
		case 1: D = 31;
		case 3: D = 31;
		case 5: D = 31;
		case 7: D = 31;
		case 8: D = 31;
		case 10: D = 31;
		case 12: D = 31;
		case 4: D = 30;
		case 6: D = 30;
		case 9: D = 30;
		case 11: D = 30;
		case 2: D = 28;
		}
	}
	cout << "���������� ����:" << D << "." << M; */
    
  /* //if-else 1
   int a;
   cin >> a;
   if ( a == 0) {//true 
	   a == 0;
    }
   else if ( a == 1) {//false
	   a == 1;
   }
   else if ( a == -3) {//false
	   a == -3;
   } */
/*//if-else 2
int a; 
cin >> a;
if ( a == 1) {//true
	a > 0;
}
 if ( a == 0) {//false
	a < 0;
}
 if (a == -3) {//false
	 a == -3
 }
	*/
 //if-else 3

 }