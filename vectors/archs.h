// arch is nothing but vector
template<typename T>
class arc{
private:
    T* arr;
    int cs;
    int ms;
public:
    arc(int maxsize=1){
        cs = 0;
        ms = maxsize;
        arr = new int[ms];
    }

    void push_back(const int number){
        if(cs == ms){
            // create new array & copy numbers there
            T *old = arr;
            ms = 2*ms;
            arr = new T[ms];

            // copy the elements
            for(int i = 0; i < cs; i++){
                arr[i] = old[i];
            }

            delete [] old;
        }
        arr[cs] = number;
        cs++;
    }

    void pop_back(){
        if(cs > 0){
            cs--;
        }
    }

    bool is_empty(){
        return cs == 0;
    }

    T front() const{
        if(cs >= 0){
            return arr[0];
        }
    }

    T back() const{
        return arr[cs];
    }

    int size() const{
        return cs;
    }

    T at(int i) const{
        return arr[i];
    }

    int capacity() const{
        return ms;
    }

    T operator[](const int i){
        return arr[i];
    }
};