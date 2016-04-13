class Student{
    private: 
    int a,b,c,d,e;
    

public:
    void Input(){// to read the scores in 5 subjects.
        cin>>a>>b>>c>>d>>e;
    }
    int CalculateTotalScore(){ // to calculate and return the total score of a student.
        return a+b+c+d+e;
    }
    
};
