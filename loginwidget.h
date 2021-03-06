#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QUrlQuery>
#include <QDebug>
#include "playerwidget.h"

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = 0);
    ~LoginWidget();
    QString getToken();
    QString getUID();
    QString getEXPIRES_IN();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginWidget *ui;
    int APP_ID;
    QString PERMISSIONS,DISPLAY,API_VERSION,REDIRECT_URI;
    QString TOKEN, UID, EXPIRES_IN;
    QUrlQuery authUrl;
    PlayerWidget *playerWidget;

public slots:
    void fishing(QUrl url);
};

#endif // LOGINWIDGET_H
