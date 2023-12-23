#include<bits/stdc++.h>
using namespace std;

class Car{
public:
    string id;
    int x, y;
    Car(string id, int x, int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }

    int dist() const{
        return x*x + y*y;
    }
};

class CarCompare{
public:
    bool operator()(Car a, Car b){
        return a.dist() > b.dist();
    }
};

void printNearestCars(vector<Car> cars, int k){
    priority_queue<Car, vector<Car>, CarCompare> pq(cars.begin(), cars.begin() + k);

    for(int i = k; i < cars.size(); i++){
        Car car = cars[i];

        if(car.dist() < pq.top().dist()){
            pq.pop();
            pq.push(car);
        }
    }

    vector<Car> output;
    while(!pq.empty()){
        output.push_back(pq.top());
        pq.pop();
    }

    sort(output.begin(), output.end(), [](Car a, Car b){
        return a.dist() < b.dist();
    });

    for(auto car: output){
        cout << car.id << " " << car.dist() << endl;
    }
}


int main() {
    //Write your code here
    int N, K;
    cin >> N >> K;

    string id;
    int x, y;

    vector<Car> cars;
    for(int i = 0; i < N; i++){
        cin >> id >> x >> y;
        Car car(id, x, y);
        cars.push_back(car);
    }

    printNearestCars(cars, K);

    return 0;
}