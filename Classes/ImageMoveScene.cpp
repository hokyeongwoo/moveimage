#include "ImageMoveScene.h"
#include "ImageMoveLogic.h"

USING_NS_CC;

Scene* ImageMove::createScene()
{
	auto scene = Scene::create();
	auto layer = ImageMove::create();

	scene->addChild(layer);

	return scene;
}

bool ImageMove::init()
{
	/*
	if (!Layer::init())
		return false;

	auto game = ImageMoveLogic::create();
	this->addChild(game);
	game->setScale(3);
	game->setAnchorPoint(Vec2(0, 0));
	game->setPosition(0, 0);
	Director::getInstance()->getOpenGLView()->setFrameSize(game->getContentSize().width * 3, game->getContentSize().height * 3);

	this->schedule(schedule_selector(ImageMove::update), 1.0f / 60);

	return true;
	*/

	//////////////////////////////
	// 1. super init first
	if (!Layer::init())
	{
		return false;
	}

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	auto sprite = Sprite::create("Dog.png");

	// position the sprite on the center of the screen
	sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	//sprite->setPosition(Vec2(sprite->getContentSize().width / 2, sprite->getContentSize().height / 2));

	// add the sprite as a child to this layer
	this->addChild(sprite, 0);

	return true;
}

void ImageMove::update(float delta)
{
	for (int i = 0; i < (int)this->getChildren().size(); ++i)
		this->getChildren().at(i)->update(delta);
}
