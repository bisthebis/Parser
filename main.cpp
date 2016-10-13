#include <QtCore>

int main (int argc, char** argv)
{
	QCoreApplication app(argc, argv);
	

    QTimer::singleShot(500, [](){
        auto args = qApp->arguments();
        for (auto arg : args)
            qDebug() << arg;

        qApp->quit();});

	return app.exec();

}
