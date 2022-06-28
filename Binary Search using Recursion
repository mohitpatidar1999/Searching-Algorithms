import java.util.*;

public class Main
{
    static int binarySearchUsingRecursion(int ar[], int l, int h, int k){
        
        int mid=(l+h)/2;
        if(l==h||l>h){
            if(ar[mid]==k)
                return mid;
            else
                return -1;
        }
        else if(ar[mid]>k) return binarySearchUsingRecursion(ar,l,mid-1,k);
        else return binarySearchUsingRecursion(ar,mid+1,h,k);
        
        
    }
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
		int r=binarySearchUsingRecursion(a,l,h,k);
		if(r<0)
		    System.out.println("Element Not Found");
		else
		    System.out.println("Element Found at Index "+r);
		
	}
}
