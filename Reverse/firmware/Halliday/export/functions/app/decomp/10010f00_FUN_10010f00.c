/* FUN_10010f00 @ 0x10010f00 */

/* WARNING: Removing unreachable block (ram,0x10010d7a) */

void FUN_10010f00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  if (*DAT_10010f28 != *DAT_10010f28) {
    FUN_1013cdc0();
  }
  uVar3 = DAT_10010f2c;
  iVar1 = DAT_10010e18;
  iVar7 = *DAT_10010e0c;
  uVar8 = (DAT_10010e10 - DAT_10010e14) * 0x20 & 0xff00;
  FUN_100a5b78(uVar8 | 0x1f0032,DAT_10010e20,DAT_10010e1c,*(undefined4 *)(DAT_10010e18 + 0x88),
               DAT_10010f2c);
  if (*(int *)(iVar1 + 0x88) != 0) goto LAB_10010d5e;
  iVar4 = thunk_FUN_1009f30c(0x600,DAT_10010e24);
  *(int *)(iVar1 + 0x88) = iVar4;
  if (iVar4 != 0) goto LAB_10010d6c;
  FUN_100a5b78(uVar8 | 0x2f0011,DAT_10010e20,DAT_10010e28);
  uVar5 = 0xfffffff4;
  while (*DAT_10010e0c != iVar7) {
    FUN_1013cdc0(uVar5);
LAB_10010d5e:
    if ((int)((uint)*(byte *)(iVar1 + 0x8c) << 0x1e) < 0) {
LAB_10010d6c:
      FUN_1011ea48(DAT_10010e18,0,0x20);
      uVar6 = FUN_10112e84(DAT_10010e40);
      uVar2 = DAT_10010e44;
      *(undefined4 *)(iVar1 + 0x20) = uVar6;
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      *(undefined4 *)(iVar1 + 0x14) = DAT_10010e48;
      uVar2 = DAT_10010e50;
      *(undefined4 *)(iVar1 + 0x18) = DAT_10010e4c;
      iVar4 = FUN_1011ea18(uVar3,uVar2);
      if (iVar4 == 0) {
        *(ushort *)(iVar1 + 0x8c) = *(ushort *)(iVar1 + 0x8c) & 0xfc03 | 8;
        uVar2 = DAT_10010e54;
        *(byte *)(iVar1 + 0x8c) = *(byte *)(iVar1 + 0x8c) & 0xfc;
        *(undefined1 *)(iVar1 + 0x8e) = 2;
        FUN_1011db7e(*(undefined4 *)(iVar1 + 0x88),0x600,uVar2,0,0,0,8,0,0);
        FUN_100a5b78(uVar8 | 0x680031,DAT_10010e20,DAT_10010e3c);
        uVar5 = (*(ushort *)(iVar1 + 0x8c) & 0x3ff) >> 2;
      }
      else {
        uVar5 = 0xffffffff;
      }
    }
    else {
      uVar5 = 0xffffff88;
    }
  }
  return;
}

