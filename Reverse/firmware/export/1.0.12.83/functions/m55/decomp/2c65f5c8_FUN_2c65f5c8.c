/* FUN_2c65f5c8 @ 0x2c65f5c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c65f5c8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint extraout_r2;
  int extraout_r3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar7;
  int iStack_2c;
  uint uStack_28;
  
  uVar7 = CONCAT44(param_2,param_1);
  if (in_CY && !in_ZR) {
    uVar7 = FUN_2c65868c(_LAB_2c65f5e8,_LAB_2c65f5ec,param_2);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  piVar2 = (int *)uVar7;
  uStack_28 = param_3;
  if ((uint)(param_4 - iVar3) <= param_3) {
    uStack_28 = param_4 - iVar3;
  }
  iVar1 = *piVar2;
  iVar6 = uStack_28 + iVar3;
  uVar5 = *(int *)(iVar1 + -0xc) - uStack_28;
  iVar4 = *(int *)(iVar1 + -0xc) - iVar6;
  iStack_2c = iVar3;
  if ((*(uint *)(iVar1 + -8) < uVar5) || (0 < *(int *)(iVar1 + -4))) {
    iVar1 = FUN_2c6514c8(uVar5,*(uint *)(iVar1 + -8),&iStack_2c);
    if (iVar3 != 0) {
      FUN_2c6513e8(iVar1 + 0xc,*piVar2,iVar3);
    }
    if (iVar4 != 0) {
      FUN_2c6513e8(iVar1 + iVar3 * 4 + 0xc,*piVar2 + iVar6 * 4,iVar4);
    }
    FUN_2c6515a4(*piVar2 + -0xc,&iStack_2c);
    *piVar2 = iVar1 + 0xc;
  }
  else if ((iVar4 != 0) && (uStack_28 != 0)) {
    FUN_2c651400(iVar1 + iVar3 * 4,iVar1 + iVar6 * 4,iVar4,*(int *)(iVar1 + -4),piVar2);
  }
  FUN_2c6514b0(*piVar2 + -0xc,uVar5);
  return;
}

