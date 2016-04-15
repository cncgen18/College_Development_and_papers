package homework_2;

public class Stack {
	public char[] stack;
	private int top;
	private int max;
	
	Stack(){}
	
	Stack(int max){
		stack = new char[max];
		top = 0;
	}
	
	public void setMax(int x){
		max = x;
	}
	
	public void setTop(int x){
		top = x;
	}
	
	public int getMax(){
		return max;
	}
	public int getTop(){
		return top;
	}
	
	public Boolean isFull(){
		return(top == max - 1);
	}
	public Boolean isEmpty(){
		return(top == -1);
	}
	public void push(char x){
		if (isFull() == false){
			stack[top] = x;
			top++;
		}
		else
			System.out.println("Stack is full!");
	}
	public char pop(){
		if (!isEmpty()){
			top--;
			return stack[top];
		}
		else{
			System.out.println("Stack is empty!");
			return 0;
		}
	}
	public char peek(){
		if (!isEmpty()){
			return stack[top - 1];
		}
		else
			return 0;
	}
	public void displayStack(){
		for(int i = 0; i < top; i++){
			System.out.print(stack[i] + " ");
		}
		System.out.println("");
	}
}
