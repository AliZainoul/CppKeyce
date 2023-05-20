#ifndef SHAPE_H
    #define SHAPE_H
    #include <string>
    class Shape {
        protected:
        std::string name;

        public:
        // Constructors
        Shape();
        explicit Shape(const std::string& _name);

        // Virtual methods
        virtual double calculateArea() const = 0;
        virtual double calculatePerimeter() const = 0;

        // Getters
        const std::string& getName() const;

        // Setters
        void setName(const std::string& _name);

        // Helpers
        virtual void printInfos() const = 0;
    };
#endif
