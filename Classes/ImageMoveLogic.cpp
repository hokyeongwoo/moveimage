#include "ImageMoveLogic.h"

ImageMoveLogic * ImageMoveLogic::create()
{
	ImageMoveLogic *MoveLogic = new (std::nothrow) ImageMoveLogic();
	if (MoveLogic && MoveLogic->init())
	{
		MoveLogic->autorelease();
		return MoveLogic;
	}
	CC_SAFE_DELETE(MoveLogic);
	return nullptr;
}

void ImageMoveLogic::update(float delta)
{

}

bool ImageMoveLogic::init()
{
	/*
	srand(time(NULL));

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	this->ImageLoad = Sprite::create("Dog.png");

	this->addChild(ImageLoad);

	ImageLoad->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

	initWithTexture(nullptr, this->getTextureRect());
	*/
	return true;
}
