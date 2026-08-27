/* FUN_2c57aae8 @ 0x2c57aae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57aae8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  uint uStack_24;
  
  uVar1 = _LAB_2c57abc0;
  uStack_24 = *_LAB_2c57abb8;
  uStack_68 = 0;
  auStack_64[0] = 0;
  uStack_50 = 0;
  auStack_4c[0] = 0;
  uStack_38 = 0;
  auStack_34[0] = 0;
  uStack_70 = _LAB_2c57abc0;
  puStack_6c = auStack_64;
  puStack_54 = auStack_4c;
  puStack_3c = auStack_34;
  FUN_2c557570(param_2,&uStack_70,param_3,0);
  iVar2 = FUN_2c57a9d4(puStack_6c,uStack_68,_LAB_2c57abbc);
  if (iVar2 == 0) {
    FUN_2c57e398(*(undefined4 *)(param_1 + 4),&puStack_54,&puStack_3c);
    uStack_70 = uVar1;
    if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_6c != auStack_64) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    uVar3 = 1;
  }
  else {
    uStack_70 = uVar1;
    if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_6c != auStack_64) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    uVar3 = 0;
  }
  uStack_70 = uVar1;
  if ((*_LAB_2c57abb8 ^ uStack_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,puStack_6c,*_LAB_2c57abb8 ^ uStack_24,0);
}

