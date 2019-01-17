/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 13:54
 */

#include "VuePrincipale.h"

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    laVueMeteo = new VueMeteo();
    widget.meteo->addWidget(laVueMeteo);
    
}

VuePrincipale::~VuePrincipale() {
}

void VuePrincipale::mettreAJour() {
    laVueMeteo->mettreAJour();
}

VueMeteo* VuePrincipale::getLaVueMeteo() {
    return laVueMeteo;
}