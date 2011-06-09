#include <cppunit/extensions/HelperMacros.h>
#include "fraction.h" // Fractionクラスを実際に定義しているコードのヘッダファイル

// 単体テストを行うためのクラスの宣言
class FractionTest : public CPPUNIT_NS::TestFixture {
    // ここはおまじない。
    CPPUNIT_TEST_SUITE(FractionTest);

    CPPUNIT_TEST(invalid_generation); // (2)に相当
    CPPUNIT_TEST(compare_fractions); // (4)に相当
    CPPUNIT_TEST(divide_fractions); // (5)に相当
    CPPUNIT_TEST(divide_fraction_by_0); // (6)に相当

    CPPUNIT_TEST_SUITE_END();

protected:
    // CppUnitでは、テスト事項1つにつき1つのメソッドを用意する。
    // 名前は、上記「おまじない」に合わせる必要がある。

    void invalid_generation(void); // (2)に相当
    void compare_fractions(void); // (4)に相当
    void divide_fractions(void); // (5)に相当
    void divide_fraction_by_0(void); // (6)に相当
   
    // 今回は特に何も書かないが、テストコード中で共通して使いたい変数等がある場合、ここに記述する。
    
public:
    // それぞれ、各テストの開始前・終了後に必ず実行される内容
    void setUp(void);
    void tearDown(void);
};

// おまじない
CPPUNIT_TEST_SUITE_REGISTRATION(FractionTest);

// 各テストの開始前に必ず実行したい内容があれば、ここに書く。今回は特にないので空欄。
void FractionTest::setUp(void){ }

// 各テストの終了後に必ず実行したい内容があれば、ここに書く。今回は特にないので空欄。
void FractionTest::tearDown(void){ }

// 以下、各テストの内容を具体的に記述する。

// (2)に相当するテスト
void FractionTest::invalid_generation(void){
    Fraction * fr;
    CPPUNIT_ASSERT_THROW(fr = new Fraction(6, 0), Fraction::DivisionByZeroException);
    delete fr;
}

// (4)に相当するテスト
void FractionTest::compare_fractions(void){
    Fraction fr1(6, 4);
    Fraction fr2(3, 2);
    Fraction fr3(2, 1);
    CPPUNIT_ASSERT_MESSAGE("6/4 == 3/2 should be judged true", fr1 == fr2);
    CPPUNIT_ASSERT_MESSAGE("6/4 != 2/1 should be judged true", !(fr1 == fr3));
}

// (5)に相当するテスト
void FractionTest::divide_fractions(void){
    Fraction fr1(6, 4);
    Fraction fr3(2, 1);
    Fraction fr4(3, 4);
    CPPUNIT_ASSERT(fr4 == fr1 / fr3);
}

// (6)に相当するテスト
void FractionTest::divide_fraction_by_0(void){
    Fraction fr1(6, 4);
    Fraction fr5(0, 2);
    CPPUNIT_ASSERT_THROW(fr1 / fr5, Fraction::DivisionByZeroException);
}
