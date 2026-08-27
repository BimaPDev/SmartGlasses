/* FUN_2c628c58 @ 0x2c628c58 */

void FUN_2c628c58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_114;
  undefined1 auStack_110 [252];
  int local_14;
  
  local_14 = *DAT_2c628cd4;
  iVar2 = FUN_2c628c18(DAT_2c628cd8,param_2,param_3,0);
  if (iVar2 != 1) {
    local_114 = 0;
    FUN_2c674268(auStack_110,0,0xfc);
    uVar4 = DAT_2c628cdc;
    if (iVar2 != -1) {
      uVar4 = FUN_2c6468d8();
    }
    uVar3 = FUN_2c646890();
    uVar1 = DAT_2c628ce4;
    FUN_2c66b450(&local_114,0xff,DAT_2c628ce0,uVar4,uVar3,DAT_2c628cd8);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c628cf0,0x1f,DAT_2c628cec,uVar1,DAT_2c628ce8,&local_114);
  }
  if (*DAT_2c628cd4 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

