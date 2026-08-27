/* FUN_2c13d040 @ 0x2c13d040 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13d040(void)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint in_fpscr;
  uint uStack_54;
  uint auStack_50 [3];
  undefined4 uStack_44;
  undefined4 uStack_2c;
  int iStack_14;
  
  iStack_14 = *_DAT_2c13d29c;
  FUN_2c13e9dc(auStack_50 + 1,0,0x38,0);
  iVar1 = _DAT_2c13d2a0;
  uStack_54 = 0;
  auStack_50[0] = 0;
  FUN_2c13c3c4(&uStack_54);
  FUN_2c13bf44(iVar1,auStack_50);
  if ((int)(uStack_54 << 0xb) < 0) {
    FUN_2c135988(4,0x4ae,_DAT_2c13d2b0,_DAT_2c13d2ac,_DAT_2c13d2c8);
    func_0x2c13c7fc(iVar1);
    FUN_2c13cd38(iVar1);
    FUN_2c13ca40(iVar1,1);
  }
  if ((int)(uStack_54 << 0xd) < 0) {
    FUN_2c13c770(_DAT_2c13d2a0,0xf0f);
    *(undefined2 *)(iVar1 + 0x6c) = 0;
  }
  func_0x2c13c490(_DAT_2c13d2a0,uStack_54,(auStack_50[0] & 0xffffff) >> 8);
  if (*(int *)(iVar1 + 0x80) == 10) {
    *_DAT_2c13d2a4 = 10;
  }
  piVar5 = _DAT_2c13d2bc;
  puVar3 = _DAT_2c13d2b4;
  piVar2 = _DAT_2c13d2a4;
  if ((uStack_54 & 4) == 0) {
    if (*(char *)(iVar1 + 0xf4) == '\0') {
      if (-1 < (int)(uStack_54 << 0x1e)) goto LAB_2c13d0a2;
      uVar8 = *_DAT_2c13d2b4 + 1;
      if (0xfffffff8 < uVar8 && *_DAT_2c13d2b4 != 0xfffffff8) {
        uVar8 = 3;
      }
      *_DAT_2c13d2b4 = uVar8;
      FUN_2c14486c();
      iVar7 = FUN_2c1448c4();
      piVar4 = _DAT_2c13d2b8;
      *piVar2 = 0;
      *piVar4 = iVar7;
      if (((*piVar5 != 0) && (iVar7 = func_0x2c13fa00(), iVar7 != 0)) && (*piVar5 != 0)) {
        func_0x2c13f9c8();
      }
      piVar5 = _DAT_2c13d2c0;
      if (*_DAT_2c13d2c0 == 0) {
        iVar7 = func_0x2c13f38c(_DAT_2c13d2d0,1,0);
        *piVar5 = iVar7;
        if (iVar7 == 0) goto LAB_2c13d1ce;
      }
      *_DAT_2c13d2c4 = 0;
      func_0x2c13f9c8();
      func_0x2c13f98c(*piVar5,200);
LAB_2c13d1ce:
      iVar10 = *piVar2;
    }
    else {
      iVar10 = 5;
      iVar7 = *_DAT_2c13d2bc;
      *(undefined1 *)(iVar1 + 0xf4) = 0;
      *piVar2 = 5;
      if (iVar7 != 0) {
        iVar7 = func_0x2c13fa00();
        if ((iVar7 == 0) || (*piVar5 == 0)) goto LAB_2c13d1ce;
        func_0x2c13f9c8();
        iVar10 = *piVar2;
      }
    }
  }
  else {
    if (auStack_50[0] == 0) {
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      piVar2 = _DAT_2c13d2b8;
      if (*puVar3 < 2) {
        if (*_DAT_2c13d2b8 == 0) {
          FUN_2c14486c();
          iVar7 = FUN_2c1448c4();
          *piVar2 = iVar7;
        }
        FUN_2c14486c();
        iVar7 = FUN_2c1448c4();
        uVar9 = *puVar3;
        uVar8 = iVar7 - *piVar2;
        if ((uVar9 == 0) || (uVar8 < 0x96)) {
          FUN_2c135988(4,0x5b1,_DAT_2c13d2b0,_DAT_2c13d2ac,_DAT_2c13d2d4,uVar8,uVar9);
          goto LAB_2c13d102;
        }
      }
      piVar2 = _DAT_2c13d2bc;
      if (*_DAT_2c13d2bc == 0) {
LAB_2c13d23a:
        iVar7 = func_0x2c13f38c(_DAT_2c13d2cc,1,0);
        *piVar2 = iVar7;
        if (iVar7 != 0) {
LAB_2c13d27c:
          func_0x2c13f9c8();
          func_0x2c13f98c(*piVar2,200);
        }
      }
      else {
        iVar7 = func_0x2c13fa00();
        if (iVar7 == 0) {
          if (*piVar2 == 0) goto LAB_2c13d23a;
          goto LAB_2c13d27c;
        }
      }
      piVar2 = _DAT_2c13d2c0;
      if (((*_DAT_2c13d2c0 != 0) && (iVar7 = func_0x2c13fa00(), iVar7 != 0)) && (*piVar2 != 0)) {
        func_0x2c13f9c8();
      }
    }
LAB_2c13d0a2:
    iVar10 = *_DAT_2c13d2a4;
  }
  if ((*(char *)(iVar1 + 0xf5) != '\0') || (iVar10 != *(int *)(iVar1 + 0x80))) {
    *(int *)(iVar1 + 0x80) = iVar10;
    *(undefined1 *)(iVar1 + 0xf5) = 0;
    auStack_50[1] = 3;
    FUN_2c14486c();
    uVar6 = FUN_2c1448c4();
    auStack_50[2] = VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    uStack_44 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x80),(byte)(in_fpscr >> 0x16) & 3);
    uStack_2c = 3;
    FUN_2c135988(4,0x5ec,_DAT_2c13d2b0,_DAT_2c13d2ac,_DAT_2c13d2a8,*(undefined4 *)(iVar1 + 0x80));
    FUN_2c13aa78(auStack_50 + 1);
  }
LAB_2c13d102:
  if (*_DAT_2c13d29c == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

