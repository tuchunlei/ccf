/* CCF201803-2 ��ײ��С�� */

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
        // ��ʼ�����ߣ������������ͷ
        step[i] = 1;
    }

    for(int i = 0; i < t; i++) {
        // ��һ��
        for(int j = 0; j < n; j++) {
            pos[j] += step[j];
            // �����������ͷ
            if(pos[j] == l || pos[j] == 0)
                step[j] = -step[j];
        }

        // �ж��Ƿ���ͷ����ͷ���ͷ��Ҫ�����ظ��Ƚϣ�
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

