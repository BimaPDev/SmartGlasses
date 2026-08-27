/* FUN_2c616354 @ 0x2c616354 */

void FUN_2c616354(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar3;
  int *piVar4;
  undefined4 unaff_lr;
  
  iVar3 = param_2 + 0x24;
  iVar2 = *(int *)(param_2 + 0x28);
  while (iVar2 != 0) {
    iVar2 = FUN_2c62ca10(iVar3);
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0xe) << 0x1d)) {
      FUN_2c62bea8(*(undefined4 *)(iVar2 + 4));
    }
    FUN_2c62c998(iVar3,iVar2);
    FUN_2c62bea8(iVar2);
    iVar2 = *(int *)(param_2 + 0x28);
  }
  piVar4 = (int *)(param_2 + 0x30);
  FUN_2c62c9e8(iVar3);
  iVar2 = *(int *)(param_2 + 0x34);
  uVar1 = extraout_r2;
  while (iVar2 != 0) {
    uVar1 = FUN_2c62ca10(piVar4);
    FUN_2c62c998(piVar4,uVar1);
    FUN_2c62bea8(uVar1);
    uVar1 = extraout_r2_00;
    iVar2 = *(int *)(param_2 + 0x34);
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x34);
  while (iVar2 != 0) {
    iVar3 = *(int *)(*piVar4 + iVar2 + 4);
    FUN_2c62c998(piVar4,iVar2,uVar1,*piVar4 + iVar2,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    FUN_2c62bea8(iVar2);
    iVar2 = iVar3;
    uVar1 = extraout_r2_01;
  }
  return;
}

