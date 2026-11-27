class box{
private:
    double length;
    double widht;
    double height;
public:
    box(double _lenght, double _widht, double _height):
        length(_lenght), widht(_widht), height(_height){
        }
    double V();
    double S();
};

double box::V(){
    return length * widht * height;
}

double box::S(){
    return (2 * ((length * widht) + (widht * height) + (length * height)));
}
