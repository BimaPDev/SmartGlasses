/* FUN_2c535784 @ 0x2c535784 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c535784(int param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puStack_54;
  uint auStack_4c [4];
  uint *puStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  int iStack_24;
  
  iStack_24 = *_LAB_2c5358cc;
  func_0x2c535310();
  if (param_3 == 0) {
    puVar2 = (undefined1 *)registry_lookup(0x6115);
  }
  else {
    puVar2 = (undefined1 *)registry_lookup(0x6116);
  }
  if (puVar2 == (undefined1 *)0x0) goto LAB_2c5357b8;
  uVar3 = FUN_2c66c4ec(puVar2);
  piVar1 = _LAB_2c5358d4;
  if (uVar3 < 0x10) {
    puStack_54 = auStack_4c;
    if (uVar3 == 1) {
      auStack_4c[0] = CONCAT31(auStack_4c[0]._1_3_,*puVar2);
    }
    else if (uVar3 != 0) goto LAB_2c535876;
  }
  else {
    if (*_LAB_2c5358d4 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puStack_54 = (uint *)FUN_2c47245c(0,uVar3 + 1);
    auStack_4c[0] = uVar3;
LAB_2c535876:
    FUN_2c674668(puStack_54,puVar2,uVar3);
  }
  *(undefined1 *)((int)puStack_54 + uVar3) = 0;
  FUN_2c638730(*(undefined4 *)(param_1 + 4),puStack_54);
  if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puStack_3c = auStack_34;
  if (param_4 == (undefined1 *)0x0) {
LAB_2c5357b8:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c5358d0);
  }
  uVar3 = FUN_2c66c4ec(param_4);
  piVar1 = _LAB_2c5358d4;
  if (uVar3 < 0x10) {
    puVar4 = auStack_34;
    if (uVar3 == 1) {
      auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,*param_4);
      goto LAB_2c535812;
    }
    if (uVar3 == 0) goto LAB_2c535812;
  }
  else {
    if (*_LAB_2c5358d4 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puStack_3c = (uint *)FUN_2c47245c(0,uVar3 + 1);
    puVar4 = puStack_3c;
    auStack_34[0] = uVar3;
  }
  FUN_2c674668(puVar4,param_4,uVar3);
  puVar4 = puStack_3c;
LAB_2c535812:
  *(undefined1 *)((int)puVar4 + uVar3) = 0;
  uStack_38 = uVar3;
  FUN_2c638730(*(undefined4 *)(param_1 + 8),puStack_3c);
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c5358cc != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

