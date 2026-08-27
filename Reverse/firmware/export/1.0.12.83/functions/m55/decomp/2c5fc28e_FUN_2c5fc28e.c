/* FUN_2c5fc28e @ 0x2c5fc28e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5fc28e(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  puVar3 = _LAB_2c5fc54c;
  puVar2 = _LAB_2c5fc528;
  if (*param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4c5,_LAB_2c5fc534,_LAB_2c5fc530,_LAB_2c5fc52c);
  }
  FUN_2c644044(*_LAB_2c5fc528,0xffffffff);
  iVar4 = func_0x2c5fe92c(param_1,param_2,param_3,*(undefined1 *)((int)puVar3 + 0x4d));
  if (iVar4 != 0) {
    uVar9 = FUN_2c5febec();
    if (uVar9 < 9) {
      if (uVar9 != 0) goto LAB_2c5fc41e;
      puVar6 = (undefined1 *)func_0x2c5fbd4c();
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x40e,_LAB_2c5fc534,_LAB_2c5fc530,_LAB_2c5fc548,_LAB_2c5fc544);
      }
      *puVar6 = 0;
      iVar4 = func_0x2c5fe14c(_LAB_2c5fc538,param_2,param_1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x3d8,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7a0,_LAB_2c5fc780);
      }
      iVar7 = func_0x2c5fedcc(_LAB_2c5fc538,*(undefined4 *)(iVar4 + 0x10),
                              *(undefined4 *)(iVar4 + 0x14));
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x3de,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc794,_LAB_2c5fc780);
      }
      if ((*(int *)(iVar7 + 0x14) == 0) || (*(int *)(iVar7 + 0x18) == 0)) {
LAB_2c5fc5c8:
        func_0x2c5fe160(iVar4,_LAB_2c5fc778);
        func_0x2c5fede0(iVar7,_LAB_2c5fc778);
        if (*(int *)(puVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x419,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7b4,_LAB_2c5fc780);
        }
        if (*(int *)(puVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x41c,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7b0,_LAB_2c5fc780);
        }
        if ((*(int *)(iVar7 + 0x1c) != 0) && (*(int *)(puVar6 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x420,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7c0,_LAB_2c5fc780);
        }
        if ((*(int *)(iVar7 + 0x20) != 0) && (*(int *)(puVar6 + 0xc) == 0)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x425,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc788,_LAB_2c5fc780);
        }
        goto LAB_2c5fc408;
      }
      iVar8 = FUN_2c66c4ec();
      *(int *)(puVar6 + 0x24) = iVar8;
      iVar8 = FUN_2c5fee3c(puVar3[1],iVar8 + 1);
      *(int *)(puVar6 + 0x20) = iVar8;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x3e9,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc784,_LAB_2c5fc780);
      }
      FUN_2c674668(iVar8,*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(puVar6 + 0x24));
      *(undefined1 *)(*(int *)(puVar6 + 0x20) + *(int *)(puVar6 + 0x24)) = 0;
      iVar8 = FUN_2c66c4ec(*(undefined4 *)(iVar7 + 0x18));
      *(int *)(puVar6 + 0x2c) = iVar8;
      iVar8 = FUN_2c5fee3c(puVar3[1],iVar8 + 1);
      *(int *)(puVar6 + 0x28) = iVar8;
      if (iVar8 == 0) goto LAB_2c5fc5c8;
      FUN_2c674668(iVar8,*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(puVar6 + 0x2c));
      *(undefined1 *)(*(int *)(puVar6 + 0x28) + *(int *)(puVar6 + 0x2c)) = 0;
      if (*(int *)(iVar7 + 0x1c) != 0) {
        iVar8 = FUN_2c66c4ec();
        *(int *)(puVar6 + 8) = iVar8;
        iVar8 = FUN_2c5fee3c(puVar3[1],iVar8 + 1);
        *(int *)(puVar6 + 4) = iVar8;
        if (iVar8 == 0) goto LAB_2c5fc5c8;
        FUN_2c674668(iVar8,*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(puVar6 + 8));
        *(undefined1 *)(*(int *)(puVar6 + 4) + *(int *)(puVar6 + 8)) = 0;
      }
      if (*(int *)(iVar7 + 0x20) != 0) {
        uVar5 = puVar3[1];
        *(int *)(puVar6 + 0x10) = *(int *)(iVar7 + 0x20);
        iVar8 = FUN_2c5fee3c(uVar5);
        *(int *)(puVar6 + 0xc) = iVar8;
        if (iVar8 == 0) goto LAB_2c5fc5c8;
        FUN_2c674668(iVar8,*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(puVar6 + 0x10));
      }
      func_0x2c5fe160(iVar4,_LAB_2c5fc538);
      func_0x2c5fede0(iVar7,_LAB_2c5fc538);
    }
    else {
      if (uVar9 != 100) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x4da,_LAB_2c5fc534,_LAB_2c5fc530,_LAB_2c5fc540);
      }
LAB_2c5fc41e:
      puVar6 = (undefined1 *)func_0x2c5fbd4c();
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x713,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc79c,_LAB_2c5fc768);
      }
      *puVar6 = 0;
      iVar4 = func_0x2c5fed00(_LAB_2c5fc538,param_2,param_1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x6e3,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc78c,_LAB_2c5fc768);
      }
      if ((*(int *)(iVar4 + 0xc) == 0) || (*(int *)(iVar4 + 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x6e7,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc76c,_LAB_2c5fc768);
      }
      iVar7 = FUN_2c66c4ec();
      *(int *)(puVar6 + 0x24) = iVar7;
      iVar7 = FUN_2c5fee3c(puVar3[1],iVar7 + 1);
      *(int *)(puVar6 + 0x20) = iVar7;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x6ee,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7b8,_LAB_2c5fc768);
      }
      FUN_2c674668(iVar7,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(puVar6 + 0x24));
      *(undefined1 *)(*(int *)(puVar6 + 0x20) + *(int *)(puVar6 + 0x24)) = 0;
      iVar7 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
      *(int *)(puVar6 + 0x2c) = iVar7;
      iVar7 = FUN_2c5fee3c(puVar3[1],iVar7 + 1);
      *(int *)(puVar6 + 0x28) = iVar7;
      if (iVar7 == 0) {
LAB_2c5fc566:
        func_0x2c5fed14(iVar4,_LAB_2c5fc778);
        if (*(int *)(puVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x71a,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7ac,_LAB_2c5fc768);
        }
        if (*(int *)(puVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x71d,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7a8,_LAB_2c5fc768);
        }
        if ((*(int *)(iVar4 + 0x14) != 0) && (*(int *)(puVar6 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x720,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc7bc,_LAB_2c5fc768);
        }
        if ((*(int *)(iVar4 + 0x18) != 0) && (*(int *)(puVar6 + 0xc) == 0)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x723,_LAB_2c5fc774,_LAB_2c5fc770,_LAB_2c5fc77c,_LAB_2c5fc768);
        }
LAB_2c5fc408:
        FUN_2c5fbddc(puVar6);
        uVar5 = *puVar2;
        goto FUN_2c644080;
      }
      FUN_2c674668(iVar7,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(puVar6 + 0x2c));
      *(undefined1 *)(*(int *)(puVar6 + 0x28) + *(int *)(puVar6 + 0x2c)) = 0;
      if (*(int *)(iVar4 + 0x14) != 0) {
        iVar7 = FUN_2c66c4ec();
        *(int *)(puVar6 + 8) = iVar7;
        iVar7 = FUN_2c5fee3c(puVar3[1],iVar7 + 1);
        *(int *)(puVar6 + 4) = iVar7;
        if (iVar7 == 0) goto LAB_2c5fc566;
        FUN_2c674668(iVar7,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(puVar6 + 8));
        *(undefined1 *)(*(int *)(puVar6 + 4) + *(int *)(puVar6 + 8)) = 0;
      }
      if (*(int *)(iVar4 + 0x18) != 0) {
        uVar5 = puVar3[1];
        *(int *)(puVar6 + 0x10) = *(int *)(iVar4 + 0x18);
        iVar7 = FUN_2c5fee3c(uVar5);
        *(int *)(puVar6 + 0xc) = iVar7;
        if (iVar7 == 0) goto LAB_2c5fc566;
        FUN_2c674668(iVar7,*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(puVar6 + 0x10));
      }
      uVar5 = _LAB_2c5fc538;
      *(undefined4 *)(puVar6 + 0x34) = *(undefined4 *)(iVar4 + 0x20);
      func_0x2c5fed14(iVar4,uVar5);
    }
    iVar4 = FUN_2c644230(*puVar3,puVar6,0);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x4e0,_LAB_2c5fc534,_LAB_2c5fc530,_LAB_2c5fc53c);
    }
  }
  uVar5 = *puVar2;
FUN_2c644080:
  FUN_2c643b2c();
  uVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar9 = getCurrentExceptionNumber();
    uVar9 = uVar9 & 0x1ff;
  }
  if (uVar9 == 0) {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = isIRQinterruptsEnabled();
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar4 = getBasePriority();
      }
      if (iVar4 == 0) {
        software_interrupt(0);
        return uVar5;
      }
    }
  }
  FUN_2c643b08(uVar5,0xfffffffa);
  return 0xfffffffa;
}

