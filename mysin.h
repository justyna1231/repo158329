//definicja klasy MySin
class MySin
{
    private:
        double mX;

    public:
        MySin();
        MySin(double x);
        MySin(const MySin &obj);
        ~MySin();
        double value();
        void setX(double x);
        double getX() const;
        unsigned int factorial(unsigned int n);
        double power(double x, unsigned int y);
};