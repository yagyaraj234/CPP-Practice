#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<pair<int,string>>vec_pair={{4,"hello"},{45,"sir"},{23,"How"},{45,"sir"},{23,"How"}};

    vector<pair<int,string>>::iterator v;

    // for (v=vec_pair.begin();v!=vec_pair.end();v++)
    // {
    //     cout<<(*v).first<<" "<<(*v).second<<endl;
    // }

    // for (v=vec_pair.begin();v!=vec_pair.end();v++)
    // {
    //     cout<<v->first<<" "<<v->second<<endl;
    // }

    for( auto vc:vec_pair){

        cout<<vc.first<<" "<<vc.second<<endl;
    }
    

    return 0;
}