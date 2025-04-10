int MaxHeap::busca(int x)
{
    int n = this->v.size();
    for (int i = 0; i < n;)
    {
        if (v[i] == x)
            return i;
        if (x > v[i])
        {
            int esq = 2 * i + 1;
            int dir = 2 * i + 2;

            if (esq < n && v[esq] >= x)
            {
                i = esq;
            }
            else if (dir < n && v[dir] >= x)
            {
                i = dir;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    return -1;
}
