/* FUN_2c5dd008 @ 0x2c5dd008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5dd008(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  short sStack_f8;
  short sStack_f6;
  undefined4 uStack_f4;
  code *pcStack_f0;
  undefined4 uStack_e8;
  int iStack_dc;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  code *pcStack_b0;
  code *pcStack_ac;
  char cStack_a8;
  short sStack_a4;
  uint uStack_a0;
  int iStack_74;
  int iStack_70;
  int iStack_24;
  
  iStack_24 = *_LAB_2c5dd228;
  iVar3 = FUN_2c602408();
  if (((iVar3 - 1U & 0xff) < 2) || (iVar3 == 8)) {
    uVar4 = func_0x2c602404(param_1);
    iVar5 = FUN_2c602414(param_1);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5dd238,0x33,_LAB_2c5dd234,_LAB_2c5dd240);
    }
    iVar9 = *(int *)(iVar5 + 8);
    FUN_2c674268(&pcStack_b0,0,0x8c);
    iVar6 = FUN_2c5df5f4(iVar9,*(undefined1 *)(iVar9 + 0x4c),&pcStack_b0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5dd238,0x3c,_LAB_2c5dd234,_LAB_2c5dd244);
    }
    if (iVar3 == 1) {
      if ((*(char *)(iVar9 + 0x48) == '\0') && (*(char *)(iVar9 + 0x49) != '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5dd238,0x4c,_LAB_2c5dd234,_LAB_2c5dd23c);
      }
    }
    else if (iVar3 == 2) {
      sVar2 = (*pcStack_ac)(uVar4);
      if (iStack_74 < iStack_70) {
        sVar1 = (short)iStack_70;
        iVar3 = iStack_74;
      }
      else {
        sVar1 = (short)iStack_74;
        iVar3 = iStack_70;
      }
      uVar7 = FUN_2c5ff4d8();
      func_0x2c5ff63c(uVar7,&uStack_f4);
      iVar3 = (int)(short)iVar3;
      if (cStack_a8 == '\x01') {
        iVar5 = (int)(short)((short)uStack_f4 + sVar2);
      }
      else if (cStack_a8 == '\x02') {
        iVar5 = (int)(short)(uStack_f4._2_2_ + sVar2);
      }
      else {
        iVar5 = (int)sVar2;
      }
      if ((iVar3 <= iVar5) && (iVar3 = iVar5, sVar1 <= iVar5)) {
        iVar3 = (int)sVar1;
      }
      (*pcStack_b0)(uVar4,iVar3);
    }
    else if ((iVar3 == 8) && (*(char *)(iVar9 + 0x48) == '\0')) {
      sStack_f8 = 0;
      sStack_f6 = 0;
      sVar2 = (short)uStack_a0;
      FUN_2c5dcf6c(&sStack_f8,&sStack_f6);
      sVar1 = (*pcStack_ac)(uVar4);
      uVar7 = _LAB_2c5dd22c;
      uVar8 = (uint)(short)(sVar2 - sStack_a4);
      uVar10 = (uint)sVar1;
      if (cStack_a8 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5dd238,0x7c,_LAB_2c5dd234,_LAB_2c5dd24c,
                     (int)(short)(sVar1 + sStack_f8));
      }
      if (cStack_a8 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5dd238,0x81,_LAB_2c5dd234,_LAB_2c5dd250,
                     (int)(short)(sVar1 + sStack_f6));
      }
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
      }
      if ((uVar8 & 0xffff) >> 1 < ((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f) & 0xffff))
      {
        func_0x2c62ec80(_LAB_2c5dd248,iVar5);
      }
      else if (uVar10 != uStack_a0) {
        *(undefined1 *)(iVar9 + 0x49) = 1;
        func_0x2c5e0328(iVar9,&uStack_f4);
        uStack_cc = uStack_a0;
        pcStack_f0 = pcStack_b0;
        uStack_e8 = _LAB_2c5dd230;
        uStack_f4 = uVar4;
        iStack_dc = iVar9;
        uStack_d4 = uVar10;
        uStack_d0 = uVar10;
        FUN_2c62e8ec(&uStack_f4);
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5dd238,0x94,_LAB_2c5dd234,uVar7);
      }
    }
  }
  if (*_LAB_2c5dd228 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

