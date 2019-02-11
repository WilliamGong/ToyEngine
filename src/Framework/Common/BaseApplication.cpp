/*
 * @Author: William Gong 
 * @Date: 2019-02-11 09:57:13 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-11 09:57:13 
 */
#include "BaseApplication.h"

int ToyEngine::BaseApplication::initialize() {
    m_bQuit = false;

    return 0;
}

void ToyEngine::BaseApplication::finalize() {}

void ToyEngine::BaseApplication::tick() {}

bool ToyEngine::BaseApplication::isQuit() {
    return m_bQuit;
}