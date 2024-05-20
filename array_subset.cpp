/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#include <vector>
void
fun (std::vector < int >&v, std::vector < std::vector < int >>&ans,
	 std::vector < int >temp, int i)
{
  if (i == v.size ())
	{
	  ans.push_back (temp);
	  return;
	}

  fun (v, ans, temp, i + 1);
  temp.push_back (v[i]);
  fun (v, ans, temp, i + 1);
  return;
}

int
main ()
{
  std::vector < int >v = { 1, 2, 3 };
  std::vector < std::vector < int >>ans;
  std::vector < int >temp;
  fun (v, ans, temp, 0);
  //std::cout << ans << std::endl;
  for (int i = 0; i < ans.size (); i++)
	{
	  for (int j = 0; j < ans[i].size (); j++)
		{
		  std::cout << ans[i][j] << "|";
		}
	  std::cout << std::endl;
	}
  return 0;
}
