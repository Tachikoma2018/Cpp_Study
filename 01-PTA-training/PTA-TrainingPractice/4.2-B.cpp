#include <iostream>
// This parctice original from website: https://pintia.cn/
int main(){

    using namespace std;
    cout << ">>> Please enter an positive integer for test pairs(<=10): ";
    int pairs,temp;
    cin >> pairs;

    cout << ">>> Reference: gold(1) wood(2) water(3) fire(4) soil(5)" << endl;
    /*
    int Related[5][2] = {{1,3},{2,4},{3,2},{4,5},{5,1}};
    int Against[5][2] = {{1,2},{2,5},{3,4},{4,1},{5,3}};
    */
    // combine into {origin,related,against}
    int Combine[5][3] = {{1,3,2},{2,4,5},{3,2,4},{4,5,1},{5,1,3}}; 

    int box[pairs][2];
    temp = 0;
    while(temp<pairs){
        cout << ">>> Enter: ";
        cin >> box[temp][0] >> box[temp][1];
        temp++;
    }
    cout << "Scan finished!" << endl;

    for(int i=0;i<pairs;i++){
        for(int j=0;j<5;j++){

            if(box[i][0] == Combine[j][0]){
                if(box[i][1] == Combine[j][1])
                    cout << box[i][0] << " is related to " << box[i][1] << endl;
                else if (box[i][1] == Combine[j][2])
                    cout << box[i][0] << " is against to " << box[i][1] << endl;
            }
            // if box[i][0] not match, should change to box[i][1]
            if(box[i][1] == Combine[j][0]){
                if(box[i][0] == Combine[j][1])
                    cout << box[i][1] << " is related to " << box[i][0] << endl;
                else if (box[i][0] == Combine[j][2])
                    cout << box[i][1] << " is against to " << box[i][0] << endl;
            }
        }
    }

    cin.get();
    cin.get();
    return 0;

}