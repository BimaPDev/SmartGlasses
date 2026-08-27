/* FUN_2c639ab4 @ 0x2c639ab4 */

void FUN_2c639ab4(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [60];
  undefined4 local_19c;
  int local_188 [89];
  int local_24;
  
  local_24 = *DAT_2c639b60;
  if (3 < (*(char *)(param_1 + 0x60) + 0x19U & 0x1f)) {
    FUN_2c639688(param_1,local_188,auStack_1d8,auStack_1e0);
    uVar1 = FUN_2c601b5c();
    FUN_2c601b68(local_188);
    if (((*(byte *)(param_1 + 0x60) & 0x1f) == 6) && (*param_4 == -0xff0100)) {
      *(byte *)(local_188[0] + 0x10) = *(byte *)(local_188[0] + 0x10) & 0xf7;
    }
    if (param_3 != 1) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        FUN_2c6120f4(local_19c,param_4,param_2,param_2 + 4);
        param_2 = param_2 + 4;
      } while (iVar2 != param_3 + -1);
    }
    FUN_2c601b68(uVar1);
    FUN_2c60fba4(local_188[0],*(undefined4 *)(local_188[0] + 0x3c));
    FUN_2c62bea8(*(undefined4 *)(local_188[0] + 0x3c));
    FUN_2c607df0(param_1);
  }
  if (*DAT_2c639b60 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

