#include "all.h"

using namespace std;

int main()
{
    time_t now = std::time(nullptr);
    const tm* nowlt = localtime(&now);

    std::stringstream s;
    s<<"20";
    s<<nowlt->tm_year-100;
    s<<"年";
    s<<nowlt->tm_mon+1;
    s<<"月";
    s<<nowlt->tm_mday;
    s<<"日";
    s<<nowlt->tm_hour;
    s<<"時";
    s<<nowlt->tm_min;
    s<<"分";
    s<<nowlt->tm_sec;
    s<<"秒";

    std::string result = s.str();

    string n = "\n";
    string number = "日めくり数え番号 : ";
    string version = "1.0.0";

    string himekuri = number + version;

    cout << n << result << n << n << himekuri << n << endl;

    return 0;
}
