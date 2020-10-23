#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main()
{	//1.1
	cout << 1 << ' ' << 13<<' '<<49<<endl;



	//1.2
	char a1_2; 
	cin >> a1_2;
	cout << 1 <<a1_2<< 13 <<a1_2<< 49<<endl;



	//1.3.1(ввод с клавиатуры
	int a1_3_1, b1_3_1, c1_3_1; 
	cin >> a1_3_1 >> b1_3_1 >> c1_3_1;
	cout << a1_3_1 <<' '<< ' '<<b1_3_1<< ' ' << ' '<< c1_3_1<<endl;



	//1.3.2(рандмоные числа)
	int a1_3_2 = rand();
	int b1_3_2 = rand();
	int c1_3_2 = rand();
	cout << a1_3_2 << ' ' << ' ' << b1_3_2 << ' ' << ' ' << c1_3_2<<endl;



	//1.4.1
	int x1_4_1, a1_4_1;
	cin >> a1_4_1;
	x1_4_1 = 12 * pow(a1_4_1, 2) + 7.0 * a1_4_1 - 12;
	cout << x1_4_1<<endl;



	//1.4.2
	int x1_4_2, y1_4_2;
	cin >> x1_4_2;
	y1_4_2 = 3 * pow(x1_4_2, 3) + 4 * pow(x1_4_2, 2) - 11.0 * x1_4_2 + 1;
	cout << y1_4_2<<endl;






	//2.1
	float v, m;
	cin >> v >> m;
	cout << m / v<<endl;



	//2.2
	float a2_2, x2_2, b;
	cin >> a2_2 >> b;
	x2_2 = -b / a2_2;
	cout << x2_2<<endl;



	//2.3
	float x1, x2, y1, y2,s;
	cin >> x1 >> y1 >> x2 >> y2;
	s = sqrt((pow(x2 - x1, 2)+ pow(y2 - y1, 2)));
	cout << s<<endl;



	//2.4
	float a2_4, b2_4,c2_4, h;
	cin>> a2_4>> b2_4>> h;
	c2_4 = sqrt(h * h + pow((a2_4 + b2_4) / 2,2));
	cout << a2_4 << b2_4 << c2_4<<endl;



	//2.5
	int R1, R2;
	cin >> R1 >> R2;
	cout << M_PI*(pow(R1,2) - pow(R2,2)) << endl;



	//2.6
	int a2_6;
	cin >> a2_6;
	cout << pow(a2_6, 3) << pow(a2_6, 2) * 6 << endl;



	//2.7
	int a2_7;
	cin >> a2_7;
	cout << 4 * a2_7<<endl;



	//2.8
	int r2_8;
	cin >> r2_8;
	cout << 2 * r2_8 << endl;



	//2.9
	string name;
	cin >> name;
	cout<<"hello, "<< name<<"! My name is C++."<<endl ;



	//2.10
	string S2_10;
	int flag = 0;
	cin >> S2_10;
	for (int i = 0; i < S2_10.length() / 2; i++)
		if (S2_10[i] != S2_10[S2_10.length() - i - 1]) flag++;
	if (flag == 0) cout << "This is palindrom!" << endl;
	else cout << "Sorry, this is not palindrom!" << endl;




}