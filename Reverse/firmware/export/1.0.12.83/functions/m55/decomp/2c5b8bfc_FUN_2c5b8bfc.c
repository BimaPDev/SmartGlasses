/* FUN_2c5b8bfc @ 0x2c5b8bfc */

undefined4 * FUN_2c5b8bfc(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar1 = DAT_2c5b8f94;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5b92dc,0x102,DAT_2c5b92ec,DAT_2c5b92f0,DAT_2c5b92ec);
  }
  if (*DAT_2c5b8f94 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x44);
  FUN_2c674268(puVar2,0,0x44);
  uVar6 = DAT_2c5b8f78;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  puVar2[1] = puVar2 + 3;
  puVar2[7] = puVar2 + 9;
  *puVar2 = 1;
  iVar3 = FUN_2c48e424(param_1,uVar6);
  if ((iVar3 == 0) || (iVar4 = FUN_2c48e84c(), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
  }
  iVar4 = FUN_2c66c4ec(*(undefined4 *)(iVar3 + 0x10));
  iVar5 = lv_mem_alloc(iVar4 + 1);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5b92dc,0x14,DAT_2c5b92d4,DAT_2c5b92fc,DAT_2c5b92d4);
  }
  FUN_2c674268(iVar5,0,iVar4 + 1);
  FUN_2c6435c4(iVar5,*(undefined4 *)(iVar3 + 0x10));
  uVar6 = FUN_2c66c4ec(iVar5);
  FUN_2c5b8a68(puVar2 + 1,0,puVar2[2],iVar5,uVar6);
  if (puVar2[2] == 0) {
    uVar6 = 0x108;
    uVar8 = DAT_2c5b92f4;
  }
  else {
    iVar3 = FUN_2c48e424(param_1,DAT_2c5b8f7c);
    if ((iVar3 == 0) || (iVar4 = FUN_2c48e84c(), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
    }
    iVar4 = FUN_2c66c4ec(*(undefined4 *)(iVar3 + 0x10));
    iVar5 = lv_mem_alloc(iVar4 + 1);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5b92dc,0x14,DAT_2c5b92d4,DAT_2c5b92fc,DAT_2c5b92d4);
    }
    FUN_2c674268(iVar5,0,iVar4 + 1);
    FUN_2c6435c4(iVar5,*(undefined4 *)(iVar3 + 0x10));
    uVar6 = FUN_2c66c4ec(iVar5);
    FUN_2c5b8a68(puVar2 + 7,0,puVar2[8],iVar5,uVar6);
    if (puVar2[8] == 0) {
      uVar6 = 0x10e;
      uVar8 = DAT_2c5b92f8;
    }
    else {
      iVar3 = FUN_2c48e424(param_1,DAT_2c5b8f80);
      if ((iVar3 == 0) || (iVar4 = FUN_2c48e83c(), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5b92dc,0x1e,DAT_2c5b92e0,DAT_2c5b92e4,DAT_2c5b92e0);
      }
      iVar3 = FUN_2c672b70(*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c));
      puVar2[0xd] = iVar3;
      if (iVar3 != 0) {
        if (*piVar1 == 0) {
          FUN_2c4723c4();
          *piVar1 = 1;
        }
        iVar3 = FUN_2c47245c(0,0xcc);
        FUN_2c674268(iVar3,0,0xcc);
        uVar6 = DAT_2c5b8f84;
        *(undefined1 *)(iVar3 + 0xc) = 0;
        *(undefined1 *)(iVar3 + 0x2c) = 0;
        *(undefined1 *)(iVar3 + 0x44) = 0;
        *(undefined1 *)(iVar3 + 0x5c) = 0;
        *(undefined1 *)(iVar3 + 0x74) = 0;
        *(undefined1 *)(iVar3 + 0x8c) = 0;
        *(undefined1 *)(iVar3 + 0xa4) = 0;
        *(undefined1 *)(iVar3 + 0xbc) = 0;
        *(int *)(iVar3 + 4) = iVar3 + 0xc;
        *(int *)(iVar3 + 0x6c) = iVar3 + 0x74;
        *(int *)(iVar3 + 0x24) = iVar3 + 0x2c;
        *(int *)(iVar3 + 0x84) = iVar3 + 0x8c;
        *(int *)(iVar3 + 0x3c) = iVar3 + 0x44;
        *(int *)(iVar3 + 0x9c) = iVar3 + 0xa4;
        *(int *)(iVar3 + 0x54) = iVar3 + 0x5c;
        *(int *)(iVar3 + 0xb4) = iVar3 + 0xbc;
        iVar4 = FUN_2c48e424(param_1,uVar6);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e83c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0x1e,DAT_2c5b92e0,DAT_2c5b92e4,DAT_2c5b92e0);
        }
        uVar6 = FUN_2c672b70(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
        *(undefined4 *)(iVar3 + 0x1c) = uVar6;
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b8f80);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e83c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0x1e,DAT_2c5b92e0,DAT_2c5b92e4,DAT_2c5b92e0);
        }
        uVar6 = FUN_2c672b70(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
        *(undefined4 *)(iVar3 + 0x20) = uVar6;
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b8f78);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 4,0,*(undefined4 *)(iVar3 + 8),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b8f7c);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x24,0,*(undefined4 *)(iVar3 + 0x28),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b8f88);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x3c,0,*(undefined4 *)(iVar3 + 0x40),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b8f8c);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x54,0,*(undefined4 *)(iVar3 + 0x58),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b8f90);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x6c,0,*(undefined4 *)(iVar3 + 0x70),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b92c8);
        if ((iVar4 == 0) || (iVar5 = FUN_2c48e84c(), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
        }
        iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
        iVar7 = lv_mem_alloc(iVar5 + 1);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
        }
        FUN_2c674268(iVar7,0,iVar5 + 1);
        FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
        uVar6 = FUN_2c66c4ec(iVar7);
        FUN_2c5b8a68(iVar3 + 0x84,0,*(undefined4 *)(iVar3 + 0x88),iVar7,uVar6);
        iVar4 = FUN_2c48e424(param_1,DAT_2c5b92cc);
        if ((iVar4 != 0) && (iVar5 = FUN_2c48e84c(), iVar5 != 0)) {
          iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
          iVar7 = lv_mem_alloc(iVar5 + 1);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
          }
          FUN_2c674268(iVar7,0,iVar5 + 1);
          FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
          uVar6 = FUN_2c66c4ec(iVar7);
          FUN_2c5b8a68(iVar3 + 0x9c,0,*(undefined4 *)(iVar3 + 0xa0),iVar7,uVar6);
          iVar4 = FUN_2c48e424(param_1,DAT_2c5b92d0);
          if ((iVar4 != 0) && (iVar5 = FUN_2c48e84c(), iVar5 != 0)) {
            iVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar4 + 0x10));
            iVar7 = lv_mem_alloc(iVar5 + 1);
            if (iVar7 != 0) {
              FUN_2c674268(iVar7,0,iVar5 + 1);
              FUN_2c6435c4(iVar7,*(undefined4 *)(iVar4 + 0x10));
              uVar6 = FUN_2c66c4ec(iVar7);
              FUN_2c5b8a68(iVar3 + 0xb4,0,*(undefined4 *)(iVar3 + 0xb8),iVar7,uVar6);
              puVar2[0xe] = iVar3;
              return puVar2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,DAT_2c5b93a8,0x14,DAT_2c5b93a0,DAT_2c5b93a4,DAT_2c5b93a0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5b92dc,0xe,DAT_2c5b92d4,DAT_2c5b92d8,DAT_2c5b92d4);
      }
      uVar6 = 0x114;
      uVar8 = DAT_2c5b92e8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5b92dc,uVar6,DAT_2c5b92ec,uVar8,DAT_2c5b92ec);
}

