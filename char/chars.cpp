// Filename: chars.cpp
// Date: 2025-05-11
// Description: chars 变量类型测试

#include <iostream>

int main()
{
	using namespace std;
	char16_t char_1 = u'王', char_2 = u'鹏', char_3 = u'宇';
	char16_t name[] = u"Felonia Ripova"; // char_16 string
	char name_1[] = u8"Felonia Ripova";

	cout << "The unicode of 王 is : " << char_1 << endl;
	cout << "The unicode of 鹏 is : " << char_2 << endl;
	cout << "The unicode of 宇 is : " << char_3 << endl;

	cout << name[1] << endl;  // 可见二者的编码不同
	cout << name_1[1] << endl;

	cout << R"("Who wouldn't?",\n she whispered.)" << endl;  // \n 不被解析为换行符，"可以正常显示

	char16_t u16s[] = u"中文";
	char32_t u32s[] = U"中文";
	wchar_t ws[] = L"中文";
	cout << u16s[0] << endl;
	cout << u32s[0] << endl;
	cout << ws[0] << endl;

	cin.get();
	return 0;
}
