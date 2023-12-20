#include "sec.h"
#include "ui_sec.h"
#include <QLabel>
#include <QApplication>
#include <QPixmap>
#include <QScreen>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>


sec::sec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sec)
{
    ui->setupUi(this);
    setWindowTitle("Second Page");

    QPixmap pixmap(":/img/second page.jpg");


    QScreen *screen = QGuiApplication::primaryScreen();
    QSize screenSize = screen->size();

    int screenWidth = screenSize.width();
    int screenHeight = screenSize.height();


    QPixmap scaledPixmap = pixmap.scaled(screenWidth, screenHeight, Qt::KeepAspectRatio);

    QLabel *label=new QLabel(this);
    label->setPixmap(QPixmap(scaledPixmap));

    QLabel *l1=new QLabel(this);
    l1->setGeometry(250,40,87,75);
    //l1->setStyleSheet("QLabel{background-color:white}");

    QSize scale(125,125);
    QPixmap leftheart(":/img/right half hear.png");
    QPixmap leftheart_s=leftheart.scaled(scale, Qt::KeepAspectRatio);
    //leftheart_s.fill(Qt.transparent)
    l1->setStyleSheet("QLabel{ background-color: transparent;}");
    //l1->setPixmap(QPixmap(leftheart_s));

    QPixmap fullheart(":/img/fullheart.png");
    QPixmap fullheart_s=fullheart.scaled(scale,Qt::KeepAspectRatio);
    l1->setPixmap(QPixmap(fullheart_s));


    QLabel *l2=new QLabel(this);
    l2->setGeometry(337,40,87,75);
    l2->setPixmap(QPixmap(fullheart_s));

    QLabel *l3=new QLabel(this);
    l3->setGeometry(424,40,87,75);
    l3->setPixmap(QPixmap(fullheart_s));

    QLabel *l4=new QLabel(this);
    l4->setGeometry(511,40,87,75);
    l4->setPixmap(QPixmap(fullheart_s));

    QLabel *r1=new QLabel(this);
    r1->setGeometry(750,40,87,75);
    r1->setPixmap(QPixmap(fullheart_s));

    QLabel *r2=new QLabel(this);
    r2->setGeometry(837,40,87,75);
    r2->setPixmap(QPixmap(fullheart_s));

    QLabel *r3=new QLabel(this);
    r3->setGeometry(924,40,87,75);
    r3->setPixmap(QPixmap(fullheart_s));

    QLabel *r4=new QLabel(this);
    r4->setGeometry(1011,40,87,75);
    r4->setPixmap(QPixmap(fullheart_s));








    QLabel *guess =new QLabel(this);
    guess->setText("Enter your guess:");

    //guess->setAlignment(Qt::AlignCenter);
    guess->setFont(QFont("Lilita One",25));
    guess->setGeometry(465,400,400,40);
    //setStyleSheet("QLabel{background-color:white}");
    guess->setStyleSheet("QLabel{color:white}");



    QLineEdit *line=new QLineEdit(this);
    line->setGeometry(400,460,350,40);
    line->setText("Type one letter");
    line->setFont(QFont("Lilita One",15));
    line->setStyleSheet("QLineEdit{color:grey}");


    //    line->setStyleSheet("QLineEdit{"
    //                        ""
    //                        "}");

    QPushButton *btnline=new QPushButton(this);
    //pushbutton()
    btnline->setText("Ok");
    btnline->setFont(QFont("Lilita One",15));
    //btnline->resize(87.5,40);
    btnline->setGeometry(750,460,87.5,40);

    //hbox->addWidget(line);
    //hbox->addWidget(btnline);

    QLabel *hint=new QLabel(this);
    hint->setText("Hint: ");
    hint->setGeometry(400,510,350,30);
    hint->setFont(QFont("Lilita One",15));
    //hint->setStyleSheet("QLabel{background-color:white}");
    hint->setStyleSheet("QLabel{color:white}");

    //label->setGeometry(250,40,87,75);

    //    QLabel *labell1=new QLabel(this);
    //    labell1->setPixmap(QPixmap(":/img/right half hear.png"));

    QLabel *wrong=new QLabel(this);
    wrong->setGeometry(370,620,375,50);
    //wrong->setStyleSheet("QLabel{background-color:white}");
    wrong->setText("Wrong Guesses: ");
    wrong->setFont(QFont("Lilita One",20));


}

sec::~sec()
{
    delete ui;
}
