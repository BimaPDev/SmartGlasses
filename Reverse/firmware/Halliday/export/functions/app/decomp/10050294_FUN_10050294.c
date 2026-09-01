/* FUN_10050294 @ 0x10050294 */

int FUN_10050294(undefined4 param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_1005051c;
  local_24 = param_2;
  local_20 = param_3;
  iVar2 = FUN_1004f6cc();
  iVar3 = FUN_100a0654(*(undefined4 *)(iVar2 + 0x18),&local_24,8);
  if (0 < iVar3) goto LAB_100502e6;
  FUN_100a5b78((DAT_10050524 - DAT_10050520) * 0x20 & 0xff00U | 0x710011,DAT_1005052c,DAT_10050528,
               iVar3,param_1);
  iVar3 = 0;
  do {
    while( true ) {
      if (*DAT_1005051c == local_1c) {
        return iVar3;
      }
      FUN_1013cdc0();
LAB_100502e6:
      local_20 = CONCAT22(local_20._2_2_ << 8 | local_20._2_2_ >> 8,
                          (ushort)local_20 << 8 | (ushort)local_20 >> 8);
      uVar7 = local_24 & 0xff;
      uVar9 = (local_24._2_2_ & 0xff) << 8 | (uint)(local_24._2_2_ >> 8);
      local_24 = CONCAT22((short)uVar9,(undefined2)local_24);
      if (uVar7 == 0x5f) break;
      FUN_100a5b78((DAT_10050524 - DAT_10050520) * 0x20 & 0xff00U | 0x7d0011,DAT_1005052c,
                   DAT_10050530,uVar7,param_1);
      while (iVar4 = FUN_100a05a8(*(undefined4 *)(iVar2 + 0x18)), 0 < iVar4) {
        FUN_100a0654(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x100),0x1000);
      }
LAB_10050340:
      FUN_10119dc2(DAT_10050534);
    }
    if (0xfff < uVar9) {
      FUN_100a5b78((DAT_10050524 - DAT_10050520) * 0x20 & 0xff00U | 0x840011,DAT_1005052c,
                   DAT_10050538,uVar9,param_1);
      goto LAB_10050340;
    }
    while( true ) {
      iVar4 = *(int *)(iVar2 + 0x100);
      uVar1 = local_24._2_2_;
      uVar7 = (uint)local_24._2_2_;
      if (uVar9 == 0) break;
      iVar3 = FUN_100a0654(*(undefined4 *)(iVar2 + 0x18),iVar4 + (uVar7 - uVar9),uVar9);
      if (iVar3 < 0) {
        uVar7 = (DAT_10050524 - DAT_10050520) * 0x20 & 0xff00U | 0x900000;
        uVar5 = DAT_1005053c;
        goto LAB_100503a2;
      }
      uVar9 = uVar9 - iVar3 & 0xffff;
    }
    iVar6 = 0xff5;
    if (uVar7 < 0xff6) {
      *(undefined4 *)(iVar4 + uVar7) = 0;
      iVar6 = iVar4 + uVar7;
    }
    uVar8 = 0;
    if (uVar7 < 0xff6) {
      *(undefined4 *)(iVar6 + 4) = 0;
      *(undefined2 *)(iVar6 + 8) = 0;
    }
    for (; uVar8 < local_24._2_2_; uVar8 = uVar8 + 10) {
    }
    uVar7 = FUN_100501c4(*(undefined4 *)(iVar2 + 0x100),local_24._2_2_);
    if ((local_20 & 0xffff) != uVar7) {
      uVar9 = (DAT_10050524 - DAT_10050520) * 0x20 & 0xff00;
      FUN_100a5b78(uVar9 | 0xad0011,DAT_1005052c,DAT_10050540);
      FUN_100a5b78(uVar9 | 0xae0011,DAT_1005052c,DAT_10050544,uVar7);
      FUN_100a5b78(uVar9 | 0xaf0011,DAT_1005052c,DAT_10050548,local_20 & 0xffff);
      while (iVar4 = FUN_100a05a8(*(undefined4 *)(iVar2 + 0x18)), 0 < iVar4) {
        FUN_100a0654(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x100),0x1000);
      }
      goto LAB_10050340;
    }
    if (uVar1 == 0) {
      if (-1 < (int)((local_24 >> 8) << 0x1b)) {
        uVar7 = (DAT_10050524 - DAT_10050520) * 0x20 & 0xff00U | 0xbc0000;
        uVar5 = DAT_1005054c;
LAB_100503a2:
        FUN_100a5b78(uVar7 | 0x11,DAT_1005052c,uVar5);
      }
      goto LAB_10050340;
    }
    FUN_10119dc2(DAT_10050550,0xbf);
    iVar3 = FUN_10113cfc(iVar2 + 4,extraout_r1,10000,0);
    if (iVar3 != 0) {
      FUN_100a5b78((DAT_10050524 - DAT_10050520) * 0x20 & 0xff00U | 0xc20011,DAT_1005052c,
                   DAT_10050554);
    }
    *(ushort *)(iVar2 + 0xfc) = local_20._2_2_;
    FUN_1011aab8(0);
    FUN_10050210(DAT_10050558,&local_24,8);
    FUN_10050210(DAT_1005055c,*(undefined4 *)(iVar2 + 0x100),local_24._2_2_);
    iVar3 = FUN_100449d8(*(undefined4 *)(iVar2 + 0x100),local_24._2_2_);
    FUN_1011aabe(0);
    if (iVar3 < 0) {
      FUN_100a5b78((DAT_10050524 - DAT_10050520) * 0x20 & 0xff00U | 0xcb0011,DAT_1005052c,
                   DAT_10050560,iVar3);
    }
    FUN_10113e2c(iVar2 + 4);
    FUN_10119dc2(DAT_10050550,0xcf);
  } while( true );
}

