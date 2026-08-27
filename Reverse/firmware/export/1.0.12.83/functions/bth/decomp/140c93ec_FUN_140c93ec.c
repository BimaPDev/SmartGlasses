/* FUN_140c93ec @ 0x140c93ec */

void FUN_140c93ec(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (*(uint *)(param_1 + 4) < param_2) {
    uVar1 = FUN_140cb80c(DAT_140c9414,DAT_140c9410,param_2,*(uint *)(param_1 + 4),param_1,param_2,
                         param_3);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  FUN_140d7a24((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,param_3,param_4);
  return;
}

