/* FUN_2c639a08 @ 0x2c639a08 */

void FUN_2c639a08(int param_1,short param_2,undefined2 param_3,short param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_1e8 [8];
  short local_1e0;
  undefined2 local_1de;
  short local_1dc;
  short local_1da;
  undefined1 auStack_1d8 [60];
  undefined4 local_19c;
  int local_188 [89];
  int local_24;
  
  local_24 = *DAT_2c639ab0;
  if (3 < (*(char *)(param_1 + 0x60) + 0x19U & 0x1f)) {
    FUN_2c639688(param_1,local_188,auStack_1d8,auStack_1e8);
    uVar1 = FUN_2c601b5c();
    FUN_2c601b68(local_188);
    local_1da = (*(ushort *)(param_1 + 0x62) >> 5) - 1;
    local_1e0 = param_2;
    local_1de = param_3;
    local_1dc = param_4 + -1 + param_2;
    FUN_2c612a20(local_19c,param_5,&local_1e0,param_6,0);
    FUN_2c601b68(uVar1);
    FUN_2c60fba4(local_188[0],*(undefined4 *)(local_188[0] + 0x3c));
    FUN_2c62bea8(*(undefined4 *)(local_188[0] + 0x3c));
    FUN_2c607df0(param_1);
  }
  if (*DAT_2c639ab0 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

