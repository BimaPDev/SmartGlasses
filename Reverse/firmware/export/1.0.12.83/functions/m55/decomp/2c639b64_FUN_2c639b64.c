/* FUN_2c639b64 @ 0x2c639b64 */

void FUN_2c639b64(int param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [60];
  undefined4 local_194;
  int local_180 [89];
  int local_1c;
  
  local_1c = *DAT_2c639c08;
  if (3 < (*(char *)(param_1 + 0x60) + 0x19U & 0x1f)) {
    FUN_2c639688(param_1,local_180,auStack_1d0,auStack_1d8);
    uVar1 = FUN_2c601b5c();
    FUN_2c601b68(local_180);
    if (((*(byte *)(param_1 + 0x60) & 0x1f) == 6) && (*(int *)(param_4 + 4) == -0xff0100)) {
      *(byte *)(local_180[0] + 0x10) = *(byte *)(local_180[0] + 0x10) & 0xf7;
    }
    FUN_2c6131cc(local_194,param_4,param_2,param_3);
    FUN_2c601b68(uVar1);
    FUN_2c60fba4(local_180[0],*(undefined4 *)(local_180[0] + 0x3c));
    FUN_2c62bea8(*(undefined4 *)(local_180[0] + 0x3c));
    FUN_2c607df0(param_1);
  }
  if (*DAT_2c639c08 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

