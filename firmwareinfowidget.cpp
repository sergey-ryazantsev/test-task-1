#include "firmwareinfowidget.h"
#include "ui_firmwareinfowidget.h"

FirmwareInfoWidget::FirmwareInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FirmwareInfoWidget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    //
    connect(ui->detailButton,&QPushButton::clicked,this,[this]() {
        QFrame *f = new QFrame(this);
        f->setStyleSheet("background-color:rgba(0,0,0,50);"
                         "border-radius: 8px;");
        f->setGeometry(0,0,width(),height());
        f->show();
        //
        std::unique_ptr<DeviceDetailDialog> dialog = std::make_unique<DeviceDetailDialog>();
        dialog->move((pos().x() + width() / 2) - dialog->width() / 2,
                      (pos().y() + height() / 2) - dialog->height() / 2);
        dialog->setModal(true);
        dialog->exec();
        //
        f->deleteLater();
    });
}

FirmwareInfoWidget::~FirmwareInfoWidget()
{
    delete ui;
}

