int strend(char* s, char* t) {
	
	char *ps = s, *pt = t;

	while (*ps)
		ps++;

	while (*pt)
		pt++;

	int t_len = pt - t;
	int s_len = ps - s;

	if (s_len < t_len)
		return 0;

	for ( ; *ps == *pt; ps--, pt--) {
		if (t == pt || s == ps)
			break;
	}

	if (*ps == *pt && t == pt)
		return 1;

	return 0;
}