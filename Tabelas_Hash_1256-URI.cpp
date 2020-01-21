#include <iostream>
#include <utility>
#include <vector>
#include <map>


using namespace std;

int main(){
    vector<int> conjuntoV, aux2;
    vector<int>::iterator itV;
    map<int, vector<int> > mapa;
    map<int, vector<int> >::iterator itM;
    int N, M, C, i;
    int aux, div;
    cin >> N;
    for(i = 0; i < N; i++){
        cin >> M >> C;

        mapa.clear();
        for(int j = 0; j < M; j++){
            vector<int> conj;
            mapa.insert(pair<int, vector<int> >(j, conj));
        }

        for(int k = 0; k < C; k++){
            cin >> div;
            // conjuntoV.push_back(aux);
            mapa[div%M].push_back(div);
        }

        
        for(itM=mapa.begin(); itM!=mapa.end(); itM++){
            cout << itM->first << " -> ";
            for(itV = itM->second.begin(); itV!=itM->second.end(); itV++){
                cout << *itV << " -> ";
            } 
            cout << "\\" << endl;
        }
        if(i != N - 1){
            cout << endl;
        }
    }

    return 0;


}
