/* FUN_2c4b4a28 @ 0x2c4b4a28 */

void FUN_2c4b4a28(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  
  local_14 = *DAT_2c4b4aac;
  iVar2 = FUN_2c4969a8();
  if (iVar2 != 0) {
    FUN_2c4b4f50(0x28);
  }
  FUN_2c4afd4c(&local_1c,&local_18);
  uVar1 = local_18;
  uVar3 = FUN_2c4afd40();
  if (uVar1 + uVar3 < 0x8001) {
    uVar4 = FUN_2c4afd34();
    if (0x7fff < local_18) {
      local_18 = 0x8000;
    }
    FUN_2c673b58(1,local_1c,local_18);
    if (0x7fff < uVar3) {
      uVar3 = 0x8000;
    }
    FUN_2c673b58(1,uVar4,uVar3);
  }
  else {
    FUN_2c4bbabc(1);
  }
  if (*DAT_2c4b4aac == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

