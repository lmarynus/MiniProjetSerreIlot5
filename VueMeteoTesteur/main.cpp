/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 16:23
 */

#include <QApplication>

#include "VueMeteo.h"
#include "../ClassesMetier/BulletinMeteo.h"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    BulletinMeteo *unBulletinMeteo = new BulletinMeteo();
    VueMeteo *uneVueMeteo = new VueMeteo(unBulletinMeteo);
    unBulletinMeteo->setTemperature(25);
    unBulletinMeteo->setVitesseVent(50);
    
    
    
    uneVueMeteo->mettreAJour();
    uneVueMeteo->show();

    return app.exec();
}
