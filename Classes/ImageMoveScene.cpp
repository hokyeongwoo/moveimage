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

	// Method 1 Start
	//////////////////////////////
	// 1. super init first
	if (!Layer::init())
	{
		return false;
	}

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	//auto sprite = Sprite::create("Player.png", CCRectMake(0, 0, 27, 40));

	// position the sprite on the center of the screen
	//sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	//sprite->setPosition(Vec2(sprite->getContentSize().width / 2, sprite->getContentSize().height / 2));

	auto sprite = Sprite::create("mysprite.png");
	sprite->setPosition(Vec2(200, 256));

	// add the sprite as a child to this layer
	this->addChild(sprite, 0);
	// Method 1 End

	// Method 2 Start
	/*
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	CCSprite* PlayerSprite = CCSprite::create("Player.png", CCRectMake(0, 0, 27, 40));
	PlayerSprite->setPosition(ccp(PlayerSprite->getContentSize().width/2, winSize.height/2));

	this->addChild(PlayerSprite);
	*/
	// Method 2 End

	/*
	// Move a sprite to a specific location over 2 seconds.
	auto moveTo = MoveTo::create(2, Vec2(50, 0));	// 대각선으로 이동

	sprite->runAction(moveTo);

	// Move a sprite 50 pixels to the right, and 0 pixels to the top over 2 seconds.
	auto moveBy = MoveBy::create(2, Vec2(50, 0));	// 앞으로 이동

	sprite->runAction(moveBy);
	*/

	/*
	// Rotates a Node to the specific angle over 2 seconds
	auto rotateTo = RotateTo::create(2.0f, 40.0f);
	sprite->runAction(rotateTo);

	// Rotates a Node clockwise by 40 degree over 2 seconds
	auto rotateBy = RotateBy::create(2.0f, 40.0f);
	sprite->runAction(rotateBy);
	*/


	// Scale uniformly by 3x over 2 seconds
	//auto scaleBy = ScaleBy::create(2.0f, 3.0f);
	//sprite->runAction(scaleBy);
	
	// Scale to uniformly to 3x over 2 seconds
	//auto scaleTo = ScaleTo::create(2.0f, 3.0f);
	//sprite->runAction(scaleTo);

	/*
	// Scale X by 5 and Y by 3x over 2 seconds
	auto scaleBy = ScaleBy::create(2.0f, 3.0f, 3.0f);
	sprite->runAction(scaleBy);

	// Scale X to 5 and Y to 3x over 2 seconds
	auto scaleTo = ScaleTo::create(2.0f, 3.0f, 3.0f);
	sprite->runAction(scaleTo);
	*/

	/*
	// fades in the sprite in 1 seconds
	auto fadeIn = FadeIn::create(1.0f);
	sprite->runAction(fadeIn);

	// fades out the sprite in 2 seconds
	auto fadeOut = FadeOut::create(2.0f);
	sprite->runAction(fadeOut);
	*/

	// Tints a node to the specified RGB values
	auto tintTo = TintTo::create(2.0f, 120.0f, 232.0f, 254.0f);
	sprite->runAction(tintTo);

	// Tints a node BY the delta of the specified RGB values.
	auto tintBy = TintBy::create(2.0f, 120.0f, 232.0f, 254.0f);
	sprite->runAction(tintBy);

	return true;

}

void ImageMove::update(float delta)
{
	for (int i = 0; i < (int)this->getChildren().size(); ++i)
		this->getChildren().at(i)->update(delta);
}
