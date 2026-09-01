/* FUN_100b3b7c @ 0x100b3b7c */

undefined4 FUN_100b3b7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xcc) == 0)) ||
     (iVar4 = *(int *)(param_1 + 0x4c), iVar4 == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    if ((*(byte *)(param_1 + 0xa2) & 0x18) == 0) {
      local_1c = 3;
      iVar1 = FUN_100b33cc(0x121,*(byte *)(param_1 + 0xa2) & 0x18,4,&local_1c);
      if (iVar1 != 0) {
        FUN_10064d1c(iVar4,iVar1);
        FUN_1012d1f4(iVar1);
      }
      FUN_1011ddd4(*(undefined4 *)(param_1 + 0x4c));
      uVar3 = (uint)*(byte *)(param_1 + 0xa3);
      if (((int)(uVar3 << 0x1c) < 0) &&
         ((*(char *)(param_1 + 0x9a) == '\f' || (*(char *)(param_1 + 0x9a) == '\x11')))) {
        local_18 = ((uVar3 & 0x1f) >> 4) << 0x10 | 1 | ((uVar3 & 0x3f) >> 5) << 0x12 |
                   local_18 & 0xfff80000;
        local_14 = DAT_100b3c54;
        FUN_101306dc(*(undefined4 *)(param_1 + 0x4c),1,0xd,8,&local_18);
        FUN_100a5b78(((int)PTR_DAT_100b3c58 - (int)PTR_DAT_100b3c5c) * 0x20 & 0xff00U | 0xc50031,
                     PTR_s_start_dsp_sleep__d_100b3c60,(*(byte *)(param_1 + 0xa3) & 0x1f) >> 4);
      }
      *(byte *)(param_1 + 0xa2) =
           *(byte *)(param_1 + 0xa2) & 0xe7 |
           (byte)((((*(byte *)(param_1 + 0xa2) & 0x1f) >> 3) + 1 & 3) << 3);
    }
    FUN_100b327c(param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}

