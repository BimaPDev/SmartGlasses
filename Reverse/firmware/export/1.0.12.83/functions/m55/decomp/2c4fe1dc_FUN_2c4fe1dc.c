/* FUN_2c4fe1dc @ 0x2c4fe1dc */

/* WARNING: Removing unreachable block (ram,0x2c5032b4) */
/* WARNING: Removing unreachable block (ram,0x2c5032c2) */
/* WARNING: Removing unreachable block (ram,0x2c5032c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fe1dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x2c4ff9d4();
    func_0x2c5003e8();
    FUN_2c602ea8(*(undefined4 *)(param_1 + 4));
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar1 = FUN_2c602de4();
  FUN_2c602df0();
  FUN_2c602f64(uVar1,*(undefined4 *)(param_1 + 4));
  FUN_2c603110(*(undefined4 *)(param_1 + 4));
  FUN_2c602454(*(undefined4 *)(param_1 + 4),_LAB_2c4fe238,0xd,param_1);
  iVar2 = func_0x2c4ff9d4();
  pcVar5 = *(char **)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 4);
  iVar3 = FUN_2c478b68();
  (**(code **)(iVar3 + 0x34))(1);
  iVar3 = thunk_FUN_2c489a64();
  if (iVar3 == 0) {
    FUN_2c63b92c(1);
  }
  uVar4 = lv_mem_alloc(0x174);
  func_0x2c5028e0(uVar4,uVar1);
  **(undefined4 **)(iVar2 + 0xa0) = uVar4;
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    FUN_2c48e3b8(pcVar5);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c500a08,0x3cc,_LAB_2c500a04,_LAB_2c500a00,_LAB_2c500a04);
  }
  puVar6 = *(undefined4 **)(iVar2 + 0xa4);
  if (*(char *)((int)puVar6 + 0x4b) != '\0') {
    if (puVar6[0x10] == puVar6[0x11]) {
      *puVar6 = **(undefined4 **)(iVar2 + 0xa0);
      **(undefined4 **)(iVar2 + 0xa0) = 0;
      uVar1 = *(undefined4 *)(iVar2 + 0xa0);
      puVar6 = *(undefined4 **)(iVar2 + 0xa4);
      *(undefined4 **)(iVar2 + 0xa0) = puVar6;
      *(undefined4 *)(iVar2 + 0xa4) = uVar1;
      func_0x2c5030f4(*puVar6);
      func_0x2c4ffab4(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c500a08,0x14e,_LAB_2c500a0c,_LAB_2c500a00,_LAB_2c500a0c);
    }
    func_0x2c500850(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c500114,0x1ca,DAT_2c50010c,DAT_2c500110,DAT_2c50010c,unaff_r4,unaff_r4,
                 unaff_r5,unaff_lr);
  }
  func_0x2c500850(iVar2);
  if (*(char *)(iVar2 + 5) != '\x06') {
    iVar2 = **(int **)(iVar2 + 0xa0);
    if (*(int *)(iVar2 + 0x160) != 0) {
      func_0x2c50322c(iVar2 + 0x160);
    }
    if (*(char *)(iVar2 + 0x15c) == '\0') {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5030e8,0x38d,_LAB_2c5030e0,_LAB_2c5030e4,_LAB_2c5030e0,unaff_r4,unaff_r5,
                 unaff_r6,unaff_lr);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c4ffd30,0x13f,_LAB_2c4ffd28,_LAB_2c4ffd2c,_LAB_2c4ffd28,unaff_r4,unaff_r4,
               unaff_r5,unaff_lr);
}

