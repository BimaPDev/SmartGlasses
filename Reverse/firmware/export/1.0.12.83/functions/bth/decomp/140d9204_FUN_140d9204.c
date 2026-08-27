/* FUN_140d9204 @ 0x140d9204 */

float FUN_140d9204(float param_1)

{
  uint uVar1;
  float fVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((int)ABS(param_1) <= DAT_140d9288) {
    fVar2 = (float)FUN_140da4f4(param_1,DAT_140d928c,0);
    return fVar2;
  }
  if (0x7f7fffff < (uint)ABS(param_1)) {
    return param_1 - param_1;
  }
  uVar1 = FUN_140d9b00(&uStack_10);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)FUN_140d9d74(uStack_10,uStack_c);
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_140da4f4(uStack_10,uStack_c,1);
    fVar2 = -fVar2;
  }
  else if (uVar1 == 0) {
    fVar2 = (float)FUN_140da4f4(uStack_10,uStack_c,1);
  }
  else {
    fVar2 = (float)FUN_140d9d74(uStack_10,uStack_c);
    fVar2 = -fVar2;
  }
  return fVar2;
}

