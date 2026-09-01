/* FUN_100b0614 @ 0x100b0614 */

undefined4 FUN_100b0614(int param_1)

{
  int iVar1;
  
  FUN_100a5b78(DAT_100b0710 | ((int)PTR_DAT_100b0708 - (int)PTR_DAT_100b0704) * 0x20 & 0xff00U,
               PTR_s_close__p__100b070c,param_1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1012d27c();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1012d27c();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1012d27c();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_10131062();
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_1012f5a2();
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  FUN_1012fc94(param_1);
  if ((int)((uint)*(byte *)(param_1 + 0xd5) << 0x19) < 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      if (*(int *)(param_1 + 0x118) != 0) {
        FUN_100a7a0c();
        iVar1 = FUN_100a7a40();
        if (iVar1 != 0) {
          FUN_100a8e00(iVar1,0,0,0,4);
        }
        FUN_100a7a24();
        FUN_100a0b00(*(undefined4 *)(param_1 + 0x118));
      }
    }
    else {
      if ((int)((uint)*(byte *)(param_1 + 0xd5) << 0x1f) < 0) {
        FUN_100a8d1c(*(int *)(param_1 + 0x120),0);
      }
      FUN_100a8428(*(undefined4 *)(param_1 + 0x120));
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_100a8428();
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
  if (((int)((uint)*(byte *)(param_1 + 0xd5) << 0x1a) < 0) && (*(int *)(param_1 + 0x114) != 0)) {
    FUN_100a0b00();
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  *(byte *)(param_1 + 0xca) = *(byte *)(param_1 + 0xca) & 0xfe;
  return 0;
}

