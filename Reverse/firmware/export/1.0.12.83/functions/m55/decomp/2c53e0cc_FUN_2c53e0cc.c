/* FUN_2c53e0cc @ 0x2c53e0cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c53e0cc(int param_1,int param_2,int param_3)

{
  undefined4 ****ppppuVar1;
  undefined4 ****ppppuVar2;
  undefined1 *puVar3;
  undefined4 *****pppppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *****pppppuVar10;
  undefined4 *****pppppuVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined4 ****ppppuStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 ****ppppuStack_7c;
  undefined4 ****ppppuStack_78;
  undefined4 ****appppuStack_74 [4];
  undefined4 ****ppppuStack_64;
  undefined4 ****ppppuStack_60;
  undefined4 ****appppuStack_5c [4];
  undefined4 ****ppppuStack_4c;
  undefined4 ****ppppuStack_48;
  undefined4 ****appppuStack_44 [4];
  int iStack_34;
  
  iVar12 = param_1 + 0x14;
  iStack_34 = *_LAB_2c53e3b4;
  iVar7 = 0;
  iVar6 = param_2;
  iVar13 = *(int *)(param_1 + 0x18);
  iVar5 = iVar12;
  if (*(int *)(param_1 + 0x18) == 0) {
LAB_2c53e584:
    bVar14 = false;
    iVar6 = FUN_2c64ca5c(0x2c,iVar6,param_3,iVar7);
    iVar13 = *(int *)(param_1 + 0x24);
    iVar5 = iVar6 + 0x1c;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    *(int *)(iVar6 + 0x10) = param_2;
    *(int *)(iVar6 + 0x14) = iVar5;
    if ((iVar13 != 0) &&
       (iVar13 = *(int *)(param_1 + 0x20), *(int *)(*(int *)(param_1 + 0x20) + 0x10) < param_2))
    goto LAB_2c53e412;
    FUN_2c53dc50(&iStack_84,param_1 + 0x10,iVar6 + 0x10);
LAB_2c53e576:
    if (iStack_80 != 0) {
      bVar14 = iStack_84 != 0;
      iVar13 = iStack_80;
      goto LAB_2c53e412;
    }
    iVar9 = iStack_84;
    if (iVar5 != *(int *)(iVar6 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
LAB_2c53e55c:
    thunk_FUN_2c669588(iVar6,0x2c);
  }
  else {
    do {
      while( true ) {
        iVar9 = iVar13;
        iVar6 = *(int *)(iVar9 + 8);
        param_3 = *(int *)(iVar9 + 0xc);
        iVar7 = *(int *)(iVar9 + 0x10);
        if (param_2 <= iVar7) break;
        iVar13 = param_3;
        iVar9 = iVar5;
        if (param_3 == 0) goto LAB_2c53e102;
      }
      iVar13 = iVar6;
      iVar5 = iVar9;
    } while (iVar6 != 0);
LAB_2c53e102:
    bVar14 = false;
    if (iVar12 == iVar9) goto LAB_2c53e584;
    if (*(int *)(iVar9 + 0x10) <= param_2) goto LAB_2c53e110;
    iVar6 = FUN_2c64ca5c(0x2c);
    iVar5 = iVar6 + 0x1c;
    *(int *)(iVar6 + 0x10) = param_2;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    *(int *)(iVar6 + 0x14) = iVar5;
    iVar13 = iVar9;
    if (*(int *)(iVar9 + 0x10) <= param_2) {
      if (*(int *)(iVar9 + 0x10) < param_2) {
        if (*(int *)(param_1 + 0x20) != iVar9) {
          iVar13 = thunk_FUN_2c64e43a(iVar9);
          if (*(int *)(iVar13 + 0x10) <= param_2) goto LAB_2c53e56a;
          bVar14 = *(int *)(iVar9 + 0xc) != 0;
          if (!bVar14) {
            iVar13 = iVar9;
          }
        }
        goto LAB_2c53e412;
      }
      goto LAB_2c53e55c;
    }
    if (*(int *)(param_1 + 0x1c) != iVar9) {
      iVar13 = thunk_FUN_2c64e460(iVar9);
      if (*(int *)(iVar13 + 0x10) < param_2) {
        if (*(int *)(iVar13 + 0xc) == 0) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
          iVar13 = iVar9;
        }
        goto LAB_2c53e412;
      }
LAB_2c53e56a:
      FUN_2c53dc50(&iStack_84,param_1 + 0x10,iVar6 + 0x10);
      goto LAB_2c53e576;
    }
    bVar14 = true;
LAB_2c53e412:
    iVar9 = iVar6;
    if (iVar13 == iVar12) {
      bVar14 = true;
    }
    if (bVar14 == false) {
      bVar14 = *(int *)(iVar9 + 0x10) < *(int *)(iVar13 + 0x10);
    }
    FUN_2c64e496(bVar14,iVar9,iVar13,iVar12);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
LAB_2c53e110:
  uVar8 = *(undefined4 *)(iVar9 + 0x14);
  if (param_2 == 0) {
    puVar3 = (undefined1 *)registry_lookup(0x6115);
  }
  else {
    puVar3 = (undefined1 *)registry_lookup(0x6116);
  }
  ppppuStack_7c = appppuStack_74;
  if (puVar3 == (undefined1 *)0x0) goto LAB_2c53e12c;
  pppppuVar4 = (undefined4 *****)FUN_2c66c4ec(puVar3);
  ppppuStack_88 = pppppuVar4;
  if (pppppuVar4 < (undefined4 *****)0x10) {
    if (pppppuVar4 == (undefined4 *****)0x1) {
      appppuStack_74[0] = (undefined4 ****)CONCAT31(appppuStack_74[0]._1_3_,*puVar3);
      pppppuVar4 = appppuStack_74;
    }
    else {
      if (pppppuVar4 != (undefined4 *****)0x0) {
        pppppuVar10 = appppuStack_74;
        goto LAB_2c53e4fa;
      }
      pppppuVar4 = appppuStack_74;
    }
  }
  else {
    pppppuVar10 = (undefined4 *****)FUN_2c53d6b0(&ppppuStack_88,0);
    appppuStack_74[0] = ppppuStack_88;
    ppppuStack_7c = pppppuVar10;
LAB_2c53e4fa:
    FUN_2c674668(pppppuVar10,puVar3,pppppuVar4);
    pppppuVar4 = (undefined4 *****)ppppuStack_7c;
  }
  ppppuVar2 = ppppuStack_7c;
  ppppuVar1 = ppppuStack_88;
  iVar13 = param_1 + 0x2c;
  *(undefined1 *)((int)pppppuVar4 + (int)ppppuStack_88) = 0;
  iVar6 = *(int *)(param_1 + 0x30);
  iVar5 = iVar13;
  ppppuStack_78 = ppppuStack_88;
  if (*(int *)(param_1 + 0x30) == 0) {
LAB_2c53e45e:
    if ((undefined4 *****)ppppuVar2 != appppuStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,ppppuVar2);
    }
  }
  else {
    do {
      while( true ) {
        iVar7 = iVar6;
        pppppuVar10 = *(undefined4 ******)(iVar7 + 0x14);
        pppppuVar4 = pppppuVar10;
        if (ppppuVar1 <= pppppuVar10) {
          pppppuVar4 = (undefined4 *****)ppppuVar1;
        }
        if ((pppppuVar4 == (undefined4 *****)0x0) ||
           (iVar6 = FUN_2c66960c(*(undefined4 *)(iVar7 + 0x10),ppppuVar2), iVar6 == 0)) {
          iVar6 = (int)pppppuVar10 - (int)ppppuVar1;
        }
        if (iVar6 < 0) break;
        iVar6 = *(int *)(iVar7 + 8);
        iVar5 = iVar7;
        if (*(int *)(iVar7 + 8) == 0) goto LAB_2c53e1aa;
      }
      iVar6 = *(int *)(iVar7 + 0xc);
    } while (*(int *)(iVar7 + 0xc) != 0);
LAB_2c53e1aa:
    if (iVar13 == iVar5) goto LAB_2c53e45e;
    pppppuVar10 = *(undefined4 ******)(iVar5 + 0x14);
    pppppuVar4 = pppppuVar10;
    if (ppppuVar1 <= pppppuVar10) {
      pppppuVar4 = (undefined4 *****)ppppuVar1;
    }
    if ((pppppuVar4 == (undefined4 *****)0x0) ||
       (iVar6 = FUN_2c66960c(ppppuVar2,*(undefined4 *)(iVar5 + 0x10)), iVar6 == 0)) {
      iVar6 = (int)ppppuVar1 - (int)pppppuVar10;
    }
    if (iVar6 < 0) goto LAB_2c53e45e;
    if ((undefined4 *****)ppppuVar2 != appppuStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,ppppuVar2);
    }
    FUN_2c5315e0(iVar5 + 0x28);
    *(undefined4 *)(iVar5 + 0x28) = 0;
    iVar6 = FUN_2c64e54c(iVar5,iVar13);
    if (*(int *)(iVar6 + 0x10) != iVar6 + 0x18) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    thunk_FUN_2c669588(iVar6,0x2c);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  uVar8 = FUN_2c53159c(uVar8,_LAB_2c53e3bc);
  if (param_2 == 0) {
    puVar3 = (undefined1 *)registry_lookup(0x6115);
  }
  else {
    puVar3 = (undefined1 *)registry_lookup(0x6116);
  }
  ppppuStack_64 = appppuStack_5c;
  if (puVar3 == (undefined1 *)0x0) goto LAB_2c53e12c;
  pppppuVar4 = (undefined4 *****)FUN_2c66c4ec(puVar3);
  ppppuStack_88 = pppppuVar4;
  if (pppppuVar4 < (undefined4 *****)0x10) {
    if (pppppuVar4 == (undefined4 *****)0x1) {
      appppuStack_5c[0] = (undefined4 ****)CONCAT31(appppuStack_5c[0]._1_3_,*puVar3);
      pppppuVar4 = appppuStack_5c;
    }
    else {
      if (pppppuVar4 != (undefined4 *****)0x0) {
        pppppuVar10 = appppuStack_5c;
        goto LAB_2c53e4de;
      }
      pppppuVar4 = appppuStack_5c;
    }
  }
  else {
    pppppuVar10 = (undefined4 *****)FUN_2c53d6b0(&ppppuStack_88,0);
    appppuStack_5c[0] = ppppuStack_88;
    ppppuStack_64 = pppppuVar10;
LAB_2c53e4de:
    FUN_2c674668(pppppuVar10,puVar3,pppppuVar4);
    pppppuVar4 = (undefined4 *****)ppppuStack_64;
  }
  pppppuVar10 = (undefined4 *****)ppppuStack_64;
  ppppuVar1 = ppppuStack_88;
  *(undefined1 *)((int)pppppuVar4 + (int)ppppuStack_88) = 0;
  iVar6 = *(int *)(param_1 + 0x30);
  iVar5 = iVar13;
  ppppuStack_60 = ppppuStack_88;
  if (*(int *)(param_1 + 0x30) == 0) {
LAB_2c53e48c:
    ppppuStack_88 = &ppppuStack_64;
    iVar5 = FUN_2c53dfe0(param_1 + 0x28,iVar5,&ppppuStack_88);
    pppppuVar10 = (undefined4 *****)ppppuStack_64;
  }
  else {
    do {
      while( true ) {
        iVar7 = iVar6;
        pppppuVar11 = *(undefined4 ******)(iVar7 + 0x14);
        pppppuVar4 = pppppuVar11;
        if (ppppuVar1 <= pppppuVar11) {
          pppppuVar4 = (undefined4 *****)ppppuVar1;
        }
        if ((pppppuVar4 == (undefined4 *****)0x0) ||
           (iVar6 = FUN_2c66960c(*(undefined4 *)(iVar7 + 0x10),pppppuVar10), iVar6 == 0)) {
          iVar6 = (int)pppppuVar11 - (int)ppppuVar1;
        }
        if (iVar6 < 0) break;
        iVar6 = *(int *)(iVar7 + 8);
        iVar5 = iVar7;
        if (*(int *)(iVar7 + 8) == 0) goto LAB_2c53e2a0;
      }
      iVar6 = *(int *)(iVar7 + 0xc);
    } while (*(int *)(iVar7 + 0xc) != 0);
LAB_2c53e2a0:
    if (iVar13 == iVar5) goto LAB_2c53e48c;
    pppppuVar11 = *(undefined4 ******)(iVar5 + 0x14);
    pppppuVar4 = pppppuVar11;
    if (ppppuVar1 <= pppppuVar11) {
      pppppuVar4 = (undefined4 *****)ppppuVar1;
    }
    if ((pppppuVar4 == (undefined4 *****)0x0) ||
       (iVar6 = FUN_2c66960c(pppppuVar10,*(undefined4 *)(iVar5 + 0x10)), iVar6 == 0)) {
      iVar6 = (int)ppppuVar1 - (int)pppppuVar11;
    }
    if (iVar6 < 0) goto LAB_2c53e48c;
  }
  *(undefined4 *)(iVar5 + 0x28) = uVar8;
  if (pppppuVar10 != appppuStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,pppppuVar10);
  }
  if (param_2 == 0) {
    puVar3 = (undefined1 *)registry_lookup(0x6115);
  }
  else {
    puVar3 = (undefined1 *)registry_lookup(0x6116);
  }
  ppppuStack_4c = appppuStack_44;
  if (puVar3 == (undefined1 *)0x0) {
LAB_2c53e12c:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c53e3b8);
  }
  pppppuVar4 = (undefined4 *****)FUN_2c66c4ec(puVar3);
  ppppuStack_88 = pppppuVar4;
  if (pppppuVar4 < (undefined4 *****)0x10) {
    pppppuVar10 = appppuStack_44;
    if (pppppuVar4 == (undefined4 *****)0x1) {
      appppuStack_44[0] = (undefined4 ****)CONCAT31(appppuStack_44[0]._1_3_,*puVar3);
    }
    else if (pppppuVar4 != (undefined4 *****)0x0) goto LAB_2c53e516;
  }
  else {
    ppppuStack_4c = (undefined4 ****)FUN_2c53d6b0(&ppppuStack_88,0);
    appppuStack_44[0] = ppppuStack_88;
    pppppuVar10 = (undefined4 *****)ppppuStack_4c;
LAB_2c53e516:
    FUN_2c674668(pppppuVar10,puVar3,pppppuVar4);
    pppppuVar10 = (undefined4 *****)ppppuStack_4c;
  }
  pppppuVar4 = (undefined4 *****)ppppuStack_4c;
  ppppuVar1 = ppppuStack_88;
  *(undefined1 *)((int)pppppuVar10 + (int)ppppuStack_88) = 0;
  iVar6 = *(int *)(param_1 + 0x30);
  iVar5 = iVar13;
  ppppuStack_48 = ppppuStack_88;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      while( true ) {
        iVar7 = iVar6;
        pppppuVar11 = *(undefined4 ******)(iVar7 + 0x14);
        pppppuVar10 = pppppuVar11;
        if (ppppuVar1 <= pppppuVar11) {
          pppppuVar10 = (undefined4 *****)ppppuVar1;
        }
        if ((pppppuVar10 == (undefined4 *****)0x0) ||
           (iVar6 = FUN_2c66960c(*(undefined4 *)(iVar7 + 0x10),pppppuVar4), iVar6 == 0)) {
          iVar6 = (int)pppppuVar11 - (int)ppppuVar1;
        }
        if (iVar6 < 0) break;
        iVar6 = *(int *)(iVar7 + 8);
        iVar5 = iVar7;
        if (*(int *)(iVar7 + 8) == 0) goto LAB_2c53e356;
      }
      iVar6 = *(int *)(iVar7 + 0xc);
    } while (*(int *)(iVar7 + 0xc) != 0);
LAB_2c53e356:
    bVar14 = iVar13 != iVar5;
    iVar13 = iVar5;
    if (bVar14) {
      pppppuVar11 = *(undefined4 ******)(iVar5 + 0x14);
      pppppuVar10 = pppppuVar11;
      if (ppppuVar1 <= pppppuVar11) {
        pppppuVar10 = (undefined4 *****)ppppuVar1;
      }
      if ((pppppuVar10 == (undefined4 *****)0x0) ||
         (iVar6 = FUN_2c66960c(pppppuVar4,*(undefined4 *)(iVar5 + 0x10)), iVar6 == 0)) {
        iVar6 = (int)ppppuVar1 - (int)pppppuVar11;
      }
      if (-1 < iVar6) goto LAB_2c53e37c;
    }
  }
  ppppuStack_88 = &ppppuStack_4c;
  iVar5 = FUN_2c53dfe0(param_1 + 0x28,iVar13,&ppppuStack_88);
  pppppuVar4 = (undefined4 *****)ppppuStack_4c;
LAB_2c53e37c:
  if (pppppuVar4 != appppuStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,pppppuVar4);
  }
  if (*_LAB_2c53e3b4 != iStack_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return *(undefined4 *)(iVar5 + 0x28);
}

