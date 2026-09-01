/* FUN_100cf698 @ 0x100cf698 */

void FUN_100cf698(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100cf730,DAT_100cf72c,DAT_100cf728,0x228,0,param_2);
    uVar2 = FUN_1011a1f0(DAT_100cf728,0x228,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_100cf730,DAT_100cf734,DAT_100cf728,0x229,uVar2);
    uVar2 = FUN_1011a1f0(DAT_100cf728,0x229,param_3,param_4);
    param_3 = extraout_r2_00;
  }
  if (*(int *)(param_2 + 4) == 0) {
    FUN_10119dc2(DAT_100cf730,DAT_100cf738,DAT_100cf728,0x22a,uVar2);
    uVar2 = FUN_1011a1f0(DAT_100cf728,0x22a,param_3,0);
    param_3 = extraout_r2_01;
  }
  iVar1 = *(int *)(param_1 + 0xdc);
  if (iVar1 != 0) {
    FUN_10119dc2(DAT_100cf730,DAT_100cf73c,DAT_100cf728,0x22b,uVar2);
    FUN_1011a1f0(DAT_100cf728,0x22b,param_3,iVar1);
  }
  FUN_10135064(param_1,param_2);
  return;
}

