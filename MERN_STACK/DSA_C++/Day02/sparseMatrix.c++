  #include<iostream>
  #include<vector>
  using namespace std;

  
//   vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
//   if (matrix.empty()) return {};

//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     int left = 0, right = cols, top = 0, bottom = rows;

//     vector<int>v;

//     while(left<right&&top<bottom){

//            //left to right
//       for (int i = left; i < right; i++) {
//     v.push_back(matrix[top][i]);  
//     cout << "Pushed: " << matrix[top][i] << endl;
// }

//           ++top;

//           //top to bottom
//              for (int i = top; i < bottom; i++) {
//     v.push_back(matrix[i][right - 1]);
//     cout << "Pushed: " << matrix[i][right - 1] << endl;
// }
//           --right;
           
//           //right to left
//          if(top<bottom){
//             for (int i = right - 1; i >= left; i--) {
//        v.push_back(matrix[bottom - 1][i]);
//        cout << "Pushed: " << matrix[bottom - 1][i] << endl;
// }
//           --bottom;
//          }

//          //bottom to top
//            if(left<right){
              
//            for (int i = bottom - 1; i >= top; i--) {
//               v.push_back(matrix[i][left]);
//               cout << "Pushed: " << matrix[i][left] << endl;
//             }

//              ++left;
//            }
//      }

//          return v;
//     }


//optimised

  vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();       // total rows
        int n = matrix[0].size();    // total columns

        int minr = 0, maxr = m - 1;  // top and bottom row bounds
        int minc = 0, maxc = n - 1;  // left and right column bounds

        int count = 0;
        int tnc = m * n;             // total number of cells

        vector<int> v;

        while (minr <= maxr && minc <= maxc) {
            // ➡ Left to Right
            for (int j = minc; j <= maxc && count < tnc; j++) {
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;

            // ⬇ Top to Bottom
            for (int i = minr; i <= maxr && count < tnc; i++) {
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;

            // ⬅ Right to Left
            for (int j = maxc; j >= minc && count < tnc; j--) {
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;

            // ⬆ Bottom to Top
            for (int i = maxr; i >= minr && count < tnc; i--) {
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }

        return v;
    }
    
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matrix has " << matrix.size() << " rows and " << matrix[0].size() << " columns\n";

    vector<int> v = spiralOrder(matrix);

    cout << "Starting spiral traversal...\n";

    if (v.empty()) {
        cout << "Returned vector is empty!\n";
    } else {
        for (auto num : v) {
            cout << num << " ";
        }
        cout << "\nTraversal complete.\n";
    }

    return 0;
}
