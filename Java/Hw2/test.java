package homework_2;

public class test {
	public static void main(String[] args){
		Stack test = new Stack(50);
		test.push('a');
		test.push('b');
		test.push('c');
		test.push('2');
		test.push('6');
		test.push('9');
		System.out.println("Size of stack is: " + test.getTop() );
		test.displayStack();
		System.out.println("pop item from stack: " + test.pop() );
		test.displayStack();
		System.out.println("peek: " + test.peek() );
		test.displayStack();
	}
	
	
}
