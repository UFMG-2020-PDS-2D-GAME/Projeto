#ifndef PLAYER_COMPONENT_H
#define PLAYER_COMPONENT_H

#include "Engine/Component.h"

class PlayerComponent : public Component {
public:
	PlayerComponent();
	virtual ~PlayerComponent();

	virtual void Update() override;

protected:
	void SpawnCoins();

	float m_jumpForce;
};

#endif // !PLAYER_COMPONENT_H