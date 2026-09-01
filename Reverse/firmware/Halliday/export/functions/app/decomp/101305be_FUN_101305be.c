/* FUN_101305be @ 0x101305be */

/* WARNING: Removing unreachable block (ram,0x10130ed6) */
/* WARNING: Removing unreachable block (ram,0x10130ee4) */

undefined4 FUN_101305be(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  uint *local_38;
  undefined4 local_34;
  uint local_30 [6];
  undefined4 local_18;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    local_18 = 0;
    (**(code **)(*(int *)(param_1 + 0xc) + 0xa8))
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xac),5,&local_18);
    *(byte *)(param_1 + 0xa2) = *(byte *)(param_1 + 0xa2) & 0xe7;
    return 0;
  }
  uVar3 = (DAT_100b3580 - DAT_100b357c) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100b3584 | uVar3,PTR_s___handle__p___100b3588,param_1);
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar4 = 0xffffff80;
  }
  else {
    FUN_1012def6(**(undefined1 **)(param_1 + 0xd0));
    if (((int)((uint)*(byte *)(param_1 + 0xa3) << 0x1c) < 0) &&
       ((*(char *)(param_1 + 0x9a) == '\f' || (*(char *)(param_1 + 0x9a) == '\x11')))) {
      local_30[0] = local_30[0] & 0xfffc0000;
      local_30[1] = 0;
      FUN_101306dc(*(undefined4 *)(param_1 + 0x4c),1,0xd,8,local_30);
      FUN_100a5b78(uVar3 | 0x950031,PTR_s_stop_dsp_sleep_100b358c);
    }
    FUN_1013ca1a(local_30,0,1);
    local_40 = 3;
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = FUN_100b33cc(0x122,local_30,4,&local_40);
    if (iVar1 != 0) {
      FUN_10064d1c(uVar4,iVar1);
      FUN_1012d1f4(iVar1);
    }
    iVar1 = 1000;
    do {
      FUN_100b327c(param_1,1);
      iVar2 = FUN_1011dbde(local_30,1);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_100b327c(param_1,1);
    if (iVar1 == 0) {
      FUN_100a5b78(uVar3 | 0xa40011,PTR_s_wait_dsp_decoder_stop_timeout_100b3590);
    }
    FUN_101140ac(local_30);
    local_34 = 0;
    local_3c = 0x22;
    local_38 = local_30;
    FUN_10064d1c(*(undefined4 *)(param_1 + 0x4c),&local_3c);
    iVar1 = FUN_1011dbde(local_30,100);
    if (iVar1 != 0) {
      FUN_100a5b78(uVar3 | 0xab0011,PTR_s_stop_session_timeout_100b3594);
    }
    if (*(char *)(param_1 + 0x9a) == '\x03') {
      if (*(int *)(param_1 + 0x5c) == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_1011dcc6();
      }
      FUN_10119dc2(PTR_s_wav_header_len___d_100b3598,iVar1);
      if (iVar1 < 1) {
        FUN_100a5b78(uVar3 | 0x380011,PTR_s_wav_header_invalid___d_100b359c,iVar1);
      }
      else {
        iVar2 = FUN_100a0490(*(undefined4 *)(param_1 + 0xcc),0);
        if (iVar2 == 0) {
          thunk_FUN_1012d378(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0xcc),iVar1,
                             PTR_FUN_100a07a0_1_100b35a0);
        }
      }
    }
    uVar4 = 0;
    *(byte *)(param_1 + 0xa2) =
         *(byte *)(param_1 + 0xa2) & 0xe7 |
         (byte)((((*(byte *)(param_1 + 0xa2) & 0x1f) >> 3) + 3 & 3) << 3);
  }
  return uVar4;
}

