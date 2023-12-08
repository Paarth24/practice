class cuboid{
    public :
        double length{1};
        double breadth{1};
        double height{1};
    public :

        // cuboid(){
        //     length = 2;
        //     breadth = 2;
        //     height = 2;
        // }

        cuboid() = default;

        cuboid(double l, double b, double h){
            length = l;
            breadth = b;
            height = h;
        }
        
        double volume(){
            return(length*breadth*height);
        }
};