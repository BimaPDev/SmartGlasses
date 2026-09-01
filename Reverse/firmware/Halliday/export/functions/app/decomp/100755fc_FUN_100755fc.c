/* FUN_100755fc @ 0x100755fc */

int FUN_100755fc(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte local_1f;
  undefined1 local_1e;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19 [5];
  
  if (*(char *)(param_1 + 0x19) < '\0') {
    uVar1 = 0x80;
  }
  else {
    uVar1 = 0x100;
  }
  if (param_4 == 0) {
    if (param_3 == 3) {
      FUN_100a5b78(DAT_100757c8 | ((int)PTR_DAT_100757ac - (int)PTR_DAT_100757a8) * 0x20 & 0xff00U,
                   PTR_s_i2stx_sample_rate_set_100757b0,DAT_100757cc);
      uVar5 = 0x10000;
      goto LAB_10075620;
    }
    uVar5 = (uint)*(byte *)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x4000;
    }
    if ((int)(uVar5 << 0x1e) < 0) {
      if ((int)(uVar5 << 0x19) < 0) {
        param_2 = (param_2 & 0x7fff) << 1;
      }
      uVar6 = uVar6 | 0x10000;
    }
    else {
      uVar6 = uVar6 | 0xe0000000;
    }
    uVar2 = (uVar5 & 0x3f) >> 2;
    if (*(char *)(param_1 + 0x19) < '\0') {
      uVar5 = uVar2 << 4;
    }
    else {
      uVar5 = uVar2 << 5;
    }
    if (uVar5 == 0x20) {
      iVar4 = 0;
    }
    else if (uVar5 == 0x40) {
      iVar4 = 1;
    }
    else if (uVar5 == 0x80) {
      iVar4 = 2;
    }
    else {
      if (uVar5 != 0x100) {
        uVar6 = ((int)PTR_DAT_100757ac - (int)PTR_DAT_100757a8) * 0x20 & 0xff00U | 0x1840011;
        puVar3 = PTR_s_invalid_lrclk_divisor__d_100757b4;
        param_3 = uVar5;
        goto LAB_1007568a;
      }
      iVar4 = 3;
    }
    uVar5 = uVar6 | (uint)(*(byte *)(param_1 + 0x18) >> 7) << 0x17 | iVar4 << 0x14;
    param_2 = ((int)uVar2 >> 1) * param_2;
    if (param_3 - 1 < 2) {
      iVar4 = FUN_100779e4(param_2 & 0xff,&local_1c,&local_1b,&local_1a,local_19,&local_1e);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_10077c28(local_1e,&local_1d);
      if (iVar4 != 0) {
        return iVar4;
      }
      *DAT_100757b8 =
           (uint)local_1a << 0x10 | (uint)local_1b << 0xe | (uint)local_1c |
           (uint)local_19[0] << 0xc | *DAT_100757b8 & 0xfffffe00 | (local_1d & 1) << 8 | 0x1302000;
    }
    else {
      if (param_3 != 0) {
        uVar6 = DAT_100757c0 | ((int)PTR_DAT_100757ac - (int)PTR_DAT_100757a8) * 0x20 & 0xff00U;
        puVar3 = DAT_100757c4;
LAB_1007568a:
        FUN_100a5b78(uVar6,PTR_s_i2stx_sample_rate_set_100757b0,puVar3,param_3);
        return -0x16;
      }
      iVar4 = FUN_1007772c(param_2 & 0xffff,uVar1,&local_1f,&local_1e);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_10077c28(local_1e,&local_1d);
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_10119dc2(DAT_100757bc,local_1f,local_1d);
      uVar5 = uVar5 | local_1f;
    }
  }
  else {
    uVar5 = *DAT_100757a4 & 0xffffcfff;
  }
LAB_10075620:
  *DAT_100757a4 = uVar5 | (param_3 & 3) << 0xc;
  return 0;
}

