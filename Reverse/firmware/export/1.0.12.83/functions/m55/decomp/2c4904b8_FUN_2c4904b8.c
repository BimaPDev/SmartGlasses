/* FUN_2c4904b8 @ 0x2c4904b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4904b8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = _DAT_2c49057c;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar4 = param_1[3];
  if (iVar4 == 0) {
    return 1;
  }
  iVar6 = *(int *)(param_2 + 8);
  iVar9 = *(int *)(_DAT_2c49057c + iVar6 * 0x18 + 4);
  if ((iVar6 - 0x12U < 2) && (iVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x174,_LAB_2c49058c,_LAB_2c490588,_LAB_2c490584,iVar6);
  }
  iVar3 = *(int *)(_DAT_2c49057c + iVar6 * 0x18 + 0x10);
  if (iVar3 == 0) {
    *_LAB_2c490580 = 0;
  }
  iVar7 = iVar1 + iVar6 * 0x18;
  if (*(uint *)(iVar7 + 8) < (uint)(iVar3 + iVar4)) {
    FUN_2c674668(iVar3 + iVar9,*param_1 + param_1[2],*(uint *)(iVar7 + 8) - iVar3);
    *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 8);
  }
  else {
    FUN_2c674668(iVar3 + iVar9,*param_1 + param_1[2]);
    piVar2 = _LAB_2c490580;
    uVar5 = *(int *)(iVar7 + 0x10) + param_1[3];
    iVar4 = *_LAB_2c490580;
    *(uint *)(iVar7 + 0x10) = uVar5;
    uVar8 = *(uint *)(iVar7 + 8);
    *piVar2 = param_1[3] + iVar4;
    if (uVar5 < uVar8) goto LAB_2c490520;
  }
  *(undefined1 *)(iVar1 + iVar6 * 0x18 + 0xc) = 1;
LAB_2c490520:
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}

