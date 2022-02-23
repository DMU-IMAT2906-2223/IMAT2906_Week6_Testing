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
    MegaBoss mb;
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

//Different fixture to use.
class TestNext :public ::testing::Test {



protected:

    Boss b;
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
        b.setHealth(200);
    }

    virtual void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }


};

TEST_F(Testing, Test1) {

    ASSERT_TRUE(alien.playerDestroyed());
}