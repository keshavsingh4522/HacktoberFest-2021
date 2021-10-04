//Code 1

import java.util.Scanner;

public class PrimeNumber1
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter a number check :");
		int number = scanner.nextInt();
		
		if(checkPrime(number))
			System.out.println(number +" is a Prime Number");
		else
			System.out.println(number +" is not a Prime Number");
	}
	
	public static boolean checkPrime(int n)
	{
		if(n <= 1)
			return false;
		
		for(int i=2; i<= n/2; i++)
		{
			if((n % i) == 0)
				return false;
		}
		
		return true;
	}
}



//Code 2

import java.util.Scanner;

public class PrimeNumber2
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter a number check :");
		int number = scanner.nextInt();
		
		if(checkPrime(number))
			System.out.println(number +" is a Prime Number");
		else
			System.out.println(number +" is not a Prime Number");
	}
	
	public static boolean checkPrime(int n)
	{
		if(n <= 1)
			return false;
		
		int i=2;
		while(i<= n/2)
		{
			if((n % i) == 0)
				return false;
			i++;
		}
		
		return true;
	}
}
