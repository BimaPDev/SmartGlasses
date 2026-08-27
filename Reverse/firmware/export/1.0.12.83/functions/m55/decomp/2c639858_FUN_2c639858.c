/* FUN_2c639858 @ 0x2c639858 */

void FUN_2c639858(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1e0 [8];
  short local_1d8;
  short local_1d6;
  short local_1d4;
  short local_1d2;
  undefined1 auStack_1d0 [60];
  undefined4 local_194;
  int local_180 [89];
  int local_1c;
  
  local_1c = *DAT_2c63993c;
  if ((3 < (*(char *)(param_1 + 0x60) + 0x19U & 0x1f)) && (0 < param_3)) {
    FUN_2c639688(param_1,local_180,auStack_1d0,auStack_1e0);
    uVar1 = FUN_2c601b5c();
    FUN_2c601b68(local_180);
    if (((*(byte *)(param_1 + 0x60) & 0x1f) == 6) && (*(int *)(param_2 + 0xc) == -0xff0100)) {
      *(byte *)(local_180[0] + 0x10) = *(byte *)(local_180[0] + 0x10) & 0xf7;
    }
    iVar3 = 0;
    iVar2 = param_2 + 8;
    do {
      local_1d8 = *(short *)(iVar2 + -8);
      iVar3 = iVar3 + 1;
      local_1d6 = *(short *)(iVar2 + -6);
      local_1d4 = *(short *)(iVar2 + -4) + local_1d8 + -1;
      local_1d2 = local_1d6 + *(short *)(iVar2 + -2) + -1;
      FUN_2c61319c(local_194,iVar2,&local_1d8);
      iVar2 = iVar2 + 0x60;
    } while (iVar3 < param_3);
    FUN_2c601b68(uVar1);
    FUN_2c60fba4(local_180[0],*(undefined4 *)(local_180[0] + 0x3c));
    FUN_2c62bea8(*(undefined4 *)(local_180[0] + 0x3c));
    FUN_2c607df0(param_1);
  }
  if (*DAT_2c63993c != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

