#pragma once

#include <gtest/gtest.h>
#include <iostream>
#include"Alien.h"
#include"Boss.h"
#include"MegaBoss.h"


// The fixture for testing class Foo.
class Testing :public ::testing::Test {



protected:

    Alien alien;
    Alien smallAlien;
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    Testing() {
        // You can do set-up work for each test here.

    }

    ~Testing() override {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
        alien.setHealth(0);
        smallAlien.setHealth(100);
    }

    virtual void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }


};

TEST_F(Testing, Test1) {
    ASSERT_TRUE(alien.playerDestroyed());
}

class AlienParam :public::testing::TestWithParam<float> {
protected:
    Alien a;

    AlienParam() {
        // You can do set-up work for each test here.

    }

    ~AlienParam() override {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
        a.setHealth(25);
    }

    virtual void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

};

TEST_F(AlienParam, Test1) {
    ASSERT_TRUE(a.playerDestroyed());
}

TEST_P(AlienParam, param) {
    int health = GetParam();
    ASSERT_GT(a.getHealth(), health);
}

INSTANTIATE_TEST_SUITE_P(paramTesting,
    AlienParam,
    testing::Values(10,20,30,40));

//Setup a templated test suite. We may want to have tests that run across multiple types to test if there is a problem in a single area. 
template <typename T>
class TypedTest : public testing::Test {
private:
    T sLocation;
public:
    T getLocaiton() {
        return sLocation;
    }
};
