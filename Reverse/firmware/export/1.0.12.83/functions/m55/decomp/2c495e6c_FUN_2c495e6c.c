/* FUN_2c495e6c @ 0x2c495e6c */

void FUN_2c495e6c(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *param_1;
  iVar10 = param_1[1];
  uVar1 = iVar10 - iVar9 >> 2;
  if (uVar1 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c495f3c);
  }
  iVar7 = param_2 - iVar9;
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  uVar5 = uVar1 + uVar4;
  iVar6 = DAT_2c495f38;
  if (CARRY4(uVar1,uVar4)) {
LAB_2c495f20:
    iVar2 = FUN_2c64ca5c(iVar6);
    iVar6 = iVar6 + iVar2;
  }
  else {
    if (uVar5 != 0) {
      if (0x1ffffffe < uVar5) {
        uVar5 = 0x1fffffff;
      }
      iVar6 = uVar5 << 2;
      goto LAB_2c495f20;
    }
    iVar6 = 0;
    iVar2 = 0;
  }
  uVar3 = *param_3;
  *(undefined4 *)(iVar2 + iVar7) = uVar3;
  if (iVar7 < 1) {
    iVar10 = iVar10 - param_2;
    iVar7 = iVar7 + 4 + iVar2;
    if (0 < iVar10) goto LAB_2c495ee2;
    iVar8 = iVar7 + iVar10;
  }
  else {
    iVar10 = iVar10 - param_2;
    FUN_2c673eb8(iVar2,iVar9,iVar7,uVar3,param_4);
    iVar7 = iVar7 + 4 + iVar2;
    if (iVar10 < 1) {
      iVar8 = iVar7 + iVar10;
      iVar10 = param_1[2] - iVar9;
      goto LAB_2c495ed2;
    }
LAB_2c495ee2:
    iVar8 = iVar7 + iVar10;
    FUN_2c674668(iVar7,param_2,iVar10);
  }
  if (iVar9 == 0) {
    param_1[2] = iVar6;
    *param_1 = iVar2;
    param_1[1] = iVar8;
    return;
  }
  iVar10 = param_1[2] - iVar9;
LAB_2c495ed2:
  thunk_FUN_2c669588(iVar9,iVar10);
  param_1[2] = iVar6;
  *param_1 = iVar2;
  param_1[1] = iVar8;
  return;
}

