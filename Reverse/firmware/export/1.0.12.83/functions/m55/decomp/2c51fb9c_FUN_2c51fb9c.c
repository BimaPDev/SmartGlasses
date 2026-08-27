/* FUN_2c51fb9c @ 0x2c51fb9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51fb9c(int param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_14;
  
  iVar11 = *(int *)(param_2 + 4);
  uStack_14 = *_LAB_2c51fe54;
  if (iVar11 == 0) {
    iVar11 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  }
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    if (*(int *)(param_1 + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c51fe5c,0x2e2,DAT_2c51fe60,_LAB_2c51fe58);
    }
    iVar9 = *(int *)(param_1 + 0x28);
    if ((*(char *)(param_1 + 0x1fc) == '\x02') && (iVar9 != 0)) {
      FUN_2c51f69c();
      iVar9 = *(int *)(param_1 + 0x28);
    }
    FUN_2c5eba54(iVar9,DAT_2c51fe64);
    iVar11 = FUN_2c5ef9d8(iVar11);
    if (iVar11 == 0) {
      lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c51fe5c,0x300,DAT_2c51fe60,_LAB_2c51fe80);
    }
    FUN_2c606abc();
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c51fe5c,0x2ee,DAT_2c51fe60,_LAB_2c51fe68);
  }
  if (cVar1 == '\x03') {
    iVar9 = FUN_2c5efa10(iVar11);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c51fe5c,0x316,DAT_2c51fe60,_LAB_2c51fe98);
    }
    iVar11 = FUN_2c5ef904(iVar11);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51fee4,0x319,_LAB_2c51fee0,_LAB_2c51fedc);
    }
  }
  else {
    if (cVar1 == '\x05') {
      if (*_LAB_2c51fe54 == uStack_14) {
        iVar9 = FUN_2c5ef9d8(iVar11,iVar11,0,0);
        if (iVar9 != 0) {
          uStack_14 = FUN_2c5ef8f4(iVar11);
          if (uStack_14 < 100) {
            uVar8 = ((uint)((ulonglong)DAT_2c51f8d0 * (ulonglong)uStack_14 >> 0x20) & 0x7ff) >> 3;
          }
          else {
            uStack_14 = 100;
            uVar8 = 9;
          }
          uVar10 = *(undefined4 *)(param_1 + 0x18);
          uVar5 = FUN_2c5e2e4c(*(undefined4 *)(DAT_2c51f8c8 + uVar8 * 8));
          FUN_2c63140c(uVar10,uVar5);
          FUN_2c638814(*(undefined4 *)(param_1 + 0x1c),DAT_2c51f8cc,uStack_14);
          FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x27d1);
          uStack_20 = 1;
          FUN_2c608808(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),0x14,6);
          return;
        }
        return;
      }
      goto LAB_2c51fed8;
    }
    if (cVar1 == '\x04') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c51fe5c,799,DAT_2c51fe60,_LAB_2c51fea0);
    }
    if (cVar1 == '\a') {
      iVar11 = (**(code **)(**(int **)(param_1 + 8) + 0x38))();
      uVar5 = _LAB_2c51fee8;
      if (iVar11 == 0) {
        uVar5 = _LAB_2c51fe9c;
      }
      iVar9 = *(int *)(param_1 + 500);
      iVar11 = FUN_2c5e2e4c(uVar5);
      if (*_LAB_2c51fe54 != uStack_14) goto LAB_2c51fed8;
      iStack_1c = *DAT_2c6315cc;
      FUN_2c607df0();
      iVar4 = FUN_2c614f58(iVar11);
      if (iVar4 == 3) {
        if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
          FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x24));
        }
        *(undefined4 *)(iVar9 + 0x24) = 0;
        *(byte *)(iVar9 + 0x5a) = *(byte *)(iVar9 + 0x5a) | 3;
        goto LAB_2c6314a4;
      }
      FUN_2c612838(iVar11,&uStack_24);
      if (iVar4 == 0) {
        if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
          FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x24));
        }
        uVar7 = (uStack_24 & 0x1fffff) >> 10;
        *(int *)(iVar9 + 0x24) = iVar11;
        uVar8 = uStack_24 >> 0x15;
      }
      else {
        if (((iVar4 - 1U & 0xff) < 2) && (iVar12 = *(int *)(iVar9 + 0x24), iVar12 != iVar11)) {
          if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
            iVar6 = FUN_2c66c4ec(iVar11);
            iVar6 = FUN_2c62be98(0x40,iVar6 + 1);
            if (iVar6 == 0) goto LAB_2c6314a4;
            FUN_2c6435c4(iVar6,iVar11);
            *(int *)(iVar9 + 0x24) = iVar6;
            if (iVar12 != 0) {
              FUN_2c62bea8(iVar12);
            }
          }
          else {
            iVar12 = FUN_2c66c4ec(iVar11);
            iVar12 = FUN_2c62be98(0x40,iVar12 + 1);
            if (iVar12 == 0) goto LAB_2c6314a4;
            FUN_2c6435c4(iVar12,iVar11);
            *(int *)(iVar9 + 0x24) = iVar12;
          }
        }
        if (iVar4 == 2) {
          uVar5 = FUN_2c6033b4(iVar9,0,0x57);
          sVar2 = FUN_2c6033b4(iVar9,0,0x58);
          sVar3 = FUN_2c6033b4(iVar9,0,0x59);
          FUN_2c62b954(&uStack_20,iVar11,uVar5,(int)sVar2,(int)sVar3,0x1fff,0);
          uVar7 = uStack_20 & 0x7ff;
          iVar11 = (uStack_20 & 0x7ff) << 10;
          uStack_24._0_2_ = (ushort)uStack_24 & 0x3ff | (ushort)iVar11;
          uVar8 = uStack_20 >> 0x10 & 0x7ff;
          uStack_24 = CONCAT22((ushort)((uint)iVar11 >> 0x10) |
                               (ushort)((uStack_20 >> 0x10 & 0x7ff) << 5),(ushort)uStack_24);
        }
        else {
          uVar7 = (uStack_24 & 0x1fffff) >> 10;
          uVar8 = uStack_24 >> 0x15;
        }
      }
      *(short *)(iVar9 + 0x2c) = (short)uVar7;
      *(short *)(iVar9 + 0x2e) = (short)uVar8;
      *(short *)(iVar9 + 0x32) = (short)((int)uVar7 >> 1);
      *(short *)(iVar9 + 0x34) = (short)((int)uVar8 >> 1);
      *(byte *)(iVar9 + 0x5a) =
           (byte)iVar4 & 3 | (byte)((uStack_24 & 0x1f) << 2) | *(byte *)(iVar9 + 0x5a) & 0x80;
      FUN_2c607588(iVar9);
      if ((*(short *)(iVar9 + 0x30) != 0) || (*(short *)(iVar9 + 0x36) != 0x100)) {
        FUN_2c600bac(iVar9);
      }
      FUN_2c607df0(iVar9);
LAB_2c6314a4:
      if (*DAT_2c6315cc != iStack_1c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
  }
  if (*_LAB_2c51fe54 == uStack_14) {
    return;
  }
LAB_2c51fed8:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

