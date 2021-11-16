#include <iostream>

using namespace std;

string id[20],name[20],department[20],birth[20],gender[20],religion[20],blood[20],address[20],number[20];

int total=0;

void enter()
{
    int ch=0;

			cout<<"How many students do u want to enter??"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

                {

                    cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

                    cout<<"Enter Student ID ";

                    cin>>id[i];

                    cout<<"Enter Name ";

                    cin>>name[i];

                    cout<<"Enter Department ";

                    cin>>department[i];

                    cout<<"Enter Date of Birth ";

                    cin>>birth[i];

                    cout<<"Enter Gender ";

                    cin>>gender[i];

                    cout<<"Enter Religion ";

                    cin>>religion[i];

                    cout<<"Enter Blood Group ";

                    cin>>blood[i];

                    cout<<"Enter Address ";

                    cin>>address[i];

                    cout<<"Enter Phone Number ";

                    cin>>number[i];

                }

	    	}

	    	else

	    	{

            for(int i=total;i<ch+total;i++)

                {

                    cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

                    cout<<"Enter Student ID ";

                    cin>>id[i];

                    cout<<"Enter Name ";

                    cin>>name[i];

                    cout<<"Enter Department ";

                    cin>>department[i];

                    cout<<"Enter Date of Birth ";

                    cin>>birth[i];

                    cout<<"Enter Gender ";

                    cin>>gender[i];

                    cout<<"Enter Religion ";

                    cin>>religion[i];

                    cout<<"Enter Blood Group ";

                    cin>>blood[i];

                    cout<<"Enter Address ";

                    cin>>address[i];

                    cout<<"Enter Phone Number ";

                    cin>>number[i];

                }

			total=ch+total;

			}
}

void show()
{
    if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string stid;

				cout<<"Enter ID"<<endl;

				cin>>stid;

				for(int i=0;i<total;i++)

				{

					if(stid==id[i])

					{
					    cout<<"Student ID "<<id[i]<<endl;

						cout<<"Name "<<name[i]<<endl;

						cout<<"Department "<<department[i]<<endl;

	    	        	cout<<"Date of Birth "<<birth[i]<<endl;

	    		        cout<<"Gender "<<gender[i]<<endl;

	    		        cout<<"Religion "<<religion[i]<<endl;

	    	        	cout<<"Blood Group "<<blood[i]<<endl;

	    	        	cout<<"Address "<<address[i]<<endl;

	    	        	cout<<"Phone number "<<number[i]<<endl;

					}

				}

        }

}

void update()
{
    if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string stid;

				cout<<"Enter the Student ID which you want to update"<<endl;

				cin>>stid;

					for(int i=0;i<total;i++)

				{

					if(stid==id[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Student ID "<<id[i]<<endl;

						cout<<"Name "<<name[i]<<endl;

						cout<<"Department "<<department[i]<<endl;

	    	        	cout<<"Date of Birth "<<birth[i]<<endl;

	    		        cout<<"Gender "<<gender[i]<<endl;

	    		        cout<<"Religion "<<religion[i]<<endl;

	    	        	cout<<"Blood Group "<<blood[i]<<endl;

	    	        	cout<<"Address "<<address[i]<<endl;

	    	        	cout<<"Phone number "<<number[i]<<endl;

	    	        	cout<<"\nEnter new data"<<endl<<endl;

                            cout<<"Enter Student ID ";

                            cin>>id[i];

                            cout<<"Enter Name ";

                            cin>>name[i];

                            cout<<"Enter Department ";

                            cin>>department[i];

                            cout<<"Enter Date of Birth ";

                            cin>>birth[i];

                            cout<<"Enter Gender ";

                            cin>>gender[i];

                            cout<<"Enter Religion ";

                            cin>>religion[i];

                            cout<<"Enter Blood Group ";

                            cin>>blood[i];

                            cout<<"Enter Address ";

                            cin>>address[i];

                            cout<<"Enter Phone Number ";

                            cin>>number[i];

                }

            }

        }

}

void deleteracord()
{
    if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string Stid;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>>Stid;

				for(int i=0;i<total;i++)

				{

					if(Stid==id[i])

					{

						for(int j=i;j<total;j++)

						{

						id[j]=id[j+1];

						name[j]=name[j+1];

					    department[j]=department[j+1];

						birth[j]=birth[j+1];

						gender[j]=gender[j+1];

						religion[j]=religion[j+1];

						blood[j]=blood[j+1];

						address[j]=address[j+1];

						number[j]=number[j+1];

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}

			else

			{

				cout<<"Invalid input";

			}
	}

}

int main()
{
    int value;
    while(true)
    {
        cout<<"Press 1 to add data"<<endl;
        cout<<"Press 2 to show data"<<endl;
        cout<<"Press 3 to update data"<<endl;
        cout<<"press 4 to delete data"<<endl;
        cout<<"Press 5 to exit"<<endl;
        cin>>value;
        switch(value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            update();
            break;
        case 4:
            deleteracord();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
}
