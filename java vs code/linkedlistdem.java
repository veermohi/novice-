import java.util.*;

public class linkedlistdem {
    public static void main(String[] args) {
        LinkedList< String > ll  = new LinkedList < String >();

        ll.add("hi");
        ll.add("1");
        ll.add("hellooww");

        ll.remove(1);

        ll.add("c");
        ll.add("loop");

        for(Object e:ll) {
            System.out.println(e);
        }


        //System.out.println(ll);
    }
}
