/**
 * @mainpage Sample
 * 
 * 
 * @file main.cpp
 * @author JongBin Park (jongbin@devbin.kr)
 * @brief doxygen 샘플 코드
 * @version 0.1
 * @date 2023-05-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

/**
 * @brief 시험 관련 클래스
 * 
 */
class Test
{
protected:
    int score;

    Test() {}
    virtual ~Test() {}

    /**
     * @brief 시험을 시작합니다.
     * @todo
     * 구현을 해야합니다!
     * 
     */
    void start() {}
    /**
     * @brief 시험을 종료합니다.
     * @bug
     * 종료가 되지 않습니다.
     * 
     */
    void end() {}
    
    virtual void mark() = 0;
};

/**
 * @brief 수학 시험 관련 클래스
 * 
 */
class Math : public Test
{
public:
    /**
     * @brief 채점 로직
     * 
     * @details
     * 채점하여 Test 클래스의 score 변수에 점수를 저장합니다.
     * 
     */
    void mark() {}
};

/**
 * @brief 메인 함수
 * 
 * @details
 * *Doxygen* 은 *Markdown* 을 지원합니다!
 * 
 * 또한 *HTML Tag* 를 <b>사용</b>할 수 있습니다.
 * 
 * @param argc 인자 수
 * @param argv 인자로 들어온 내용
 * @return 정상이면 0을 반환 
 * 
 * @see
 * 해당 코드는 깃에 게재되어 있으며 [이 곳](https://github.com/JongBin-Park/doxygen-sample-cpp)을 눌러 이동합니다.
 * 
 * @todo
 * 해당 코드는 샘플 코드이므로 다른 로직이 구현되어야 합니다.
 * 
 * @note
 * 코드가 구현되지 않았습니다.
 * 
 * @warning
 * 프로그램 시작 함수입니다. 없애면 안됩니다.
 * 
 * @pre
 * 해당 함수를 실행하기 전 반드시 인자를 넣어주세요.
 * 
 * @bug
 * 다음 패치에서 수정될 예정입니다
 */
int main(int argc, char **argv)
{
    int testData;

    return 0;
}