 #include <stdio.h> 

//Function to find length 
int string_length(char* str) 
{ 
	int length = 0; 
	while (*str != '\0') { 
		length++; 
		str++; 
	} 

	return length; 
} 

// Driver code
int main() 
{ 
	char str1[100]; 

    printf("Enter a string : ");
    gets(str1);

	printf("Length of the String: %d", 
		string_length(str1)); 
	return 0; 
}