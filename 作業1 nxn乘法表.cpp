#include <iostream> 

using namespace std; 

int main() {
    int n; // 宣告變數n，用來儲存輸入的數值

    cout << "請輸入一個整數 n: "; // 提示輸入數值
    cin >> n; // 接收輸入的數值並存到變數n中

   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t"; // 計算並輸出i*j的結果
        }
        cout << endl; // 每完成一列後換行
    }

    return 0; 
}
