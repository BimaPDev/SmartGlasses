/* FUN_2c63b1dc @ 0x2c63b1dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63b1dc(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = _LAB_2c63b3a4;
  if (*param_4 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x106,DAT_2c63b38c,DAT_2c63b388,_LAB_2c63b3a8,_LAB_2c63b384);
  }
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 0xb) {
    if ((*_LAB_2c63b3a4 != 0) && (iVar5 = FUN_2c485770(), puVar1 = DAT_2c63b398, iVar5 == 0)) {
      FUN_2c644044(*DAT_2c63b398,0xffffffff);
      for (iVar5 = FUN_2c485890(*piVar2); iVar4 = FUN_2c4858a8(*piVar2), iVar5 != iVar4;
          iVar5 = FUN_2c4858c0(iVar5)) {
        if ((code *)**(undefined4 **)(iVar5 + 4) != (code *)0x0) {
          (*(code *)**(undefined4 **)(iVar5 + 4))();
        }
      }
      FUN_2c644080(*puVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xe4,DAT_2c63b38c,DAT_2c63b388,_LAB_2c63b3ac);
  }
  if (iVar5 == 0xc) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xf7,DAT_2c63b38c,DAT_2c63b388,_LAB_2c63b39c);
  }
  if (iVar5 != 10) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x115,DAT_2c63b38c,DAT_2c63b388,_LAB_2c63b380,_LAB_2c63b384);
  }
  if ((*_LAB_2c63b390 != 0) && (iVar5 = FUN_2c485770(), iVar5 == 0)) {
    uVar3 = FUN_2c489a64();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xcb,DAT_2c63b38c,DAT_2c63b388,_LAB_2c63b394,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xc3,DAT_2c63b38c,DAT_2c63b388,_LAB_2c63b3b4,_LAB_2c63b3b0);
}

