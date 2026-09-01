/* FUN_101167ac @ 0x101167ac */

float FUN_101167ac(float param_1)

{
  uint uVar1;
  float fVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_10116838 < (int)ABS(param_1)) {
    if ((uint)ABS(param_1) < 0x7f800000) {
      uVar1 = FUN_101170ec(&local_10);
      uVar1 = uVar1 & 3;
      if (uVar1 == 1) {
        param_1 = (float)FUN_10117360(local_10,local_c);
      }
      else if (uVar1 == 2) {
        param_1 = (float)FUN_10117af4(local_10,local_c,1);
        param_1 = -param_1;
      }
      else if (uVar1 == 0) {
        param_1 = (float)FUN_10117af4(local_10,local_c,1);
      }
      else {
        param_1 = (float)FUN_10117360(local_10,local_c);
        param_1 = -param_1;
      }
    }
    else {
      param_1 = param_1 - param_1;
    }
    return param_1;
  }
  fVar2 = (float)FUN_10117af4(param_1,DAT_1011683c,0);
  return fVar2;
}

