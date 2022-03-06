//#include <string>
//#include <vector>
//#include <iostream>
//#include <unordered_set>
//#include <unordered_map>
//
//using namespace std;
//
//bool solution(vector<string> phone_book)
//{
//	unordered_set<string> book;
//	bool answer;
//
//	for (int i = 0; i < phone_book.size(); i++)
//	{
//		for (int j = 1; j < phone_book.size(); j++)
//		{
//			if (phone_book[i].substr() == phone_book[j + 1].substr(0, phone_book[i].size()))
//			{
//				return false;
//				break;
//			}
//			else
//			{
//				return true;
//				break;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	vector<string>phone = { "12", "123", "1235", "567", "88" };
//
//	solution(phone);
//
//}
//
////해쉬 맵 답안 일주일 후 다시 풀어보기
//
//bool solution(vector<string>phone_book)
//{
//	unordered_map<string, int> map;
//
//	for (int i = 0; i < phone_book.size(); i++)
//	{
//		map[phone_book[i]] = 1;
//	}
//
//	for (int i = 0; i < phone_book.size(); i++)
//	{
//		for (int j = 0; j < phone_book[i].size() - 1; j++)
//		{
//			string phone_number = phone_book[i].substr(0, j + 1);
//
//			if (map[phone_number])
//			{
//				return false;
//			}
//		}
//	}
//
//	return true;
//}