#pragma once

#include "cocos2d.h"

#include <string>

USING_NS_CC;

class ImageMoveLogic : public Sprite
{
public:
	static ImageMoveLogic * create();

	void update(float delta);

private:
	bool init();

	Sprite *ImageLoad;
};