#include "mainwindow.h"
#include <QApplication>

#include <iostream>
#include "Accel/Accel.h"
#include "Climb/Climb.h"
#include "Cruise/Cruise.h"
#include "Descent/Descent.h"
#include "Misc/RouteFunctions.h"
#include "Misc/Wind.h"
#include "Misc/ISA.h"
#include <localinit.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.newtext("Hello World");   //Schreibt Hello World ins Lineedit

    // try to load data for testing
    //std::cout << argv[0] << std::endl;

    TClimbDataSet ClimbData(1);
    ClimbData.LoadData(CLIMBDATAPATH, ';', '\n');
    std::cout << "Climb Loaded..." << std::endl;
    w.addtomemo("Climb Loaded...");                 //Gibt Climb Loaded... ins Memo
    TAccelDataSet AccelData(1);
    AccelData.LoadData(ACCELDATAPATH, ';', '\n');
    std::cout << "Accel Loaded..." << std::endl;
    w.addtomemo("Accel Loaded...");
    TCruiseDataSet CruiseData(1);
    CruiseData.LoadData(CRUISEDATAPATH, ';', '\n');
    std::cout << "Cruise Loaded..." << std::endl;
    w.addtomemo("Cruise Loaded...");
    TDescentDataSet DescentData(1);
    DescentData.LoadData(DESCENTDATAPATH, ';', '\n');
    std::cout << "Descent Loaded..." << std::endl;
    w.addtomemo("Descent Loaded...");

    return a.exec();
}
