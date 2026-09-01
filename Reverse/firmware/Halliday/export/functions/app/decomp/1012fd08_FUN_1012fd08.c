/* FUN_1012fd08 @ 0x1012fd08 */

undefined4 FUN_1012fd08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_18 [3];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      uVar2 = 0xffffff80;
    }
    else {
      uVar4 = ((int)PTR_DAT_100b0ec0 - (int)PTR_DAT_100b0ebc) * 0x20 & 0xff00;
      if ((int)((uint)*(byte *)(param_1 + 0xd5) << 0x1d) < 0) {
        local_18[0] = local_18[0] & 0xfffc0000;
        local_18[1] = 0;
        FUN_1013012a(*(int *)(param_1 + 0x48),0,0xd,8,local_18);
        FUN_100a5b78(uVar4 | 0x2480031,PTR_s_stop_dsp_sleep_100b0ec4);
      }
      iVar1 = FUN_1013009e(*(undefined1 *)(param_1 + 0xcb));
      uVar2 = *(undefined4 *)(param_1 + 0x48);
      if (iVar1 == 0) {
        FUN_10130170(uVar2);
        uVar3 = 5;
        uVar2 = *(undefined4 *)(param_1 + 0x48);
      }
      else {
        uVar3 = 2;
      }
      FUN_10130170(uVar2,uVar3);
      FUN_100a5b78(DAT_100b0ec8 | uVar4,DAT_100b0ecc,param_1);
      uVar2 = 0;
    }
    return uVar2;
  }
  *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 4;
  return 0;
}

