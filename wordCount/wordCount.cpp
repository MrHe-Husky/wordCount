#include<bits/stdc++.h>
#include<ca.c>
using namespace std;
struct word_node{
	string word;
	int num;
};
vector<word_node> words;
void sort_word();//�������� 
void count_word();//ͳ�Ƶ���Ƶ�� 
int main(){
	//input();����һ���ַ��� 
	//ͳ���ַ��� ������int
	//��������������   ������int ���� strcut
	//ͳ����Ч����  ������int
	//����Ƶ��  ����struct 
	string str[6]={"Monday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	for(int i =0;i<6;i++){
		struct word_node temp_node;
		temp_node.word = str[i];
		temp_node.num = 1;
		words.push_back(temp_node);
	}
	count_word();
	for(int i=0;i<words.size();i++)
	cout<<words[i].word<<"  "<<words[i].num<<endl;
	return 0;
}

