#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <array>

using namespace std;
/**
 * 计算星座
 * 
 * 疑难
 * 为什么cout为什么不能嵌入三元运算符
*/
int main(int argc, char const *argv[])
{
  string father_name, daughter_name;
  int birth_month, birth_date;
  //星座
  string daughter_constell;

  //基本信息 体力、智力、魅力、道德、气质
  int baseinfo[5];
  
  struct bbb
  {
    short tl;
  };
  
  string constells[12][2] = {
      {"山羊座", "水瓶座"}, //一月
      {"水瓶座", "双鱼座"}, //二月
      {"双鱼座", "白羊座"}, //三月
      {"白羊座", "金牛座"}, //四月
      {"金牛座", "双子座"}, //五月
      {"双子座", "巨蟹座"}, //六月
      {"巨蟹座", "狮子座"}, //七月
      {"狮子座", "处女座"}, //八月
      {"处女座", "天秤座"}, //九月
      {"天秤座", "天蝎座"}, //十月
      {"天蝎座", "射手座"}, //十一月
      {"射手座", "山羊座"}, //十二月
  };
  //跨星座日期，c++ 11可以不用等号
  int constell_dates[12]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};

  //输入
  cout << "姓名：";
  cin >> daughter_name;
  cout << "生日(MM DD)：";
  cin >> birth_month >> birth_date;

  //计算
  int index = (birth_date - constell_dates[birth_month - 1]) >= 0 ? 1 : 0;
  daughter_constell = constells[birth_month - 1][index];

  //输出
  cout << "个人信息：" << endl;
  cout << "姓名：" << daughter_name << endl;
  cout << "生日：" << birth_month << "-" << birth_date << endl;
  cout << "星座：" << daughter_constell << endl;

  return 0;
}