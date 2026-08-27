/* FUN_2c60512c @ 0x2c60512c */

void FUN_2c60512c(int param_1,short param_2,short param_3,undefined4 param_4)

{
  short sVar1;
  
  FUN_2c62e838(param_1,DAT_2c605184);
  sVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    sVar1 = -*(short *)(*(int *)(param_1 + 8) + 0x10);
  }
  if ((short)(sVar1 - param_2) != 0) {
    FUN_2c604b28(param_1,(int)(short)(sVar1 - param_2),0,param_4);
  }
  FUN_2c62e838(param_1,DAT_2c605188);
  sVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    sVar1 = -*(short *)(*(int *)(param_1 + 8) + 0x12);
  }
  if ((short)(sVar1 - param_3) == 0) {
    return;
  }
  FUN_2c604b28(param_1,0,(int)(short)(sVar1 - param_3),param_4);
  return;
}

