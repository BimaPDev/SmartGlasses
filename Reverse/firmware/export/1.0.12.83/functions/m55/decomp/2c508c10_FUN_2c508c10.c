/* FUN_2c508c10 @ 0x2c508c10 */

/* WARNING: Removing unreachable block (ram,0x2c508b9a) */
/* WARNING: Removing unreachable block (ram,0x2c508bac) */

void FUN_2c508c10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined1 local_25;
  int local_24;
  
  local_24 = *DAT_2c508e18;
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar2 = FUN_2c606a10();
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  FUN_2c62a470();
  uVar3 = FUN_2c62a47c();
  FUN_2c607048(uVar2,uVar3,0x27d1);
  uVar8 = 0;
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x24),2,0,0x100);
  FUN_2c5081a4(*(undefined4 *)(param_1 + 0x24));
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),0x10);
  FUN_2c60497c(*(undefined4 *)(param_1 + 0x24),0);
  FUN_2c627e28(*(undefined4 *)(param_1 + 0x24),0);
  FUN_2c627e50(*(undefined4 *)(param_1 + 0x24),0,2);
  FUN_2c606d54(*(undefined4 *)(param_1 + 0x24),0xc,0);
  FUN_2c606d30(*(undefined4 *)(param_1 + 0x24),0x16,0);
  FUN_2c606d3c(*(undefined4 *)(param_1 + 0x24),0x16,0);
  FUN_2c602454(*(undefined4 *)(param_1 + 0x24),DAT_2c508e1c,9,param_1);
  FUN_2c602454(*(undefined4 *)(param_1 + 0x24),DAT_2c508e20,10,param_1);
  do {
    uVar6 = uVar8 & 0xff;
    uVar8 = uVar8 + 1;
    FUN_2c508910(param_1,uVar6);
  } while (uVar8 != 5);
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
  piVar9 = (int *)(param_1 + 0x3c);
  piVar10 = (int *)(param_1 + 0x28);
  iVar4 = FUN_2c607394(*(undefined4 *)(*piVar10 + 0xc));
  piVar13 = piVar10;
  do {
    piVar11 = piVar13 + 1;
    iVar5 = FUN_2c607394(*(undefined4 *)(*piVar13 + 0xc));
    if (iVar4 <= iVar5) {
      iVar4 = FUN_2c607394(*(undefined4 *)(*piVar13 + 0xc));
    }
    piVar12 = piVar10;
    piVar13 = piVar11;
  } while (piVar9 != piVar11);
  do {
    piVar13 = piVar12 + 1;
    uVar3 = *(undefined4 *)(*piVar12 + 0xc);
    uVar2 = FUN_2c607354(uVar3);
    FUN_2c606f34(uVar3,uVar2,iVar4);
    piVar12 = piVar13;
  } while (piVar9 != piVar13);
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
  iVar4 = FUN_2c6073f8(**(undefined4 **)(param_1 + 0x28));
  piVar13 = piVar10;
  do {
    piVar11 = piVar13 + 1;
    iVar5 = FUN_2c6073f8(*(undefined4 *)*piVar13);
    if (iVar4 <= iVar5) {
      iVar4 = FUN_2c6073f8(*(undefined4 *)*piVar13);
    }
    piVar13 = piVar11;
  } while (piVar11 != piVar9);
  do {
    piVar13 = piVar10 + 1;
    FUN_2c60710c(*(undefined4 *)*piVar10,iVar4);
    piVar10 = piVar13;
  } while (piVar9 != piVar13);
  FUN_2c60710c(*(undefined4 *)(param_1 + 0x1c),iVar4);
  FUN_2c60710c(*(undefined4 *)(param_1 + 0x20),iVar4);
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
  if (*(char *)(param_1 + 0x15) == '\x05') {
    iVar4 = -1;
    puVar7 = *(undefined1 **)(param_1 + 0x40);
    if (puVar7 != *(undefined1 **)(param_1 + 0x44)) {
      *(undefined1 **)(param_1 + 0x44) = puVar7;
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
    while( true ) {
      local_25 = (undefined1)iVar4;
      if (puVar7 == *(undefined1 **)(param_1 + 0x48)) {
        FUN_2c505c90(param_1 + 0x40,puVar7,&local_25);
      }
      else {
        *puVar7 = local_25;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      if (iVar4 == 4) break;
      iVar4 = iVar4 + 1;
      puVar7 = *(undefined1 **)(param_1 + 0x44);
    }
  }
  else {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),
                         *(char *)(*(int *)(param_1 + 0x44) + -1) + -1);
    FUN_2c605208(uVar2,0);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
    FUN_2c605208(uVar2,0);
  }
  uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
  FUN_2c606d90(uVar2,0xff,0);
  piVar10 = DAT_2c508e18;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*piVar10 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar4 = 0;
  do {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar4);
    cVar1 = FUN_2c6033b4(uVar2,0,0x21);
    if (cVar1 == '\x19') {
      uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar4);
      FUN_2c606d6c(uVar2,0);
    }
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar4);
    cVar1 = FUN_2c6033b4(uVar2,0,0x31);
    if (cVar1 == '\0') {
      uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar4);
      FUN_2c606d90(uVar2,0x4c,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
  FUN_2c606d6c(uVar2,0x19,0);
  if (-1 < **(char **)(param_1 + 0x40)) {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar2,0);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),(int)**(char **)(param_1 + 0x40));
    FUN_2c606d90(uVar2,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) < '\x05') {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar2,0);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),
                         (int)*(char *)(*(int *)(param_1 + 0x44) + -1));
    FUN_2c606d90(uVar2,0);
  }
  iVar5 = param_1 + 0xec;
  iVar4 = param_1 + 0x188;
  FUN_2c50ed7c(iVar5);
  FUN_2c50ed7c(iVar4);
  if (**(char **)(param_1 + 0x40) == -1) {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar1 != '\0') {
      FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar1 != '\x19') {
      FUN_2c50ec60(iVar5,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) == '\x05') {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
    if (cVar1 != '\0') {
      FUN_2c50ece8(iVar4,*(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  else {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
    if (cVar1 != '\x19') {
      FUN_2c50ec60(iVar4,*(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

