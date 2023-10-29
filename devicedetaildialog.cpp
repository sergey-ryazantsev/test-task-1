#include "devicedetaildialog.h"
#include "ui_devicedetaildialog.h"

DeviceDetailDialog::DeviceDetailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeviceDetailDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    //
    connect(ui->exitButton,&QPushButton::clicked,this,&DeviceDetailDialog::accept);
    connect(ui->closeButton,&QPushButton::clicked,this,&DeviceDetailDialog::accept);
}

DeviceDetailDialog::~DeviceDetailDialog()
{
    delete ui;
}
