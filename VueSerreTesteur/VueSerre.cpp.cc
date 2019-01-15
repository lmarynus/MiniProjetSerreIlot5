/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 16:17
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAJour(){
    widget.temperature->setText("30") ;
    widget.hygrometrie->setText("20") ;
    widget.luminosite->setText("10") ;
    widget.positionOuvrants->setText("5");
}