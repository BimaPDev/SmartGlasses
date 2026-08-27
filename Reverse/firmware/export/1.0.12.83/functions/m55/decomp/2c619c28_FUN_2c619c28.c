/* FUN_2c619c28 @ 0x2c619c28 */

void FUN_2c619c28(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  undefined4 unaff_r4;
  int iVar4;
  
  FUN_2c62c9e8(param_2 + 0x30);
  piVar2 = (int *)(param_2 + 0x24);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar3 = extraout_r2;
  while (iVar1 != 0) {
    iVar4 = *(int *)(*piVar2 + iVar1 + 4);
    FUN_2c62c998(piVar2,iVar1,uVar3,*piVar2 + iVar1,unaff_r4);
    FUN_2c62bea8(iVar1);
    iVar1 = iVar4;
    uVar3 = extraout_r2_00;
  }
  return;
}

