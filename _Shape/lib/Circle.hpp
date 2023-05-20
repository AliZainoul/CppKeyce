#ifndef CIRCLE_H
    #define CIRCLE_H

    #include "../lib/Shape.hpp"
    #include <iostream>
    #include <string>

    class Circle : public Shape {
        private:
        double r = 0.0;

        public:
        // Constructors
        Circle(const std::string& _name);
        Circle(const std::string& _name, double _r);

        // Getters
        const double& getR() const;
        const std::string& getName() const;

        // Setters
        void setR(double _r);
        void setName(const std::string& _name);

        // Methods
        double calculatePerimeter() const override;
        double calculateArea() const override;

        // Helpers
        void printInfos() const override;
    };

#endif
