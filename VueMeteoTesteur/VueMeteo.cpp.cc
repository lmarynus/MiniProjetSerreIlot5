/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueMeteo.cpp
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 16:46
 */

#include "VueMeteo.h"
#include <iostream>
using namespace std;

VueMeteo::VueMeteo() {
    widget.setupUi(this);
}

VueMeteo::VueMeteo(BulletinMeteo *unBulletinMeteo){
    widget.setupUi(this);
    dernierBulletinMeteo = unBulletinMeteo;
}

VueMeteo::~VueMeteo() {
}

void VueMeteo::mettreAJour(){
    widget.temperature->setText(QString::number(dernierBulletinMeteo->getTemperature(), 10));
    widget.vitesseVent->setText(QString::number(dernierBulletinMeteo->getVitesseVent(), 10));
}

