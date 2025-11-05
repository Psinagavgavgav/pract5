#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

string OpenFileDialog(const char* filter = "All Files\0*.*\0\0") {
    OPENFILENAMEA ofn;
    char fileName[MAX_PATH] = "";

    ZeroMemory(&ofn, sizeof(ofn));
    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = NULL;
    ofn.lpstrFilter = filter;
    ofn.lpstrFile = fileName;
    ofn.nMaxFile = MAX_PATH;
    ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST;

    if (GetOpenFileNameA(&ofn)) {
        return string(fileName);
    }
    return "";
}

bool copyFile(const string& from, const string& to) {
    ifstream src(from, ios::binary);
    ofstream dst(to, ios::binary);

    if (!src || !dst) return false;

    dst << src.rdbuf();
    return true;
}

int main() {
    setlocale(LC_ALL, "rus");

    // Базовая структура программы
    cout << "Программа для работы с водяными знаками" << endl;

    return 0;
}