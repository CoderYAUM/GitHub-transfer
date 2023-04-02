public class Circle implements Shape{

    private double x;
    private double y;
    private double r;

    public Circle(double x, double y, double r)
    {
        this.x = x;
        this.y = y;
        this.r = r;
    }

    public double area()
    {
        return Math.PI*this.r*this.r;
    }

    public double getX() {
        return this.x;
    }

    public double getY() {
        return this.y;
    }

    public void show() {
        System.out.print("("+this.x+","+this.y+")"+this.area());
    }
}

