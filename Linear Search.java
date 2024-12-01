import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int flag=0;
	    Scanner sc=new Scanner(System.in);
		System.out.println("Enter size of array");
		int s = sc.nextInt();
		System.out.println("Enter elements of array");
		int a[]=new int[s];
		for(int i=0;i<s;i++){
		    a[i]=sc.nextInt();
		}
		System.out.println("Enter element to search in the array");
		int k = sc.nextInt();
		for(int i=0;i<s;i++){
		    if(a[i]==k){
		        System.out.println("Element found at position "+i);
		        flag=1;
		        break;
		    }
		}
		if(flag==0)
		System.out.println("Element not found");
	}
}
