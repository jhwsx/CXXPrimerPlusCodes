// ���������������
// ��ָ�����ַ������뵽��һ���ַ�����ǰ��ͺ���
#include <iostream>
#include <string>

using namespace std;

string version1(const string& s1, const string& s2);
// �и�����
const string& version2(string& s1, const string& s2);
// �������
const string& version3(string& s1, const string& s2);

int main_07()
{
	string input;
	string copy;
	string result;

	// ����һ���ַ���
	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	// ʹ�� version1 �������� input ǰ����� ***
	result = version1(input, "***"); // ����ʹ�� C-����ַ�������ʼ�� string ����
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl; // �޸���ԭ�����ַ�����

	cout << "Resetting original string.\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	return 0;
}

string version1(const string& s1, const string& s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp; // �� temp �����ݽ������Ƶ�һ����ʱ�洢��Ԫ�С�Ȼ���� main �����У��ô洢��Ԫ�����ݻᱻ���Ƶ� result �����С�
}

const string& version2(string& s1, const string& s2)
{
	// ��������ʱ������ֱ���޸� s1
	s1 = s2 + s1 + s2;
	// ���صľ��Ǵ��ݸ����������ã����ǰ�ȫ��
	return s1;
}

const string& version3(string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	// ���ؾֲ������������ǲ���ȫ��
	return temp;
}
/*
Enter a string: It's not my fault.
Your string as entered: It's not my fault.
Your string enhanced: ***It's not my fault.***
Your original string: It's not my fault.
Your string enhanced: ###It's not my fault.###
Your original string: ###It's not my fault.###
Resetting original string.
Your string enhanced:
Your original string: It's not my fault.
*/