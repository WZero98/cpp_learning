// Filename: chars.cpp
// Date: 2025-05-11
// Description: chars �������Ͳ���

#include <iostream>

int main()
{
	using namespace std;
	char16_t char_1 = u'��', char_2 = u'��', char_3 = u'��';
	char16_t name[] = u"Felonia Ripova"; // char_16 string
	char name_1[] = u8"Felonia Ripova";

	cout << "The unicode of �� is : " << char_1 << endl;
	cout << "The unicode of �� is : " << char_2 << endl;
	cout << "The unicode of �� is : " << char_3 << endl;

	cout << name[1] << endl;  // �ɼ����ߵı��벻ͬ
	cout << name_1[1] << endl;

	cout << R"("Who wouldn't?",\n she whispered.)" << endl;  // \n ��������Ϊ���з���"����������ʾ

	char16_t u16s[] = u"����";
	char32_t u32s[] = U"����";
	wchar_t ws[] = L"����";
	cout << u16s[0] << endl;
	cout << u32s[0] << endl;
	cout << ws[0] << endl;

	cin.get();
	return 0;
}
