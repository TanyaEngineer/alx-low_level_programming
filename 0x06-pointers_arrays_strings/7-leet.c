char *leet(char *str)
{
	int i = 0, j = 0;
	char s1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int s2[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j] + 48;
		}
		i++;
	}
	return (str);
}
