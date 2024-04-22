#include <iostream>

enum seasons 
{   
    ������ = 1,
    �������,
    ����,
    ������,
    ���,
    ����,
    ����,
    ������,
    ��������,
    �������,
    ������,
    �������
};

std::string seasonsToString(seasons num) 
{
    switch (num) 
    {
        case ������: return "������";
        case �������: return "�������";
        case ����: return "����";
        case ������: return "������";
        case ���: return "���";
        case ����: return "����";
        case ����: return "����";
        case ������: return "������";
        case ��������: return "��������";
        case �������: return "�������";
        case ������: return "������";
        case �������: return "�������";
    };
    return "ERROR";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    seasons season;
    bool F = 1;
    int i;
    do {
        std::cin >> i;
        if (i == 0) {
            F = 0;
        }
        else if(i < 0 || i > 12)
        {
            std::cout << "ERROR" << std::endl;
        }
        else 
        {
            season = static_cast<seasons>(i);
            std::cout << seasonsToString(season) << std::endl;
        }
    } while (F);
    return 0;
}