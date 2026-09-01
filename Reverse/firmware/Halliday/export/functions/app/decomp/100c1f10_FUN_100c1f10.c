/* FUN_100c1f10 @ 0x100c1f10 */

void FUN_100c1f10(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[2];
  uVar2 = *param_1 - iVar1;
  if (uVar2 < param_2) {
    FUN_10119dc2(DAT_100c1f54,DAT_100c1f50,DAT_100c1f4c,0x430,param_1,param_2,iVar1,uVar2,param_4);
    FUN_1011a1f0(DAT_100c1f4c,0x430,iVar1,uVar2);
  }
  *param_1 = *param_1 - param_2;
  *(short *)(param_1 + 1) = (short)param_2 + (short)param_1[1];
  return;
}

