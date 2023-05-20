#ifndef TRIANGLE_H
    #define TRIANGLE_H
    #include "../lib/Shape.hpp"

    class Triangle : public Shape {
        private:
        double a = 0.0, b = 0.0, c = 0.0;

        public:
        // Constructors
        Triangle(const std::string& _name);
        Triangle(const std::string& _name, double _a, double _b, double _c);

        // Getters
        const double& getA() const;
        const double& getB() const;
        const double& getC() const;
        const std::string& getName() const;

        // Setters
        void setA(double _a);
        void setB(double _b);
        void setC(double _c);
        void setName(const std::string& _name);

        // Methods
        double calculateArea() const override;
        double calculatePerimeter() const override;
        
        // Helpers
        void printInfos() const override;
    };

#endif
