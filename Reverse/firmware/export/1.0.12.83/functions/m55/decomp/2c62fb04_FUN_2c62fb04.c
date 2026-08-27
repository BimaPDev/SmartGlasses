/* FUN_2c62fb04 @ 0x2c62fb04 */

/* WARNING: Removing unreachable block (ram,0x2c606aa0) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */

void FUN_2c62fb04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x24) = param_4;
  FUN_2c606abc();
  lv_obj_add_flag_invalidate(param_1,8);
  iVar3 = *DAT_2c606ab8;
  iVar1 = FUN_2c607214();
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400;
  iVar2 = FUN_2c607214(param_1);
  if (iVar2 != iVar1) {
    FUN_2c6041d4(param_1);
    FUN_2c607248();
    FUN_2c607248(param_1);
  }
  if (*DAT_2c606ab8 != iVar3) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

