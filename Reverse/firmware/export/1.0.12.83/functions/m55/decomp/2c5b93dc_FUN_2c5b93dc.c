/* FUN_2c5b93dc @ 0x2c5b93dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5b93dc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = _LAB_2c5b9790;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5b9c40,0xd7,_LAB_2c5b9c34,_LAB_2c5b9c3c,_LAB_2c5b9c34);
  }
  if (*_LAB_2c5b9790 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  iVar2 = FUN_2c47245c(0,0x44);
  FUN_2c674268(iVar2,0,0x44);
  uVar6 = _LAB_2c5b975c;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(int *)(iVar2 + 4) = iVar2 + 0xc;
  *(int *)(iVar2 + 0x1c) = iVar2 + 0x24;
  iVar3 = FUN_2c48e424(param_1,uVar6);
  if ((iVar3 == 0) || (iVar4 = FUN_2c48e84c(), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
  }
  iVar4 = FUN_2c66c4ec(*(undefined4 *)(iVar3 + 0x10));
  iVar5 = lv_mem_alloc(iVar4 + 1);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
  }
  FUN_2c674268(iVar5,0,iVar4 + 1);
  FUN_2c6435c4(iVar5,*(undefined4 *)(iVar3 + 0x10));
  uVar6 = FUN_2c66c4ec(iVar5);
  FUN_2c5b8a68(iVar2 + 4,0,*(undefined4 *)(iVar2 + 8),iVar5,uVar6);
  if (*(int *)(iVar2 + 8) == 0) {
    uVar9 = 0xde;
    uVar6 = _LAB_2c5b9c30;
    uVar8 = _LAB_2c5b9c34;
  }
  else {
    iVar3 = FUN_2c48e424(param_1,_LAB_2c5b9760);
    if ((iVar3 == 0) || (iVar4 = FUN_2c48e84c(), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
    }
    iVar4 = FUN_2c66c4ec(*(undefined4 *)(iVar3 + 0x10));
    iVar5 = lv_mem_alloc(iVar4 + 1);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
    }
    FUN_2c674268(iVar5,0,iVar4 + 1);
    FUN_2c6435c4(iVar5,*(undefined4 *)(iVar3 + 0x10));
    uVar6 = FUN_2c66c4ec(iVar5);
    FUN_2c5b8a68(iVar2 + 0x1c,0,*(undefined4 *)(iVar2 + 0x20),iVar5,uVar6);
    if (*(int *)(iVar2 + 0x20) == 0) {
      uVar9 = 0xe4;
      uVar6 = _LAB_2c5b9c38;
      uVar8 = _LAB_2c5b9c34;
    }
    else {
      iVar3 = FUN_2c48e424(param_1,_LAB_2c5b9764);
      if ((iVar3 == 0) || (iVar4 = FUN_2c48e83c(), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c5b9b04,0x1e,_LAB_2c5b9b08,_LAB_2c5b9b0c,_LAB_2c5b9b08);
      }
      iVar3 = FUN_2c672b70(*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c));
      *(int *)(iVar2 + 0x34) = iVar3;
      if (iVar3 != 0) {
        if (*piVar1 == 0) {
          FUN_2c4723c4();
          *piVar1 = 1;
        }
        iVar3 = FUN_2c47245c(0,0xc0);
        FUN_2c674268(iVar3,0,0xc0);
        uVar6 = _LAB_2c5b975c;
        *(int *)(iVar3 + 4) = iVar3 + 0xc;
        *(undefined1 *)(iVar3 + 0xc) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = 7;
        *(undefined1 *)(iVar3 + 0x28) = 0;
        *(int *)(iVar3 + 0x20) = iVar3 + 0x28;
        *(undefined1 *)(iVar3 + 0x40) = 0;
        *(int *)(iVar3 + 0x38) = iVar3 + 0x40;
        *(undefined1 *)(iVar3 + 0x58) = 0;
        *(int *)(iVar3 + 0x50) = iVar3 + 0x58;
        *(undefined1 *)(iVar3 + 0x70) = 0;
        *(int *)(iVar3 + 0x68) = iVar3 + 0x70;
        *(undefined1 *)(iVar3 + 0x88) = 0;
        *(int *)(iVar3 + 0x80) = iVar3 + 0x88;
        *(undefined1 *)(iVar3 + 0xa0) = 0;
        *(int *)(iVar3 + 0x98) = iVar3 + 0xa0;
        iVar4 = FUN_2c48e424(param_1,uVar6);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 4,0,*(undefined4 *)(iVar3 + 8),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9768);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        iVar4 = FUN_2c66c540(iVar7,_LAB_2c5b976c,0x18);
        uVar6 = 0;
        if (iVar4 != 0) {
          iVar4 = FUN_2c66c540(iVar7,_LAB_2c5b9770,0x15);
          if (iVar4 == 0) {
            uVar6 = 1;
          }
          else {
            iVar4 = FUN_2c66c540(iVar7,_LAB_2c5b9774,0x11);
            if (iVar4 == 0) {
              uVar6 = 2;
            }
            else {
              iVar4 = FUN_2c66c540(iVar7,_LAB_2c5b9778,0xd);
              if (iVar4 == 0) {
                uVar6 = 3;
              }
              else {
                iVar4 = FUN_2c66c540(iVar7,_LAB_2c5b977c,0xf);
                if (iVar4 == 0) {
                  uVar6 = 4;
                }
                else {
                  iVar4 = FUN_2c66c540(iVar7,_LAB_2c5b9780,0x10);
                  if (iVar4 == 0) {
                    uVar6 = 5;
                  }
                  else {
                    iVar4 = FUN_2c66c540(iVar7,_LAB_2c5b9784,0x10);
                    if (iVar4 == 0) {
                      uVar6 = 6;
                    }
                    else {
                      uVar6 = 7;
                    }
                  }
                }
              }
            }
          }
        }
        *(undefined4 *)(iVar3 + 0x1c) = uVar6;
        iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9788);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x38,0,*(undefined4 *)(iVar3 + 0x3c),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9760);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x20,0,*(undefined4 *)(iVar3 + 0x24),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,_LAB_2c5b978c);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x50,0,*(undefined4 *)(iVar3 + 0x54),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9ae4);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x68,0,*(undefined4 *)(iVar3 + 0x6c),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9ae8);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x80,0,*(undefined4 *)(iVar3 + 0x84),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9aec);
        if ((iVar4 != 0) && (iVar5 = FUN_2c48e84c(), iVar5 != 0)) {
          iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
          iVar7 = lv_mem_alloc(iVar5 + 1);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c5b9c40,0x14,_LAB_2c5b9c44,_LAB_2c5b9c48,_LAB_2c5b9c44);
          }
          FUN_2c674268(iVar7,0,iVar5 + 1);
          FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
          uVar6 = FUN_2c66c4ec(iVar7);
          FUN_2c5b8a68(iVar3 + 0x98,0,*(undefined4 *)(iVar3 + 0x9c),iVar7,uVar6);
          iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9af0);
          if ((iVar4 == 0) || (iVar5 = FUN_2c48e83c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c5b9b04,0x1e,_LAB_2c5b9b08,_LAB_2c5b9b0c,_LAB_2c5b9b08);
          }
          uVar6 = FUN_2c672b70(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
          *(undefined4 *)(iVar3 + 0xb0) = uVar6;
          iVar4 = FUN_2c48e424(param_1,_LAB_2c5b9af4);
          if ((iVar4 == 0) || (iVar5 = FUN_2c48e83c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c5b9b04,0x1e,_LAB_2c5b9b08,_LAB_2c5b9b0c,_LAB_2c5b9b08);
          }
          uVar8 = FUN_2c672b70(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
          uVar6 = _LAB_2c5b9af8;
          *(undefined4 *)(iVar3 + 0xb4) = uVar8;
          iVar4 = FUN_2c48e424(param_1,uVar6);
          if ((iVar4 != 0) && (iVar5 = FUN_2c48e83c(), iVar5 != 0)) {
            uVar6 = FUN_2c672b70(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
            *(undefined4 *)(iVar3 + 0xb8) = uVar6;
            *(int *)(iVar2 + 0x38) = iVar3;
            return iVar2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5b9b04,0x1e,_LAB_2c5b9b08,_LAB_2c5b9b0c,_LAB_2c5b9b08);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c5b9b04,0xe,_LAB_2c5b9afc,_LAB_2c5b9b00,_LAB_2c5b9afc);
      }
      uVar9 = 0xea;
      uVar6 = _LAB_2c5b9b10;
      uVar8 = _LAB_2c5b9b14;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5b9b04,uVar9,uVar8,uVar6,uVar8);
}

