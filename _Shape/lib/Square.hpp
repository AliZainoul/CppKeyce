#ifndef SQUARE_H
    #define SQUARE_H

    #include <iostream>
    #include "../lib/Shape.hpp"

    class Square : public Shape {
        private:
        double l = 0.0;

        public:
        // Constructors
        Square(const std::string& _name);
        Square(const std::string& _name, double _l);

        // Getters
        const double& getL() const;
        const std::string& getName() const;

        // Setters
        void setL(double _l);
        void setName(const std::string& _name);

        // Methods
        double calculateArea() const override;
        double calculatePerimeter() const override;
        
        // Helpers
        void printInfos() const override;
    };

#endif
