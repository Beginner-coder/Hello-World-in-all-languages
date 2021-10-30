abstract class parent1{
    abstract void hello(int num);
}
class child extends parent1{
    @Override
    void hello(int num){
        System.out.println("Hello" + num);
    }
}

public class abstractClass{
    public static void main(String[] args) {
        child p=new child();
        p.hello(7);
    }
}