#include "all.h"

int main(void)
{
    time_t now = time(nullptr);
    const tm* nowlt = localtime(&now);

    stringstream x;
    x<<u8"R0";
    x<<nowlt->tm_year-118;
    x<<u8".";
    x<<nowlt->tm_mon+1;
    x<<u8".";
    x<<nowlt->tm_mday;

    string result_r = x.str();

    stringstream y;
    y<<u8"令和";
    y<<nowlt->tm_year-118;
    y<<u8"年";
    y<<nowlt->tm_mon+1;
    y<<u8"月";
    y<<nowlt->tm_mday;
    y<<u8"日";

    string result_reiwa = y.str();


    stringstream z;
    z<<u8"20";
    z<<nowlt->tm_year-100;
    z<<u8"年";
    z<<nowlt->tm_mon+1;
    z<<u8"月";
    z<<nowlt->tm_mday;
    z<<u8"日：";
    z<<nowlt->tm_hour;
    z<<u8"時";
    z<<nowlt->tm_min;
    z<<u8"分";
    z<<nowlt->tm_sec;
    z<<u8"秒";

    string result = z.str();

    int redays = nowlt->tm_yday;
    int redays_mini = 365-redays;

    string tim = u8"時刻を表示:";
    string gantan = u8"来年の1月1日まであと: ";
    string aisatu = u8" 日です";
    string number = u8"日めくり数え番号 : ";
    string version = u8"1.0.0";
    string comma = u8" : ";

    string himekuri = number + version;

    cout << tim << result << endl;
    cout << gantan << redays_mini << aisatu << endl;
    cout << result_reiwa << comma << result_r << endl;
    cout << himekuri << endl;

    return 0;
}
