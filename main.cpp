#include "all.h"

int main(void)
{
    time_t now = time(nullptr);
    const tm* nowlt = localtime(&now);

    stringstream x;
    x<<"R0";
    x<<nowlt->tm_year-118;
    x<<".";
    x<<nowlt->tm_mon+1;
    x<<".";
    x<<nowlt->tm_mday;

    string result_r = x.str();

    stringstream y;
    y<<"—ß˜a";
    y<<nowlt->tm_year-118;
    y<<"”N";
    y<<nowlt->tm_mon+1;
    y<<"Œ";
    y<<nowlt->tm_mday;
    y<<"“ú";

    string result_reiwa = y.str();


    stringstream z;
    z<<"20";
    z<<nowlt->tm_year-100;
    z<<"”N";
    z<<nowlt->tm_mon+1;
    z<<"Œ";
    z<<nowlt->tm_mday;
    z<<"“ú" << " : ";
    z<<nowlt->tm_hour;
    z<<"";
    z<<nowlt->tm_min;
    z<<"•ª";
    z<<nowlt->tm_sec;
    z<<"•b";

    string result = z.str();

    int redays = nowlt->tm_yday;
    int redays_mini = 365-redays;

    string tim = "Œ»İ : ";
    string gantan = "—ˆ”N‚Ì1Œ1“ú‚Ü‚Å‚ ‚Æ : ";
    string aisatu = " “ú‚Å‚·";
    string number = "“ú‚ß‚­‚è”‚¦”Ô† : ";
    string version = "1.0.0";
    string comma = " : ";

    string himekuri = number + version;

    cout << tim << result << endl;
    cout << gantan << redays_mini << aisatu << endl;
    cout << result_reiwa << comma << result_r << endl;
    cout << himekuri << endl;

    return 0;
}
