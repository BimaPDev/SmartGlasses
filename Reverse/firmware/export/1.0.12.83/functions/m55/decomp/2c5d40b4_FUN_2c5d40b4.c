/* FUN_2c5d40b4 @ 0x2c5d40b4 */

void FUN_2c5d40b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_28;
  undefined1 *local_24 [2];
  undefined1 auStack_1c [16];
  int local_c;
  
  *(char *)(param_1 + 0xe0) = (char)param_2;
  local_c = *DAT_2c5d4168;
  FUN_2c5e317c(0x2d,0,param_2,0,1);
  local_28 = (uint)*(byte *)(param_1 + 0xe0);
  FUN_2c620fa4(0x3f9,&local_28);
  FUN_2c5c55d8();
  iVar2 = FUN_2c5c59bc();
  if (iVar2 != 0) {
    FUN_2c5cfefc(*(undefined1 *)(param_1 + 0xe0));
  }
  FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x44));
  FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x30));
  FUN_2c5d3670(param_1);
  FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x6c));
  FUN_2c5d3f50(param_1);
  uVar1 = DAT_2c5d416c;
  FUN_2c5dcca4(local_24,*(undefined1 *)(param_1 + 0xe0));
  FUN_2c643084(DAT_2c5d417c,DAT_2c5d4170,DAT_2c5d4170,DAT_2c5d4178,uVar1,DAT_2c5d4174,local_24[0]);
  if (local_24[0] != auStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5d4168 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

