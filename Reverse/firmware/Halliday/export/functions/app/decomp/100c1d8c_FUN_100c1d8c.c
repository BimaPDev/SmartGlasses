/* FUN_100c1d8c @ 0x100c1d8c */

void FUN_100c1d8c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = CONCAT44(param_2,param_1);
  uVar3 = param_4;
  if (param_1 == (int *)0x0) {
    FUN_10119dc2(DAT_100c1de8,DAT_100c1de4,DAT_100c1de0,0x29c,0,param_2,param_3,param_4,param_4);
    uVar2 = FUN_1011a1f0(DAT_100c1de0,0x29c,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_100c1de8,DAT_100c1dec,DAT_100c1de0,0x29d,uVar2,param_3,param_4,uVar3);
    FUN_1011a1f0(DAT_100c1de0,0x29d,param_3,param_4);
  }
  if (*param_1 != 0) {
    piVar1 = (int *)FUN_100c1d54(param_2);
    *piVar1 = *param_1;
  }
  *param_1 = param_2;
  return;
}

