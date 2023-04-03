//
// Created by yyfnb on 2023/3/27.
//
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::swap;
int quickSort(vector<int>& vi, int lo, int hi)
{
    if(lo >= hi) return -1;
//    int pivot = vi[hi];
    int i = lo;
    int j = hi - 1;

        while (i <= j)
        {
            if (vi[i] > vi[hi])
            {
                swap(vi[i], vi[j]);
                j--;
            }
            else
            {
                i++;
            }

        }
        j++;
        swap(vi[hi], vi[j]);
        quickSort(vi, lo, j-1);
        quickSort(vi, j+1, hi);
    }

//int main()
//{
//    vector<int> s{6,2,5,7,3,6,9,1,2,8};
//    quickSort(s, 0, s.size()-1);
//    for(auto x:s)
//    {
//        cout<<x<<endl;
//    }
//    return 0;
//}

