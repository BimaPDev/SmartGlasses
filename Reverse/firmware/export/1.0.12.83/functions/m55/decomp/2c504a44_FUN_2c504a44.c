/* FUN_2c504a44 @ 0x2c504a44 */

int FUN_2c504a44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [112];
  int local_c;
  
  param_1 = param_1 + 0x14;
  local_c = *DAT_2c504aa8;
  FUN_2c674268(param_1,0,0x32,0);
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xbc))(auStack_7c);
    uVar2 = FUN_2c5dc51c(auStack_7c,1);
    uVar3 = FUN_2c66c4ec();
    FUN_2c674668(param_1,uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(4,uVar2);
  }
  if (*DAT_2c504aa8 == local_c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

