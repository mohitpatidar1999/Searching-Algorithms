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
		
		int l=0; int h=s-1;
		while(l<=h){
		    int mid=(l+h)/2;
		    if(a[mid]==k){
		        flag=1;
		        System.out.println("Element found at index "+mid);
		        break;
		    }
		    else if(a[mid]>k) h=mid-1;
		    else l=mid+1;
		}
		if(flag==0)
		    System.out.println("Element not Found");
		
	}
}
