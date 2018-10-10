#include <bits/stdc++.h>

using namespace std;
struct st{
    int grade;
    int occur;

};
vector<st>vec;
int main()
{
    int grade , occur;
    bool x = false;
    while (true){
        int occur = 0;
        cin >>grade;
        if (grade==-1){
            break;
        }
        for(int i = 0;i<vec.size;i++){

            if (vec[i].grade==grade){
                vec[i].occur+=1;
                bool x =true;
                break;
            }
        }
        if (x = 1){
            continue;
            else {
               st temp;
               temp.grade=grade;
               temp.occur=1;
               st.push_back(grade);
            }
        }

    }

    return 0;
}
