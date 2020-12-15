#pragma once
#include "cocos2d.h"
#include "Board.h"
#include "BoardView.h"

USING_NS_CC;

class GameScene : public Scene
{
	Layer* boardView;

	ProgressTimer* progressTimer;

public:

	static Scene* createScene();

	virtual bool init();

	void showBoard();

	void showProgressTimer();

	void back(Ref* pSender);

	CREATE_FUNC(GameScene);
};

