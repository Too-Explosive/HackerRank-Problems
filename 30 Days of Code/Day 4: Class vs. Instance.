class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if (initialAge >= 0)
            this->age = initialAge;
        else
        {
            cout << "Age is not valid, setting age to 0." << endl;
            this->age = 0;
        }

    }

    void Person::amIOld(){
        if(this->age < 13)
            cout << "You are young." << endl;
        else if(this->age >= 13 and this->age < 18)
            cout << "You are a teenager." << endl;
        else
            cout << "You are old." << endl;

    }

    void Person::yearPasses(){
        this->age++;
    }
