class Solution {
private:

    bool leap(int year)
    {
        if(year%4==0 && (year%100!=0 || year%400==0))
        {
            return true;
        }
        return false;
    }

    int month(int m,int year)
    {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            return 31;
        }
        else if (m==4 || m==6 || m==9 || m==11)
        {
            return 30;
        }
        else
        {
            if(leap(year))
            {
                return 29;
            }
            else
            {
                return 28;
            }
        }
    }

    int days(string date)
    {
        int y=stoi(date.substr(0,4));
        int m=stoi(date.substr(5,2));
        int d=stoi(date.substr(8,2));
        int day=0;
        for(int i=1971;i<y;i++)
        {
            if(leap(i))
            {
                day+=366;
            }
            else
            {
                day+=365;
            }
        }
        for(int i=1;i<m;i++)
        {
            day+=month(i,y);
        }
        day+=d;
        return day;
    }
public:
    int daysBetweenDates(string date1, string date2) {
        int a=days(date1);
        int b=days(date2);
        return abs(a-b);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna