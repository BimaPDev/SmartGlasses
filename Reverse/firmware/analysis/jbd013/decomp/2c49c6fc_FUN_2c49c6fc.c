/* FUN_2c49c6fc @ 0x2c49c6fc */

void FUN_2c49c6fc(void)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte local_15;
  uint local_14;
  
  iVar2 = DAT_2c49c798;
  local_14 = *DAT_2c49c79c;
  lVar9 = FUN_2c49c6a0(DAT_2c49c798,6,&local_15,0);
  piVar3 = DAT_2c49c7a4;
  if (-1 < (int)lVar9) {
    iVar7 = (short)(ushort)local_15 * 5 + DAT_2c49c7a0;
    iVar6 = DAT_2c49c7a0 + -0xafa;
    iVar5 = *DAT_2c49c7a4;
    *(int *)(iVar2 + 0x28) = iVar7;
    iVar8 = DAT_2c49c7ac;
    piVar4 = DAT_2c49c7a8;
    if (iVar5 == iVar6) {
      *piVar3 = iVar7;
      piVar3[1] = iVar7;
      piVar3[2] = iVar7;
      piVar3[3] = iVar7;
      piVar3[4] = iVar7;
    }
    else {
      iVar5 = *DAT_2c49c7a8;
      piVar3[iVar5] = iVar7;
      iVar5 = iVar5 + 1;
      iVar7 = *piVar3;
      *piVar4 = iVar5 + ((int)((longlong)iVar8 * (longlong)iVar5 >> 0x21) - (iVar5 >> 0x1f)) * -5;
    }
    iVar8 = iVar7 + piVar3[1] + piVar3[2] + piVar3[3] + piVar3[4];
    lVar1 = (longlong)DAT_2c49c7ac * (longlong)iVar8;
    lVar9 = lVar1 << 0x20;
    *(int *)(iVar2 + 0x24) = (int)(lVar1 >> 0x21) - (iVar8 >> 0x1f);
  }
  if ((*DAT_2c49c79c ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),*DAT_2c49c79c ^ local_14,0);
}

