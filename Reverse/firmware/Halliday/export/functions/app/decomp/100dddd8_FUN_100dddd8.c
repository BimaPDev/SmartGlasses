/* FUN_100dddd8 @ 0x100dddd8 */

void FUN_100dddd8(int param_1)

{
  int *piVar1;
  byte bVar2;
  
  if (param_1 == 0) {
    FUN_100a5b78(DAT_100ddeb4 | (DAT_100ddeac - DAT_100ddeb0) * 0x20 & 0xff00U,
                 PTR_s_Invalid_AVDTP_chan_100ddeb8);
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x60);
  if ((bVar2 & 7) != 0) goto LAB_100dde2e;
  *(byte *)(param_1 + 0xdf) = bVar2 & 7;
  *(byte *)(param_1 + 0xe0) = bVar2 & 7;
  if ((bVar2 & 0x38) == 8) {
    bVar2 = *(byte *)(param_1 + 0xd1) & 0xf7 | (bVar2 & 1) << 3;
LAB_100dde1a:
    *(byte *)(param_1 + 0xd1) = bVar2;
  }
  else if ((bVar2 & 0x38) == 0x10) {
    bVar2 = *(byte *)(param_1 + 0xd1) | 8;
    goto LAB_100dde1a;
  }
  thunk_FUN_101146e4(param_1 + 0xf0,PTR_LAB_10137176_1_100ddebc);
  *(undefined **)(param_1 + 0x120) = PTR_LAB_100de9e8_1_100ddec0;
LAB_100dde2e:
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x80;
  if ((int)((uint)(byte)PTR_DAT_100ddec4[3] << 0x1b) < 0) {
    FUN_10119dc2(PTR_s_avdtp_connected__d_100ddec8,*(byte *)(param_1 + 0x60) & 7);
  }
  piVar1 = DAT_100ddecc;
  (**(code **)(*DAT_100ddecc + 4))(param_1);
  if ((*(byte *)(param_1 + 0x60) & 7) == 1) {
    if ((int)((uint)*(byte *)(param_1 + 0xd5) << 0x1f) < 0) {
      *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) & 0xfe;
      if (*(int *)(param_1 + 0xd8) != 0) {
        FUN_100ddd34(param_1 + -0x68);
        *(undefined4 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x100dde98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 0x14))(param_1 + -0x68,0x80);
        return;
      }
    }
  }
  return;
}

