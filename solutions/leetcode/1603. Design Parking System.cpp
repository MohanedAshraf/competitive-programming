static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class ParkingSystem {
public:
    int big , medium , small;
    ParkingSystem(int big, int medium, int small) {
    this->big = big;
    this->medium = medium;
    this->small = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && this->big>0){
            this->big--;
            return 1;
        }
        if(carType == 2 && this->medium>0){
            this->medium--;
            return 1;
        }
        if(carType == 3 && this->small>0){
            this->small--;
            return 1;
        }
        else return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */