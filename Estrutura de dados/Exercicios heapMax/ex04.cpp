void MaxHeap::transformaEmMaxHeap()
{
	int n = this->v.size();
	for (int i = (n / 2) - 1; i >= 0; i--)
	{
		this->desce(i);
	}
}
