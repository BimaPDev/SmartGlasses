/* FUN_2c6561a8 @ 0x2c6561a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6561a8(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  uint extraout_r2;
  int iVar2;
  uint uVar3;
  uint extraout_r3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 < param_2) {
    uVar6 = FUN_2c65868c(_LAB_2c6561e0,_LAB_2c6561e4,param_2);
    param_3 = extraout_r2;
    uVar3 = extraout_r3;
  }
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  piVar1 = (int *)uVar6;
  if (param_3 == 0xffffffff) {
    iVar4 = *piVar1;
    *(int *)(param_1 + 4) = iVar2;
    *(undefined1 *)(iVar4 + iVar2) = 0;
  }
  else if (param_3 != 0) {
    if (uVar3 - iVar2 <= param_3) {
      param_3 = uVar3 - iVar2;
    }
    iVar4 = piVar1[1] - (iVar2 + param_3);
    if ((iVar4 != 0) && (param_3 != 0)) {
      iVar5 = *piVar1;
      FUN_2c65e9c0(iVar2 + iVar5,iVar2 + param_3 + iVar5,iVar4,iVar5,param_4,unaff_r4,unaff_r5,
                   unaff_lr);
    }
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 - param_3;
    *(undefined1 *)(*piVar1 + (iVar2 - param_3)) = 0;
    return;
  }
  return;
}

