#include<iostream>//这个程序有问题// 
 using namespace std;
 main()
 {
 	int day,month,year,sum,leap;
 	cout<<"please in put year,month,day\n";
 	cin>>year>>month>>day;
 	switch(month)
 	{
 	 	case 1:sum=0;break;
 		case 2:sum=31;break;
 		case 3:sum=59;break;
 		case 4:sum=90;break;
 		case 5:sum=120;break;
 		case 6:sum=151;break;
 		case 7:sum=181;break;
 		case 8:sum=212;break;
 		case 9:sum=243;break;
 		case10:sum=273;break;
 		case11:sum=304;break;
 		case12:sum=334;break;
 		default:cout<<"date error";break;
	  }
	  sum=sum+day; 
 	if(year%4==0&&year%100!=0||year%100==0&&year%400==0)
 	leap=1;
 	else
 	leap=0;
 	if(leap==1&&month>2)
 	sum--;
 	cout<<"the day is"<<sum<<"th day."<<endl;
}
