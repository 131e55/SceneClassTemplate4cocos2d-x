/*******************************************************************************
    File: <{SCENE_CLASS_NAME}>.h
*******************************************************************************/

#ifndef <{MACRO_NAME}>
#define <{MACRO_NAME}>

#include "cocos2d.h"

class <{SCENE_CLASS_NAME}> : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(<{SCENE_CLASS_NAME}>);

private:
    // シーンのサイズ (画面全体のサイズ) を取得するのは,
    // "Size hoge = Director::getInstance()->getVisibleSize();"
    // でできるけど長いうえによく使うので最初に取得してその後ずっと持っておくことにする
    cocos2d::Size _sceneSize;
};

#endif /* defined(<{MACRO_NAME}>) */