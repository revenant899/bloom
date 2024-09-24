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
//        cout << "|  1: Горизонтальна лінія   |" << endl;
//        cout << "|  2: Вертикальна лінія     |" << endl;
//        cout << "|  3: Вихід                 |" << endl;
//        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
//        cout << "Виберіть опцію: ";
//        cin >> choice;
//
//        if (choice == 1 || choice == 2) {
//            cout << "Введіть символ: ";
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
//            cout << "Вихід з програми." << endl;
//            break;
//        default:
//            cout << "Невірний вибір. Спробуйте ще раз." << endl;
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
//    cout << "Гра Кубики. Ви і комп'ютер по черзі кидаєте два кубики.\n";
//    cout << "Переможець той, у кого сума більше після 3 кидків.\n\n";
//
//    for (int round = 1; round <= 3; ++round) {
//        cout << "Раунд " << round << ":\n";
//
//        cout << "Ваш хід. Натисніть Enter для кидка.";
//        cin.get();;
//        int userRoll = rollDice();
//        cout << "Ви викинули: " << userRoll << "\n";
//        us += userRoll;
//
//        int computerRoll = rollDice();
//        cout << "Комп'ютер викинув: " << computerRoll << "\n";
//        sc += computerRoll;
//
//        cout << "Поточний рахунок - Ви: " << us << " Комп'ютер: " << sc << "\n\n";
//    }
//
//    cout << "Гра закінчена!\n";
//    if (us > sc) {
//        cout << "Ви перемогли! Сума ваших кидків: " << us << "\n";
//    }
//    else if (sc > us) {
//        cout << "Переміг комп'ютер! Сума його кидків: " << sc << "\n";
//    }
//    else {
//        cout << "Нічия! Обидва мають однакову суму: " << us << "\n";
//    }
//
//    return 0;
//}

