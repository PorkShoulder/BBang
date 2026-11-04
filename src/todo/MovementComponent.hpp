#pragma once
#include <SFML/System/Vector2.hpp>

// ===============================
// 오브젝트의 이동을 담당하는 컴포넌트
// 이동 -> 방향, 속도
// ===============================


class MovementComponent
{

public:
    MovementComponent() {};
    ~MovementComponent() {};

private:
    // TODO: 필요한 멤버 변수를 추가하세요.
    float m_movement;    
public:
    // TODO: 필요한 멤버 함수를 선언하세요.
    const void getMovement() const;
    void getMovement();

    // 함수 먼저 어떤 역할을 할지 -> 이어서 변수 작성

};
