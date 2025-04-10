bool MaxHeap::ehMinHeap()
{
	int n = this->v.size();
	for (int i = 0; i <= (n / 2) - 1; i++)
	{
		int esq = 2 * i + 1;
		int dir = 2 * i + 2;

		if (esq < n && v[i] > v[esq])
			return false;
		if (dir < n && v[i] > v[dir])
			return false;
	}
	return true;
}
