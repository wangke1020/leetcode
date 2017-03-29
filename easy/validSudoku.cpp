/*Valid Sudoku


Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.

The Sudoku board could be partially filled, where empty cells are filled with the character '.'.



*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

//class Solution
//{
//public:
//	static char empty_cell;
//	bool isValidSudoku(vector<vector<char>>& board)
//	{
//		vector<vector<char>> newBoard;
//		for (auto v : board)
//		{
//			newBoard.push_back(v);
//		}
//		for (int n = 0; n < 9; ++n)
//		{
//			vector<char> tmpV;
//			for (auto v : board)
//			{
//				tmpV.push_back(v[n]);
//			}
//			newBoard.push_back(tmpV);
//		}
//		
//
//		for (int s_col = 0; s_col < 9; s_col += 3)
//		{
//			for (int s_row = 0; s_row < 9; s_row += 3)
//			{
//				vector<char> tmpV;
//				for (int i = s_row; i < s_row + 3; ++i)
//				{
//					for (int j = s_col; j < s_col + 3; ++j)
//					{
//						tmpV.push_back(board[i][j]);
//					}
//				}
//				//for (auto x : tmpV)
//				//{
//				//	cout << x << " ";
//				//}
//				//cout << endl;
//				newBoard.push_back(tmpV);
//			}
//		}
//		
//		for (auto item : newBoard)
//		{
//			
//			for (int i = 0; i < 9; i++)
//			{
//				cout << item[i] << " ";
//			}
//			cout << endl;
//		}
//
//		unordered_set<char>set;
//		for (auto v : newBoard)
//		{
//			set.clear();
//			for (char c : v)
//			{
//				if (c != empty_cell)
//				{
//					if (c > '9' || c < '1') return false;
//					if (set.find(c) != set.end()) return false;
//					set.insert(c);
//				}
//			}
//		}
//		return true;
//	}
//};
//char Solution::empty_cell = '.';


class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		unordered_set<char> row[9];
		unordered_set<char> col[9];
		unordered_set<char> cell[3][3];
		for (int i = 0; i<9; ++i)
		{
			for (int j = 0; j<9; ++j)
			{
				char n = board[i][j];
				int x = i / 3;
				int y = j / 3;
				if (isdigit(n) && (!row[i].insert(n).second || !col[j].insert(n).second || !cell[x][y].insert(n).second))
					return false;
			}
		}
		return true;
	}
};

void main()
{
	vector<vector<char>> v;
	string s1 = ".87654321";
	vector<char> subv1;
	for (char c : s1)
	{
		subv1.push_back(c);
	}
	v.push_back(subv1);


	for (char c = '2'; c <= '9'; c++)
	{
		vector<char> subv;
		subv.push_back(c);
		for (int i = 0; i < 8; i++)
			subv.push_back('.');
		v.push_back(subv);
	}

	Solution s;
	cout << s.isValidSudoku(v) << endl;
	getchar();
	return;
}