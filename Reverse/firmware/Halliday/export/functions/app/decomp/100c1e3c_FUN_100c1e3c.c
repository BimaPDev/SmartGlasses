/* FUN_100c1e3c @ 0x100c1e3c */

int FUN_100c1e3c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar3 = CONCAT44(param_2,param_1);
  uVar4 = param_4;
  if (param_2 == (int *)0x0) {
    FUN_10119dc2(DAT_100c1ec0,DAT_100c1ebc,DAT_100c1eb8,0x2bd,param_1,0,param_3,param_4,param_4);
    uVar3 = FUN_1011a1f0(DAT_100c1eb8,0x2bd,param_3,param_4);
    param_3 = extraout_r2;
  }
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      FUN_10119dc2(DAT_100c1ec0,DAT_100c1ec4,DAT_100c1eb8,0x2c0,uVar3,param_3,0,uVar4);
      uVar3 = FUN_1011a1f0(DAT_100c1eb8,0x2c0,param_3,iVar1);
      param_3 = extraout_r2_00;
    }
    piVar2 = (int *)*param_1;
    if (piVar2 != param_2) {
      FUN_10119dc2(DAT_100c1ec0,DAT_100c1ec8,DAT_100c1eb8,0x2c1,uVar3,param_3,piVar2,uVar4);
      FUN_1011a1f0(DAT_100c1eb8,0x2c1,param_3,piVar2);
    }
    *param_1 = *param_2;
  }
  iVar1 = *param_2;
  *param_2 = 0;
  FUN_100c1c90(param_2);
  return iVar1;
}

