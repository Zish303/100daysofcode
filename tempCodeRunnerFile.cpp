    int top = 0, bot = matrix.size(), l = 0, r = matrix[0].size();
    vector<int> v(r * c);
    int k = 0;
    while (l < r and top < bot)
    {
        for (int i = l; i < r; i++)
        {
            v[k] = matrix[top][i];
            k++;
        }
        top++;
        for (int i = top; i < bot; i++)
        {
            v[k] = matrix[top][r - 1];
            k++;
        }
        r--;
        for (int i = r - 1; i >= l; i--)
        {
            v[k] = matrix[bot - 1][i];
            k++;
        }
        bot--;
        for (int i = bot - 1; i >= top; i--)
        {
            v[k] = matrix[i][l];
            k++;
        }
        l++;
    }
    return v;