/* FUN_2c6051c4 @ 0x2c6051c4 */

void FUN_2c6051c4(int param_1,short param_2,undefined4 param_3)

{
  short sVar1;
  
  FUN_2c62e838(param_1,DAT_2c605204);
  if (*(int *)(param_1 + 8) == 0) {
    sVar1 = 0;
  }
  else {
    sVar1 = -*(short *)(*(int *)(param_1 + 8) + 0x12);
  }
  if ((short)(sVar1 - param_2) == 0) {
    return;
  }
  FUN_2c604b28(param_1,0,(int)(short)(sVar1 - param_2),param_3);
  return;
}

