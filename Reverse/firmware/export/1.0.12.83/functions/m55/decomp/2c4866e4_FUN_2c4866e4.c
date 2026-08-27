/* FUN_2c4866e4 @ 0x2c4866e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4866e4(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  piVar3 = _LAB_2c486874;
  piVar2 = _LAB_2c48686c;
  pcVar1 = _LAB_2c486868;
  if (*_LAB_2c486868 == '\0') {
    iVar5 = FUN_2c673c88();
    uVar6 = FUN_2c6741d8(iVar5 - *piVar2);
    piVar3 = _LAB_2c486874;
    if (*(int *)(_LAB_2c486870 + 0x28) == 0) {
      iVar5 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(_LAB_2c486870 + 0x28) + 0x4c);
      *piVar2 = iVar5;
      iVar5 = *piVar3;
      *piVar3 = iVar8;
      uVar6 = (uint)((iVar8 - iVar5) * 100) / uVar6;
      if (99 < (int)uVar6) {
        uVar6 = 100;
      }
      iVar5 = 100 - (uVar6 & ~((int)uVar6 >> 0x1f));
    }
    uVar7 = func_0x2c488018();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x16a,_LAB_2c486880,_LAB_2c48687c,_DAT_2c486878,iVar5,uVar7);
  }
  if (*(int *)(_LAB_2c486870 + 0x28) != 0) {
    *_LAB_2c486874 = *(int *)(*(int *)(_LAB_2c486870 + 0x28) + 0x4c);
  }
  iVar5 = FUN_2c673c88();
  uVar4 = _LAB_2c4868ac;
  iVar8 = *piVar3;
  *_LAB_2c48686c = iVar5;
  uVar7 = _LAB_2c48687c;
  *pcVar1 = '\0';
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x14c,_LAB_2c486880,uVar7,uVar4,iVar8,iVar5);
}

