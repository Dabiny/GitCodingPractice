//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <set>
//#include <map>
//#include <iostream>
//#include <tuple>
//#include <algorithm>
//
//using namespace std;


//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked)
//{
//	vector<vector<string>> book;
//	vector<vector<string>> unbook;
//	int count;
//
//	vector<string> answer;
//
//	copy(booked.begin(), booked.end(), book.begin());
//	copy(unbooked.begin(), unbooked.end(), unbook.begin());
//
//	count = book.size() + unbook.size();
//
//	for (int i = 0; i < count; i++)
//	{
//		if (book[i][0] < unbook[i][0])
//		{
//			answer.push_back(book[i][0]);
//		}
//		else if (unbook[i][0] < unbook[i+1][0])
//		{
//			answer.push_back(unbook[i][0]);
//		}
//		else if (book[i][0] == unbook[i][0])
//		{
//			answer.push_back(book[i][0]);
//		}
//	}
//
//	return answer;
//}


//int main()
//{
//	vector < vector<string>>booked = {"09:10","lee"} ;
//	vector < vector<string>>unbooked = { {"09:00","kim"} , {"09:05","bae"} };
//
//	
//}
//
//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked)
//{
//	unordered_map <string, string> book;
//	unordered_map <string, string> unbook;
//	
//	vector<string> answer;
//
//	int count = 0;
//
//	for (int i = 0; i < booked.size(); i++)
//	{
//		for (int j = 0; j < booked[i].size(); j++)
//		{
//			book.insert(i, j);
//			count++;
//		}
//	}
//
//	for (int i = 0; i < unbooked.size(); i++)
//	{
//		for (int j = 0; j < unbooked[i].size(); j++)
//		{
//			unbook.insert(i, j);
//			count++;
//		}
//	}
//
//	for (int i = 0; i < count; i++)
//	{
//
//		for (const auto& i : book)
//		{
//			for (const auto& j : unbook)
//			{
//				if (i.first < j.first)
//				{
//					answer.push_back(i.second);
//				}
//				else
//				{
//					answer.push_back(j.second);
//				}
//			}
//		}
//
//	}
//	return answer;
//}

//}
//for (auto& i : booked)
//{
//	for (auto& j : booked)
//	{
//		allbooking.insert(i, j);
//		checkbooking.push_back(true);
//	}
//}
//
//for (auto& i : unbooked)
//{
//	for (auto& j : unbooked)
//	{
//		allbooking.insert(i, j);
//		checkbooking.push_back(false);
//	}
//}
//
//for (auto& i : allbooking)
//{
//	for (auto j : allbooking)
//	{
//		if (i.first < j.first)
//		{
//
//		}
//	}
//}

//int main()
//{
//	set<int> odds; //Ȧ�� ������ ����
//	//set<int> odds { 1,7,5,4,9}; ��� �ʱ�ȭ�Ҽ��� ����
//
//	set<int, greater<>> evens{ 2, 4, 6, 8 }; //������������ ¦���� ����, greater<> �����߰�
//
//	evens.insert(10);
//	evens.insert(2); //�ʱⰪ���ִ� Ű���� �ߺ��̵Ǹ� �μ�Ʈ�� 2�� ���� ���õ�
//
//	if (evens.find(4) != evens.end())
//	{
//		cout << "4 is found!" << endl;
//	}
//	else
//	{
//		cout << "4 is not found" << endl;
//	}
//	// ���ε��Լ����Ἥ Ư������ ã���� ���� ã�����ϸ� �ݺ��ڴ� end()��ġ�� ����Ŵ
//	// if���ǹ��� ���� ���ε�(4)���� ���尡 �ƴҰ�� �� ã�����
//
//
//	odds.insert(1);
//	odds.insert(7);
//	odds.insert(5);
//	odds.insert(3);
//	odds.insert(9); //���� ����
//
//	for (auto n : odds)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//	// ������������ ���ĵǴ� Ư¡�� �ִ�. 
//
//	for (auto n : evens)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	using psi = pair<string, int>; //using ����
//
//	//struct psi
//	//{
//	//	string first;
//	//	int second;
//
//	//}; 
//	//����� ����Ÿ�Կ� ���ؼ� Ű���� ���� ������ �����Ϸ��� �񱳿����� ���� 
//	// ������ �����ε��� �������Ͽ� �����.
//
//	//���ڿ��� �������� ������ �̷�� Ÿ���� �����ϰ������
//	set<psi> managers{ {"Amila", 29}, {"Noah", 25}, {"Olivia", 31} };
//	managers.insert({ "George", 35 });
//
//	psi person1 = { "Noah", 25 };
//
//	if (managers.find(person1) != managers.end())
//	{
//		cout << person1.first << "is a manager!" << endl;
//	}
//	else
//	{
//		cout << person1.first << "is not a manager!" << endl;
//	}
//
//	managers.erase({ "Sophia", 40 }); //���� Ű���̱⿡ ���õ�
//	managers.erase({ "Noah", 30 }); //30���� ��ƴ� ���⿡ ���õ�
//
//	for (const auto& m : managers)
//	{
//		cout << m.first << "(" << m.second << ")" << endl;
//		// first -> ����� Ű�� ù��° 
//		// first -> ����� Ű�� �ι�° 
//	}
//
//	/*----------------------------------------------------------*/
//
//	map<string, int> fruits; //�����̸��� ������ ����
//
//	fruits.insert({ "apple", 1000 }); //�߰�ȣ�� �� ���� 
//	fruits.insert({ "banana", 1500 });
//
//	// �ʵ� ��ü������ abc������ ������ �س��� ������ �μ�Ʈ ������ ������� �������� ���ĵ�
//
//	// operator[]
//	cout << fruits["apple"] << endl;
//	//���ȣ������ �ȿ� Ű���� �ְԵǸ� �׾ȿ� ���� �����Ͽ� ��ȯ��.
//
//	fruits["orange"];
//	//�ڵ带 �̷��Ը� �ۼ��ϸ� Ű���� ������ �ǰ�, �ȿ� ��(int)�� 0���� �ʱ�ȭ��.
//	fruits["orange"] = 3000;
//
//	// fruits& operator[](int a) ;
//
//
//	fruits["grape"] = 4000;
//	fruits["lemon"] = 1000;
//
//	fruits["apple"] = 2000; //���������� ���� �ٲ� ���� ����.
//
//	fruits.erase("apple"); //Ű���� ������ ������
//
///*	for (auto [name, price] : fruits)
//	{
//		cout << name << " is " << price << "won." << endl;
//	}*/ //?
//
//	for (const auto& p : fruits)
//	{
//		cout << p.first << " is " << p.second << " won." << endl;
//	}
//
//
//}

//int solution(vector<int> people, vector<int> tshirts) {
//	int answer = 0;
//	int total = people.size();
//
//	vector<int>p(total,0); //���ͻ���(Ƽ����������� 0��)
//	sort(people.begin(), people.end());
//	sort(tshirts.begin(), tshirts.end());
//
//	for (int i = 0; i < tshirts.size(); i++)
//	{
//		for (int j = 0; j < people.size(); j++)
//		{
//			if (tshirts[i] >= people[j] && p[i] == 0)
//			{
//				p[i]++;
//				break;
//			}
//			else if (tshirts[i] < people[i] && tshirts[i] >= people[i + 1] && p[i] == 0)
//			{
//				p[i]++;
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < p.size(); i++)
//	{
//		if (p[i] > 0)
//		{
//			answer++;
//		}
//	}
//
//	return answer;
//}