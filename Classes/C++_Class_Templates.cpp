template <class T>
class AddElements {
    T element;
  public:
    AddElements (T arg) {element=arg;}
    T divideBy2 () {return element/2;}
    
 
    T add(T x) {
        return element+x;
    }
    T concatenate(T x) {
        return element+x;
    }

};
