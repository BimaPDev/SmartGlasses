/* FUN_140d917c @ 0x140d917c */

float FUN_140d917c(float param_1)

{
  uint uVar1;
  float fVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((int)ABS(param_1) <= DAT_140d91fc) {
    fVar2 = (float)FUN_140d9d74(param_1,DAT_140d9200);
    return fVar2;
  }
  if (0x7f7fffff < (uint)ABS(param_1)) {
    return param_1 - param_1;
  }
  uVar1 = FUN_140d9b00(&uStack_10);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)FUN_140da4f4(uStack_10,uStack_c);
    fVar2 = -fVar2;
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_140d9d74(uStack_10,uStack_c);
    fVar2 = -fVar2;
  }
  else if (uVar1 == 0) {
    fVar2 = (float)FUN_140d9d74(uStack_10,uStack_c);
  }
  else {
    fVar2 = (float)FUN_140da4f4(uStack_10,uStack_c,1);
  }
  return fVar2;
}

