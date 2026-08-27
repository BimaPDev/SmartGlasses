/* FUN_2c5cb4c8 @ 0x2c5cb4c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cb4c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint *puStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  int iStack_1c;
  
  FUN_2c48e424(param_4);
  pcVar4 = (char *)FUN_2c48de10();
  iStack_1c = *_LAB_2c5cb4b4;
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) goto LAB_2c5cb3ca;
  uVar1 = FUN_2c5c685c(param_1);
  iVar2 = func_0x2c5c6e80(uVar1,pcVar4);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cb4c0,0x273,_LAB_2c5cb4bc,_LAB_2c5cb4b8);
  }
  puStack_34 = auStack_2c;
  uStack_30 = FUN_2c66c4ec(pcVar4);
  uStack_40 = uStack_30;
  if (uStack_30 < 0x10) {
    puVar3 = auStack_2c;
    if (uStack_30 == 1) {
      auStack_2c[0] = CONCAT31(auStack_2c[0]._1_3_,*pcVar4);
    }
    else if (uStack_30 != 0) goto LAB_2c5cb47c;
  }
  else {
    puStack_34 = (uint *)FUN_2c5ca864(&uStack_40,0);
    auStack_2c[0] = uStack_40;
    puVar3 = puStack_34;
LAB_2c5cb47c:
    FUN_2c674668(puVar3,pcVar4,uStack_30);
    puVar3 = puStack_34;
    uStack_30 = uStack_40;
  }
  *(undefined1 *)((int)puVar3 + uStack_30) = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x2c5d60e8(&puStack_34,&uStack_40);
  uVar1 = FUN_2c5c685c();
  func_0x2c5c7118(uVar1,&uStack_40);
  uVar6 = uStack_3c;
  if (uStack_40 != uStack_3c) {
    iVar2 = uStack_40 + 8;
    uVar5 = uStack_40;
    do {
      if (iVar2 != *(int *)(iVar2 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      uVar5 = uVar5 + 0x18;
      iVar2 = iVar2 + 0x18;
      uVar6 = uStack_40;
    } while (uStack_3c != uVar5);
  }
  if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,uVar6);
  }
  if (puStack_34 != auStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c5cb3ca:
  if (*_LAB_2c5cb4b4 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

