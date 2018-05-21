class Solution {
public:
    bool isValid(string s) {
    if (s.empty())
			return true;
		stack<char> chStack;
		for (int i = 0; i < s.size(); i++)
		{
			if (whatParent(s[i]) < 0)
			{
				chStack.push(s[i]);
			} else if (whatParent(s[i]) > 0)
			{
				if (chStack.empty())
				{
					return false;
				}
				if (whatParent(chStack.top()) + whatParent(s[i]) == 0)
				{
					chStack.pop();
				} else
				{
					 chStack.push(s[i]);
				}
			}
		}
      
		if (chStack.empty())
		{
			return true;
		}
		return false;
	}

	int whatParent(char ch)
	{
		switch (ch)
		{
		case '(':
			return -1;
		case ')':
			return 1;
		case '[':
			return -2;
		case ']':
			return 2;
		case '{':
			return -3;
		case '}':
			return 3;
		default:
			break;
		}
		return 0;
	}

  
};
