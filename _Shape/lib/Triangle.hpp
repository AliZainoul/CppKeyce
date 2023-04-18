#ifndef TRIANGLE_H
    #define TRIANGLE_H
    #include <iostream>
    using namespace std;

    class Triangle {
        // Members
        private:
        double a = 0.0, b = 0.0, c = 0.0;
        string name;

        // Constructors
        public:
        Triangle(string _name);
        Triangle(string _name, double _a, double _b, double _c);

        // Methods
        // Getters
        const double& getA() const;
        const double& getB() const;
        const double& getC() const;
        const string& getName() const;

        // Setters
        void setA(double _a);
        void setB(double _b);
        void setC(double _c);
        void setName(string _name);

        // https://stackoverflow.com/questions/51615363/how-to-write-c-getters-and-setters


        // Helpers
        void printInfos();
    };
#endif