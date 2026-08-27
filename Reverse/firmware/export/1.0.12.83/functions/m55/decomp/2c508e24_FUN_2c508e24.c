/* FUN_2c508e24 @ 0x2c508e24 */

/* WARNING: Removing unreachable block (ram,0x2c508b9a) */
/* WARNING: Removing unreachable block (ram,0x2c508bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c508e24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined1 uStack_25;
  int iStack_24;
  undefined4 uStack_18;
  
  puVar1 = _LAB_2c508f2c;
  uStack_18 = param_4;
  uVar5 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar6 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  FUN_2c6072bc(uVar6,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x18),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x18),2,0);
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = FUN_2c5e2e80(_LAB_2c508f30);
  FUN_2c606e38(uVar12,uVar6,0);
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = registry_lookup(0x12000);
  FUN_2c638730(uVar12,uVar6);
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  uVar12 = FUN_2c606a10(uVar5);
  uVar6 = _DAT_2c508f34;
  *(undefined4 *)(param_1 + 0x1c) = uVar12;
  FUN_2c603a04(uVar12,0,uVar6);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),10,0x78);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x1c),0xc,0);
  uVar12 = *puVar1;
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x1c),uVar12,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x1c),0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),1,0,0x100);
  uVar6 = FUN_2c606a10(uVar5);
  uVar5 = _DAT_2c508f34;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  FUN_2c603a04(uVar6,0,uVar5);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),10,0x78);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x20),0xc,0);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x20),uVar12,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x20),0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x20),3,0,0x100);
  iStack_24 = *DAT_2c508e18;
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar5 = FUN_2c606a10();
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  FUN_2c62a470();
  uVar6 = FUN_2c62a47c();
  FUN_2c607048(uVar5,uVar6,0x27d1);
  uVar9 = 0;
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
    uVar7 = uVar9 & 0xff;
    uVar9 = uVar9 + 1;
    FUN_2c508910(param_1,uVar7);
  } while (uVar9 != 5);
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
  piVar10 = (int *)(param_1 + 0x3c);
  piVar11 = (int *)(param_1 + 0x28);
  iVar3 = FUN_2c607394(*(undefined4 *)(*piVar11 + 0xc));
  piVar15 = piVar11;
  do {
    piVar13 = piVar15 + 1;
    iVar4 = FUN_2c607394(*(undefined4 *)(*piVar15 + 0xc));
    if (iVar3 <= iVar4) {
      iVar3 = FUN_2c607394(*(undefined4 *)(*piVar15 + 0xc));
    }
    piVar14 = piVar11;
    piVar15 = piVar13;
  } while (piVar10 != piVar13);
  do {
    piVar15 = piVar14 + 1;
    uVar6 = *(undefined4 *)(*piVar14 + 0xc);
    uVar5 = FUN_2c607354(uVar6);
    FUN_2c606f34(uVar6,uVar5,iVar3);
    piVar14 = piVar15;
  } while (piVar10 != piVar15);
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
  iVar3 = FUN_2c6073f8(**(undefined4 **)(param_1 + 0x28));
  piVar15 = piVar11;
  do {
    piVar13 = piVar15 + 1;
    iVar4 = FUN_2c6073f8(*(undefined4 *)*piVar15);
    if (iVar3 <= iVar4) {
      iVar3 = FUN_2c6073f8(*(undefined4 *)*piVar15);
    }
    piVar15 = piVar13;
  } while (piVar13 != piVar10);
  do {
    piVar15 = piVar11 + 1;
    FUN_2c60710c(*(undefined4 *)*piVar11,iVar3);
    piVar11 = piVar15;
  } while (piVar10 != piVar15);
  FUN_2c60710c(*(undefined4 *)(param_1 + 0x1c),iVar3);
  FUN_2c60710c(*(undefined4 *)(param_1 + 0x20),iVar3);
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
  if (*(char *)(param_1 + 0x15) == '\x05') {
    iVar3 = -1;
    puVar8 = *(undefined1 **)(param_1 + 0x40);
    if (puVar8 != *(undefined1 **)(param_1 + 0x44)) {
      *(undefined1 **)(param_1 + 0x44) = puVar8;
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
    while( true ) {
      uStack_25 = (undefined1)iVar3;
      if (puVar8 == *(undefined1 **)(param_1 + 0x48)) {
        FUN_2c505c90(param_1 + 0x40,puVar8,&uStack_25);
      }
      else {
        *puVar8 = uStack_25;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      if (iVar3 == 4) break;
      iVar3 = iVar3 + 1;
      puVar8 = *(undefined1 **)(param_1 + 0x44);
    }
  }
  else {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),
                         *(char *)(*(int *)(param_1 + 0x44) + -1) + -1);
    FUN_2c605208(uVar5,0);
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
    FUN_2c605208(uVar5,0);
  }
  uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
  FUN_2c606d90(uVar5,0xff,0);
  piVar11 = DAT_2c508e18;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*piVar11 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uStack_18 = 0;
  iVar3 = 0;
  do {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
    cVar2 = FUN_2c6033b4(uVar5,0,0x21);
    if (cVar2 == '\x19') {
      uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
      FUN_2c606d6c(uVar5,0);
    }
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
    cVar2 = FUN_2c6033b4(uVar5,0,0x31);
    if (cVar2 == '\0') {
      uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
      FUN_2c606d90(uVar5,0x4c,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
  FUN_2c606d6c(uVar5,0x19,0);
  if (-1 < **(char **)(param_1 + 0x40)) {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar5,0);
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),(int)**(char **)(param_1 + 0x40));
    FUN_2c606d90(uVar5,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) < '\x05') {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar5,0);
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),
                         (int)*(char *)(*(int *)(param_1 + 0x44) + -1));
    FUN_2c606d90(uVar5,0);
  }
  iVar4 = param_1 + 0xec;
  iVar3 = param_1 + 0x188;
  FUN_2c50ed7c(iVar4);
  FUN_2c50ed7c(iVar3);
  if (**(char **)(param_1 + 0x40) == -1) {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar2 != '\0') {
      FUN_2c50ece8(iVar4,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar2 != '\x19') {
      FUN_2c50ec60(iVar4,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) == '\x05') {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
    if (cVar2 != '\0') {
      FUN_2c50ece8(iVar3,*(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  else {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
    if (cVar2 != '\x19') {
      FUN_2c50ec60(iVar3,*(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

