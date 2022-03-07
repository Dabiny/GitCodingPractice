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
//	set<int> odds; //홀수 정수값 저장
//	//set<int> odds { 1,7,5,4,9}; 라고 초기화할수도 있음
//
//	set<int, greater<>> evens{ 2, 4, 6, 8 }; //내림차순으로 짝수값 저장, greater<> 인자추가
//
//	evens.insert(10);
//	evens.insert(2); //초기값에있는 키값이 중복이되면 인서트의 2인 값은 무시됨
//
//	if (evens.find(4) != evens.end())
//	{
//		cout << "4 is found!" << endl;
//	}
//	else
//	{
//		cout << "4 is not found" << endl;
//	}
//	// 파인드함수를써서 특정값을 찾을때 만약 찾지못하면 반복자는 end()위치를 가리킴
//	// if조건문엔 만약 파인드(4)값이 엔드가 아닐경우 즉 찾은경우
//
//
//	odds.insert(1);
//	odds.insert(7);
//	odds.insert(5);
//	odds.insert(3);
//	odds.insert(9); //값들 삽입
//
//	for (auto n : odds)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//	// 오름차순으로 정렬되는 특징이 있다. 
//
//	for (auto n : evens)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	using psi = pair<string, int>; //using 선언
//
//	//struct psi
//	//{
//	//	string first;
//	//	int second;
//
//	//}; 
//	//사용자 정의타입에 대해서 키값을 쓰고 싶을땐 컴파일러의 비교연산을 위해 
//	// 연산자 오버로딩을 재정의하여 쓰면됨.
//
//	//문자열가 정수값을 쌍으로 이루는 타입을 선언하고싶을때
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
//	managers.erase({ "Sophia", 40 }); //없는 키값이기에 무시됨
//	managers.erase({ "Noah", 30 }); //30살의 노아는 없기에 무시됨
//
//	for (const auto& m : managers)
//	{
//		cout << m.first << "(" << m.second << ")" << endl;
//		// first -> 저장된 키값 첫번째 
//		// first -> 저장된 키값 두번째 
//	}
//
//	/*----------------------------------------------------------*/
//
//	map<string, int> fruits; //과일이름과 가격을 저장
//
//	fruits.insert({ "apple", 1000 }); //중괄호는 페어를 뜻함 
//	fruits.insert({ "banana", 1500 });
//
//	// 맵도 자체적으로 abc순으로 정렬을 해놓기 때문에 인서트 순서에 상관없이 오름차순 정렬됨
//
//	// operator[]
//	cout << fruits["apple"] << endl;
//	//대괄호연산자 안에 키값을 넣게되면 그안에 페어값을 참조하여 반환함.
//
//	fruits["orange"];
//	//코드를 이렇게만 작성하면 키값만 설정이 되고, 안에 페어값(int)는 0으로 초기화됨.
//	fruits["orange"] = 3000;
//
//	// fruits& operator[](int a) ;
//
//
//	fruits["grape"] = 4000;
//	fruits["lemon"] = 1000;
//
//	fruits["apple"] = 2000; //기존애플의 페어값을 바꿀 수도 있음.
//
//	fruits.erase("apple"); //키값만 넣으면 지워짐
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
//	vector<int>p(total,0); //벡터생성(티셔츠받은사람 0명)
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