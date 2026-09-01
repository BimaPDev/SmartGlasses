/* FUN_100be904 @ 0x100be904 */

void FUN_100be904(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_19 [5];
  
  iVar4 = DAT_100bea98;
  iVar2 = DAT_100bea94;
  *(byte *)(DAT_100bea94 + 0x14) = *(byte *)(DAT_100bea94 + 0x14) & 0xfe;
  uVar7 = (DAT_100bea9c - iVar4) * 0x20 & 0xff00;
  uVar8 = 0x54d;
  local_19[0] = 0;
  FUN_100a5b78(DAT_100beaa0 | uVar7,DAT_100beaac,DAT_100beaa4,DAT_100beaa8,0x54d);
  if (-1 < *(char *)(iVar2 + 0xc)) {
    return;
  }
  FUN_100a5b78(DAT_100beab0 | uVar7,DAT_100beaac,DAT_100beab4,*(undefined1 *)(iVar2 + 0xf),uVar8);
  pcVar3 = DAT_100beae4;
  cVar1 = *(char *)(iVar2 + 0xf);
  if ((cVar1 == '\0') || (cVar1 == '\x03')) {
    *(undefined1 *)(iVar2 + 0x11) = 0;
    if ((*(char *)(iVar2 + 0x112) != '\0') && (*(char *)(iVar2 + 0x110) == '\x01')) {
      FUN_100a5b78(DAT_100beab8 | uVar7,DAT_100beaac,DAT_100beabc,1,uVar8);
      FUN_101323d0();
    }
    *(undefined2 *)(iVar2 + 0x110) = 0x100;
    FUN_100be0cc();
    uVar8 = DAT_100beac0;
    *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) & 0xfd;
    FUN_100be32c(1,uVar8);
    if (*(char *)(iVar2 + 0x112) != '\0') {
      FUN_100a5b78(DAT_100beac4 | uVar7,DAT_100beaac,DAT_100beac8,*(undefined1 *)(iVar2 + 0x110));
      FUN_100c1068(1);
    }
    goto LAB_100be9b0;
  }
  if (cVar1 == '\x01') {
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0xd) << 0x1e)) goto LAB_100be9b0;
    if (*(char *)(iVar2 + 0x11) != '\x02') {
      FUN_100a5b78(DAT_100bead4 | uVar7,DAT_100beaac,DAT_100bead8,*(undefined1 *)(iVar2 + 0x110),
                   uVar8);
      FUN_101323d0();
      *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) & 0xfe;
      *(undefined1 *)(iVar2 + 0x11) = 2;
      FUN_100be38c(1);
      FUN_1011dc0a(iVar2 + 0xb0,10);
      goto LAB_100be9b0;
    }
    FUN_100a5b78(DAT_100beadc | uVar7,DAT_100beaac,DAT_100beae0,*(undefined1 *)(iVar2 + 0x110),uVar8
                );
    FUN_100be0cc();
    *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) & 0xfd;
    iVar4 = iVar2 + 0x148;
  }
  else {
    if (((*(byte *)(iVar2 + 0xd) & 1) == 0) && (*DAT_100beae4 == '\0')) goto LAB_100be9b0;
    if (*(char *)(iVar2 + 0x112) == '\0') {
      uVar5 = uVar7 | 0x5880031;
      uVar6 = DAT_100beae8;
LAB_100bea68:
      FUN_100a5b78(uVar5,DAT_100beaac,uVar6,*(char *)(iVar2 + 0x110),uVar8);
      FUN_101323d0();
    }
    else if (*(char *)(iVar2 + 0x110) == '\0') {
      uVar5 = DAT_100beaf0 | uVar7;
      uVar6 = DAT_100beaf4;
      goto LAB_100bea68;
    }
    *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) & 0xfe;
    iVar4 = DAT_100beaec;
    if (*pcVar3 != '\0') {
      FUN_100be7f8();
      iVar4 = DAT_100beaec;
    }
  }
  iVar4 = FUN_10061fd0(iVar4);
  if (iVar4 != 0) {
    FUN_100be32c(0);
  }
LAB_100be9b0:
  FUN_10132400(local_19);
  FUN_100a5b78(DAT_100beacc | uVar7,DAT_100beaac,DAT_100bead0,*(undefined1 *)(iVar2 + 0xf),
               *(undefined1 *)(iVar2 + 0x11),local_19[0]);
  return;
}

