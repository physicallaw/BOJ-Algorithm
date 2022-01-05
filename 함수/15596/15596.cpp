#include <vector>

long long sum(std::vector<int> &a)
{
	long long answer = 0;

   for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
      answer += *it;

	return answer;
}