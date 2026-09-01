/* FUN_100ee058 @ 0x100ee058 */

undefined4 FUN_100ee058(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_100a5b78(DAT_100ee0d0 | (DAT_100ee0c8 - DAT_100ee0c4) * 0x20 & 0xff00U,DAT_100ee0d4,
                 DAT_100ee0cc,param_1);
    uVar1 = 0xffffff97;
  }
  else {
    if (param_2 << 0x1b < 0) {
      while( true ) {
        if (*(int *)(param_1 + 0x3c) < (int)(uint)*(byte *)(param_1 + 0x18)) break;
        FUN_1011dbde(param_1 + 0x40,0xffffffff);
      }
      FUN_100ee018(param_1);
    }
    uVar1 = 0;
    *param_3 = *(undefined4 *)(param_1 + (*(byte *)(param_1 + 0x19) + 4) * 4);
    *(char *)(param_1 + 0x39) = (char)param_2;
  }
  return uVar1;
}

