/*-----------------------------------main cpp-----------------------------------------*/
#include "widget.h"

#include <QApplication>

// main 함수 정의
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // QApplication 인스턴스 생성
    Widget w; // Widget 인스턴스 생성
    w.show(); // Widget 표시
    return a.exec(); // 이벤트 루프 시작
}

