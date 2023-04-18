#ifndef CIRCLE_H
    #define CIRCLE_H
    #include <iostream>
    using namespace std;

    class Circle {
        // Members
        private: 
        double r = 0.0;
        string name;

        // Constructors
        public:
        Circle(string _name);
        Circle(string _name, double _r);

        // Methods
        // Getters
        const double& getR() const ;
        const string& getName() const ;

        // Setters
        void setR(double _r);
        void setName(string _name);

        // https://stackoverflow.com/questions/51615363/how-to-write-c-getters-and-setters


        // Helpers
        void printInfos();
    };
#endif