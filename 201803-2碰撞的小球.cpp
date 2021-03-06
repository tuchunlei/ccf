/* CCF201803-2 碰撞的小球 */

#include <iostream>

using namespace std;

const int L = 1000;
int pos[L + 1], step[L + 1];

int main()
{
    int n, l, t;

    cin >> n >> l >> t;
    for(int i = 0; i < n; i++) {
        cin >> pos[i];
        // 开始往右走，到达两端则回头
        step[i] = 1;
    }

    for(int i = 0; i < t; i++) {
        // 走一步
        for(int j = 0; j < n; j++) {
            pos[j] += step[j];
            // 到达两端则回头
            if(pos[j] == l || pos[j] == 0)
                step[j] = -step[j];
        }

        // 判断是否碰头，碰头则掉头（要避免重复比较）
        for(int j = 0; j < n; j++)
            for(int k = j + 1; k < n; k++)
                if(pos[k] == pos[j])
                    step[k] = -step[k], step[j] = -step[j];
    }

    for(int i = 0; i < n; i++)
        cout << pos[i] << " ";
    cout << endl;

    return 0;
}

