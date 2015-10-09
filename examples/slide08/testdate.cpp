#include <iostream>
#include "Date.h"

using namespace std;

// ���Date��Ĳ���
int main(int argc, char** argv)
{
	// ����Ĭ�Ϲ��캯��
	Date dd;
	cout << "Date dd;" << endl;
	dd.print();
	cout << endl;
	// ������ͨ���캯��
	Date today(6,11,2006);
	cout << "Date today(6,11,2006);" << endl;
	today.print();
	cout << endl;

	// ���Ը��ƹ��캯��
	Date d = today; 
	cout << "Date d = today; " << endl;
	d.print();
	cout << endl;

	// ���Ը�ֵ���ƺ���
	Date d1;
	d1 = today; 
	cout << "Date d1;" << endl;
	cout << "d1 = today; " << endl;
	d1.print();
	//cout << d.getD();

	cout << "default_date is : ";
	Date::default_date.print();
	
	// �����޸�����
	cout << "today is 2006.11.6" << endl;;
	today.add_year(1).add_month(1).add_day(10);
	cout << "today.add_year(1).add_month(1).add_day(10);" << endl;
	today.print();

	cout << endl;
	// �����߼��ĳ���������
	cout << "Now printing string representation of today: ";
	cout << today.string_rep() << endl;

	const Date d2; // Ӧ����default_date
	cout << "const Date d2;" << endl;
	cout << d2.string_rep() << endl;


}
