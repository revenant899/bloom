//#include <iostream>
//using namespace std;
//
//void pvt(char symbol, int length) {
//    for (int i = 0; i < length; i++) {
//        cout << symbol;
//    }
//    cout << endl;
//}
//
//void pgt(char symbol, int length) {
//    for (int i = 0; i < length; i++) {
//        cout << symbol << endl;
//    }
//}
//
//int main() {
//    int choice;
//    char symbol;
//    int length = 10;
//
//    do {
//        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
//        cout << "|  1: ������������� ���   |" << endl;
//        cout << "|  2: ����������� ���     |" << endl;
//        cout << "|  3: �����                 |" << endl;
//        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
//        cout << "������� �����: ";
//        cin >> choice;
//
//        if (choice == 1 || choice == 2) {
//            cout << "������ ������: ";
//            cin >> symbol;
//        }
//
//        switch (choice) {
//        case 1:
//            pgt(symbol, length);
//            break;
//        case 2:
//            pvt(symbol, length);
//            break;
//        case 3:
//            cout << "����� � ��������." << endl;
//            break;
//        default:
//            cout << "������� ����. ��������� �� ���." << endl;
//            break;
//        }
//
//    } while (choice != 3);
//
//    return 0;
//}







//#include <iostream>
//
//using namespace std;
//
//int rollDice() {
//    int dice1 = rand() % 6 + 1;
//    int dice2 = rand() % 6 + 1;
//    return dice1 + dice2;
//}
//
//int main() {
//    srand(static_cast<unsigned>(time(0)));
//
//    int us = 0, sc = 0;
//
//    cout << "��� ������. �� � ����'���� �� ���� ������ ��� ������.\n";
//    cout << "���������� ���, � ���� ���� ����� ���� 3 �����.\n\n";
//
//    for (int round = 1; round <= 3; ++round) {
//        cout << "����� " << round << ":\n";
//
//        cout << "��� ���. �������� Enter ��� �����.";
//        cin.get();;
//        int userRoll = rollDice();
//        cout << "�� ��������: " << userRoll << "\n";
//        us += userRoll;
//
//        int computerRoll = rollDice();
//        cout << "����'���� �������: " << computerRoll << "\n";
//        sc += computerRoll;
//
//        cout << "�������� ������� - ��: " << us << " ����'����: " << sc << "\n\n";
//    }
//
//    cout << "��� ��������!\n";
//    if (us > sc) {
//        cout << "�� ���������! ���� ����� �����: " << us << "\n";
//    }
//    else if (sc > us) {
//        cout << "������ ����'����! ���� ���� �����: " << sc << "\n";
//    }
//    else {
//        cout << "ͳ���! ������ ����� �������� ����: " << us << "\n";
//    }
//
//    return 0;
//}

