#include "functions.h"

bool check(int plx, int ply, int plh, int plw, int obx, int oby, int obh, int obw)
{
    if (oby + obh < ply + plh &&
            oby + obw > ply &&
            plx < obx + obw &&
            plx > obx - plw)
        return true;
    return false;
}
