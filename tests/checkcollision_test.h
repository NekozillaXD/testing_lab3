#ifndef CHECKCOLLISION_H
#define CHECKCOLLISION_H

#include <gtest/gtest.h>
#include "functions.h"

//(plx, ply, plh, plw, obx, oby, obh, obw)
TEST(checkCollisionTest1, negative)
{
     ASSERT_FALSE(check(1,1,1,1,1,1,1,1));
     ASSERT_FALSE(check(20,20,40,40,25,25,40,40));
     ASSERT_FALSE(check(100,100,40,40,100,100,40,40 ));
}
TEST(checkCollisionTest2, negative)
{
     ASSERT_FALSE(check(100,200,100,100,100,300,100,100)); //игрок над объектом
     ASSERT_FALSE(check(100,300,100,100,100,200,100,100)); //игрок под объектом
     ASSERT_FALSE(check(300,10,100,100,200,10,100,100)); //игрок справа от объекта
     ASSERT_FALSE(check(200,10,100,100,200,10,100,100)); //игрок слева от объекта
}
TEST(checkCollisionTest3, positive)
{
     ASSERT_TRUE(check(100,500,30,30,80,480,30,30));
     ASSERT_TRUE(check(80,500,30,30,80,480,30,30));
     ASSERT_TRUE(check(105,500,30,30,80,480,30,30));
}
TEST(checkCollisionTest4, positive)
{
     ASSERT_TRUE(check(300,400,100,100,250,350,100,100));
     ASSERT_TRUE(check(250,400,100,100,250,350,100,100));
     ASSERT_TRUE(check(340,440,100,100,250,350,100,100));
}

#endif // CHECKCOLLISION_H
