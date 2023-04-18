#ifndef SQUARE_H
    #define SQUARE_H
    #include <iostream>
    using namespace std;

    class Square {
        // Members
        private: 
        double l = 0.0;
        string name;

        // Constructors
        public:
        Square(string _name);
        Square(string _name, double _l);

        // Methods
        // Getters
        const double& getL() const ;
        const string& getName() const ;

        // Setters
        void setL(double _l);
        void setName(string _name);

        // https://stackoverflow.com/questions/51615363/how-to-write-c-getters-and-setters


        // Helpers
        void printInfos();
    };
#endif