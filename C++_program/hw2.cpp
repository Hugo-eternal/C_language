#include<iostream>
#include<cctype>
using namespace std;

int main(){
	
	char next;
	int i = 0 , word_count = 0, count[300] = {0};
	cout << "Enter the sentence: \n";
	cin.get(next);
	while (next != '\n'){
		if(!isspace(next)){
			count[toupper(next)]+=1;
			i++;
		}
		else{
			if(i!=0){
				word_count += 1;
				i = 0;
			}
		}
		cin.get(next);
	}
	word_count++;
	for(i = 'Z';i >= 'A';i--){
		if(count[i]>0){
			cout << char(i) << ' ' << count[i]<<endl;
		}
	}
	cout << word_count << " words."<<endl;
	return 0;
}
