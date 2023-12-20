#include "widget.h"
#include "ui_widget.h"
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QApplication>
#include <QPixmap>
#include <QSize>
#include <QScreen>
#include <sec.h>
#include <QDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Home Page");

    QLabel *label=new QLabel(this);




    QPixmap pixmap(":/img/first_page.jpg");


    QScreen *screen = QGuiApplication::primaryScreen();
    QSize screenSize = screen->size();

    int screenWidth = screenSize.width();
    int screenHeight = screenSize.height();


    QPixmap scaledPixmap = pixmap.scaled(screenWidth, screenHeight, Qt::KeepAspectRatio);

    label->setPixmap(QPixmap(scaledPixmap));

    //int scaleFactor=screenSize/pixmap.size();

//    double scaleWidth=screenWidth/screenSize.width();
//    double scaleHeight=screenHeight/screenSize.height();


    QPushButton *btn1=new QPushButton(this);

    btn1->setText("Play Game");
    btn1->setFont(QFont("Lilita One",20));
    btn1->setGeometry(450,400,350,75);


    QPushButton *btn2 =new QPushButton(this);
    btn2->setText("Exit");

    btn2->setFont(QFont("Lilita One",20));
    //btn2->setFixedSize(w,h);
    btn2->setGeometry(450,500,350,75);

    connect(btn1,SIGNAL(clicked(bool)),this,SLOT(enter()));
    connect(btn2,SIGNAL(clicked(bool)),this,SLOT(close()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::enter()
{
    hide();
    sec change;
    //change.modall();
    change.setModal(true);
    change.showFullScreen();
    change.exec();


}

void Widget::exit()
{
    QCoreApplication::quit();
}

