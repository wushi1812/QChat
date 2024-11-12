#ifndef CONNECTION
#define CONNECTION
#include<QSqlDatabase>
#include<QSqlError>

static bool createConnection() //此函数在main.cpp里面运行
{
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QMYSQL"); //创建一个数据库

    db.setHostName("localhost");                            //本地地址（若要远程链接，输入相应的地址）
    db.setPort(3306);                                       //设置端口号
    db.setDatabaseName("chat");                            //设置数据库的名字
    db.setUserName("root");                                 //设置用户名字
    db.setPassword("123456");                               //设置密码
    if(!db.open())
    {
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());

        return false;
    }
    return true;
}

static bool closeConnection()
{
    QSqlDatabase::database().close();
    return 1;
}


#endif // CONNECTION

