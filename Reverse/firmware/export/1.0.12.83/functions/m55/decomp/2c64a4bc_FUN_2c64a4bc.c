/* FUN_2c64a4bc @ 0x2c64a4bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c64a4bc(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [20];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c64a794;
  if (param_1 < 2) {
    FUN_2c648600(_DAT_2c64a7b0,param_2,param_3,0);
    FUN_2c648600(_LAB_2c64a7b4);
    FUN_2c648600(_LAB_2c64a7b8);
    FUN_2c648600(_LAB_2c64a7bc);
    uVar6 = _LAB_2c64a7c0;
    if (*_LAB_2c64a794 != iStack_1c) goto LAB_2c64a7fc;
  }
  else {
    pcVar14 = *(char **)(param_2 + 4);
    uVar16 = FUN_2c66c540(pcVar14,_LAB_2c64a798,4);
    iVar8 = _LAB_2c64a394;
    if ((int)uVar16 == 0) {
      if (*_LAB_2c64a794 == iStack_1c) {
        iVar9 = *_LAB_2c64a390;
        FUN_2c673c58(&stack0xffffffec,(int)((ulonglong)uVar16 >> 0x20),0);
        iStack_28 = (int)*(char *)(iVar8 + -3);
        uStack_20 = (undefined1 *)(int)*(char *)(iVar8 + -1);
        iStack_24 = (int)*(char *)(iVar8 + -2);
        FUN_2c648600(_LAB_2c64a398,0,0,0);
        iVar8 = FUN_2c648600(_LAB_2c64a39c,0,0,0);
        if (*_LAB_2c64a390 == iVar9) {
          return iVar8;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      goto LAB_2c64a7fc;
    }
    if (((*pcVar14 == 's') && (pcVar14[1] == 'e')) &&
       (uVar15 = (byte)pcVar14[2] - 0x74, uVar15 == 0)) {
      if (4 < param_1) {
        uStack_48 = uVar15;
        uStack_44 = uVar15;
        uVar5 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
        uStack_48 = CONCAT22(uStack_48._2_2_,uVar5);
        uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
        uStack_48._0_3_ = CONCAT12(uVar2,(undefined2)uStack_48);
        bVar1 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
        uVar15 = (uint)bVar1;
        uStack_48 = CONCAT13(bVar1,(undefined3)uStack_48);
        if (param_1 == 6) {
          bVar1 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x14));
          uVar15 = uStack_48 >> 0x18;
          uStack_44 = (uint)bVar1 << 8;
        }
        else if (param_1 == 7) {
          uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x14));
          uStack_44._0_2_ = CONCAT11(uVar2,(undefined1)uStack_44);
          uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x18));
          uVar15 = uStack_48 >> 0x18;
          uStack_44 = (uint)CONCAT12(uVar2,(short)uStack_44);
        }
        else if (7 < param_1) {
          uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x14));
          uStack_44._0_2_ = CONCAT11(uVar2,(undefined1)uStack_44);
          uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x18));
          uStack_44._0_3_ = CONCAT12(uVar2,(undefined2)uStack_44);
          uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x1c));
          uVar15 = uStack_48 >> 0x18;
          uStack_44 = CONCAT13(uVar2,(undefined3)uStack_44);
        }
        uVar13 = uStack_48 >> 0x10 & 0xff;
        uVar10 = (uint)((ulonglong)_LAB_2c64a7c4 * (ulonglong)(uStack_48 & 0xffff) >> 0x25);
        uVar12 = (uStack_48 & 0xffff) + uVar10 * -100;
        uVar11 = uVar12 & 0xffff;
        uVar12 = uVar12 & 0xff;
        if (0x13 < (uVar10 & 0xff)) {
          uVar11 = uVar12 + 100 & 0xff;
          uVar12 = uVar11;
        }
        uVar10 = uVar11 + (uVar12 >> 2) & 0xffff;
        iVar8 = (int)((ulonglong)_LAB_2c64a7c8 * (ulonglong)uVar10 >> 0x20);
        uVar15 = *(byte *)(_LAB_2c64a7cc + uVar13 + -1) + uVar15 +
                 (uVar10 + (iVar8 + (uVar10 - iVar8 >> 1) >> 2) * -7 & 0xffff) & 0xffff;
        if (((uVar12 & 3) == 0) && (uVar13 < 3)) {
          uVar15 = uVar15 - 1 & 0xffff;
        }
        iVar8 = (int)((ulonglong)_LAB_2c64a7c8 * (ulonglong)uVar15 >> 0x20);
        uStack_44 = CONCAT31(uStack_44._1_3_,
                             (char)uVar15 + (char)(iVar8 + (uVar15 - iVar8 >> 1) >> 2) * -7);
        iVar9 = FUN_2c64a21c(&uStack_48);
        iVar8 = 0;
        if (iVar9 != 0) {
          func_0x2c674218(&uStack_48);
          func_0x2c4eff48(&uStack_48,auStack_40);
          FUN_2c6697dc(auStack_40);
          iVar8 = FUN_2c6743d8();
        }
LAB_2c64a6c6:
        if (*_LAB_2c64a794 == iStack_1c) {
          return iVar8;
        }
LAB_2c64a7fc:
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      uVar6 = _LAB_2c64a7a4;
      if (*_LAB_2c64a794 != iStack_1c) goto LAB_2c64a7fc;
    }
    else {
      iVar8 = FUN_2c66c540(pcVar14,_LAB_2c64a79c,0xe);
      if (iVar8 == 0) {
        if (3 < param_1) {
          uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
          uVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
          if (param_1 == 4) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
          }
          iVar9 = FUN_2c64a424(uVar2,uVar3,uVar4);
          iVar8 = 0;
          if (iVar9 != 0) {
            FUN_2c648600(_LAB_2c64a7d0);
            uVar16 = func_0x2c674408(1);
            if (*_LAB_2c64a794 == iStack_1c) {
                    /* WARNING: Could not recover jumptable at 0x2c6746b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              iVar8 = (*_LAB_2c6746b4)((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,0);
              return iVar8;
            }
            goto LAB_2c64a7fc;
          }
          goto LAB_2c64a6c6;
        }
        uVar6 = _LAB_2c64a7a0;
        if (*_LAB_2c64a794 != iStack_1c) goto LAB_2c64a7fc;
      }
      else {
        iVar8 = FUN_2c66c540(pcVar14,_LAB_2c64a7a8,0xc);
        if (iVar8 == 0) {
          if (3 < param_1) {
            uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
            uVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
            if (param_1 == 4) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
            }
            func_0x2c6747f8(_LAB_2c64a7ac);
            if (*_LAB_2c64a794 == iStack_1c) {
              iStack_1c = *_LAB_2c64a49c;
              iStack_2c = 0;
              iStack_28 = 0;
              FUN_2c673c58(&iStack_2c,uVar3,0);
              iStack_24 = iStack_2c;
              uStack_20 = (undefined1 *)
                          CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,(char)iStack_28)));
              iVar8 = FUN_2c64a21c(&iStack_24);
              if (iVar8 != 0) {
                func_0x2c6740c8(&iStack_24);
                FUN_2c648600(_LAB_2c64a4a0);
                FUN_2c64a31c();
                FUN_2c648600(_LAB_2c64a4a4);
                FUN_2c64a3a0();
              }
              if (*_LAB_2c64a49c == iStack_1c) {
                return iVar8;
              }
                    /* WARNING: Subroutine does not return */
              stack_chk_fail();
            }
            goto LAB_2c64a7fc;
          }
          iVar8 = *_LAB_2c64a794;
          uVar6 = _LAB_2c64a7d4;
        }
        else {
          iVar8 = *_LAB_2c64a794;
          uVar6 = _LAB_2c64a7d8;
        }
        if (iVar8 != iStack_1c) goto LAB_2c64a7fc;
      }
    }
  }
  iStack_1c = *DAT_2c648674;
  uStack_20 = &stack0xfffffff4;
  iVar8 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar6);
  if (-1 < iVar8) {
    if (iVar8 < 0x7ff) {
      if (iVar8 == 0) goto LAB_2c648630;
    }
    else {
      iVar8 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar7 = (code *)FUN_2c648328();
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(_LAB_2c648678,iVar8);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar8);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iStack_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

