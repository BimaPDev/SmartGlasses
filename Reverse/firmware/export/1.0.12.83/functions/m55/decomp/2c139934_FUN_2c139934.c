/* FUN_2c139934 @ 0x2c139934 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c139934(uint param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int extraout_r1;
  int iVar3;
  int extraout_r2;
  uint uVar4;
  uint extraout_r3;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uStack_220;
  short sStack_21e;
  undefined1 auStack_21c [502];
  ushort uStack_26;
  int iStack_24;
  ushort *puStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar6 = iRam2c13998c;
  uVar8 = (uint)(iRam2c13998c - (int)puRam2c139988) >> 5;
  puVar5 = puRam2c139988;
  if (uVar8 != 0) {
    do {
      if (*puVar5 == param_1) {
        iVar3 = *(int *)(puVar5 + 8);
        if (iVar3 != 0) goto LAB_2c13997e;
        if (*pcRam2c139990 == '\0') {
          return param_1;
        }
        iStack_1c = *_DAT_2c139914;
        sStack_21e = *_DAT_2c139918;
        *_DAT_2c139918 = sStack_21e + 1;
        uStack_220 = (undefined2)param_1;
        if (0x200 < param_3) goto LAB_2c139904;
        FUN_2c13e7f0(auStack_21c,param_2,param_3);
        FUN_2c13826c(0,&uStack_220,param_3 + 4);
        uVar8 = (uint)(_DAT_2c13991c - _DAT_2c139920) >> 5;
        if (uVar8 == 0) goto LAB_2c1398fa;
        iVar6 = 0;
        goto LAB_2c1398c4;
      }
      puVar5 = puVar5 + 0x10;
    } while (puVar5 != puRam2c139988 + uVar8 * 0x10);
  }
  param_1 = FUN_2c13635c(uRam2c139998,uRam2c139994,param_1);
  iVar3 = extraout_r2;
LAB_2c13997e:
  FUN_2c13635c(uRam2c1399a0,uRam2c13999c,iVar3,param_1);
  *(ushort **)(puVar5 + 0x34) = puVar5;
  puVar2 = _DAT_2c139a94;
  uStack_18 = *(undefined4 *)(extraout_r1 + 0x4c);
  uVar8 = extraout_r1 + 0x78;
  uStack_14 = 0x2c139989;
  iStack_1c = iVar6;
  iStack_24 = *_DAT_2c139a90;
  puRam000000d5 = puVar5;
  puStack_20 = puVar5;
  if (*_DAT_2c139a8c != '\0') {
    uVar4 = (uint)uRam00000065;
    if (uRam00000065 >> 8 == 1) {
      if (0xb < (uint)(_DAT_2c139aa4 - (int)_DAT_2c139aa0)) {
        uVar7 = 0;
        puVar5 = _DAT_2c139aa0;
        do {
          if (*puVar5 == uVar4) {
            if (*(code **)(puVar5 + 4) == (code *)0x0) {
              FUN_2c135940(0x1291,_DAT_2c139ab0,_DAT_2c139aac);
            }
            else {
              (**(code **)(puVar5 + 4))(0x69,extraout_r1 + 0x74U & 0xffff);
            }
            goto LAB_2c139a08;
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 6;
        } while (uVar7 < (uint)((ulonglong)_DAT_2c139aa8 *
                                (ulonglong)(uint)(_DAT_2c139aa4 - (int)_DAT_2c139aa0) >> 0x23));
      }
      FUN_2c13635c(_DAT_2c139ab8,_DAT_2c139ab4);
      goto LAB_2c139a86;
    }
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      uVar4 = 0x2c1399d0;
      *_DAT_2c139a94 = 0x2c1399d0;
      puVar2[1] = 0x2c139989;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (uVar8 != 0) {
      uStack_26 = (ushort)uVar8;
      iVar3 = func_0x2c139e08(_DAT_2c139a98,uVar8,uVar4,0x40);
      if ((int)(uStack_26 + 1) < iVar3) {
        FUN_2c139e10(_DAT_2c139a98,&uStack_26);
        FUN_2c139e10(_DAT_2c139a98,0x65,uVar8);
      }
    }
    if (iVar6 == 0) {
      *_DAT_2c139a94 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    FUN_2c13f320(*_DAT_2c139a9c,1);
  }
LAB_2c139a08:
  if (*_DAT_2c139a90 == iStack_24) {
    return uVar8;
  }
LAB_2c139a86:
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
  while (iVar6 = iVar6 + 0x10, uVar8 * 0x10 - iVar6 != 0) {
LAB_2c1398c4:
    if (*(ushort *)(_DAT_2c139920 + iVar6 * 2) == param_1) {
      uVar8 = FUN_2c13f3b4(*_DAT_2c139924,0xffffffff);
      if (*(code **)(puVar5 + 0xe) != (code *)0x0) {
        uVar8 = (**(code **)(puVar5 + 0xe))(param_1,param_2,param_3);
      }
      if (*_DAT_2c139914 == iStack_1c) {
        return uVar8;
      }
      goto LAB_2c139910;
    }
  }
LAB_2c1398fa:
  FUN_2c13635c(_DAT_2c13992c,_DAT_2c139928,param_1);
  param_3 = extraout_r3;
LAB_2c139904:
  FUN_2c13635c(_DAT_2c139930,param_3,0x200);
LAB_2c139910:
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

