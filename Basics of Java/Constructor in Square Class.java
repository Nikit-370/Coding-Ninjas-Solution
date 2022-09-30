class Square {
    int length;
    Square (){
    length = 10;
}
Square(int l){
    length = l;
}
int printArea(){
    return length *length;
   }
}
    
class Solution {
    public static void main(String args[]) {
        Square s1 = new Square(); 
        System.out.println(s1.printArea());
        Square s2 = new Square(7); 
        System.out.println(s2.printArea());
    }
}