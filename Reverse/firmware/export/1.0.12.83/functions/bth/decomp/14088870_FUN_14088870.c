/* FUN_14088870 @ 0x14088870 */

void FUN_14088870(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  
  uVar3 = (uint)*(byte *)(DAT_1408899c + 0x31);
  if (uVar3 == 6) {
    uVar7 = *(undefined2 *)(DAT_1408899c + 0x34);
    uVar5 = *(ushort *)(DAT_1408899c + 0x38);
    uVar8 = *(undefined1 *)(DAT_1408899c + 0x3a);
    uVar4 = *(ushort *)(DAT_1408899c + 0x36) | 0x380;
    uVar6 = *(undefined4 *)(DAT_1408899c + 0x3c);
    uVar9 = *(undefined4 *)(DAT_1408899c + 0x40);
  }
  else if (uVar3 == 1) {
    uVar9 = 8000;
    uVar4 = 0x3c7;
    uVar8 = 0xff;
    uVar5 = 0;
    uVar7 = 0xffff;
    uVar6 = 8000;
  }
  else if (uVar3 - 7 < 2) {
    iVar2 = FUN_140817e4(*(undefined1 *)(param_1 + 0x52));
    uVar9 = 8000;
    if (iVar2 == 0) {
      uVar4 = 0x380;
      uVar8 = 2;
      uVar5 = 0x40;
      uVar7 = 0xd;
      uVar6 = 8000;
    }
    else {
      uVar4 = 0x388;
      uVar8 = 2;
      uVar5 = 0x43;
      uVar7 = 0xd;
      uVar6 = 8000;
    }
  }
  else {
    bVar1 = *(byte *)(DAT_1408899c + 0x19);
    uVar4 = 0x3c1;
    if ((bVar1 & 8) == 0) {
      uVar4 = 0x3c0;
    }
    if ((int)((uint)bVar1 << 0x1b) < 0) {
      uVar4 = uVar4 | 2;
    }
    if ((int)((uint)bVar1 << 0x1a) < 0) {
      uVar4 = uVar4 | 4;
    }
    if (*(char *)(DAT_1408899c + 0x1b) < '\0') {
      uVar4 = uVar4 & 0xff3f | 8;
    }
    if ((uVar3 == 2) && (uVar9 = 8000, (int)((uint)*(byte *)(DAT_1408899c + 0x1d) << 0x1a) < 0)) {
      uVar8 = 0xff;
      uVar5 = 0x40;
      uVar7 = 0xffff;
      uVar6 = 8000;
      uVar4 = uVar4 | 0x3c8;
    }
    else {
      uVar6 = 8000;
      uVar8 = 0xff;
      uVar5 = 0x40;
      uVar7 = 0xffff;
      uVar4 = uVar4 | 0x380;
      uVar9 = uVar6;
    }
  }
  if ((code *)*DAT_140889a0 == (code *)0x0) {
    FUN_14088808(param_1 + 0x10,uVar9,uVar6,uVar7,uVar5,uVar8,uVar4);
    return;
  }
  iVar2 = (*(code *)*DAT_140889a0)(uVar5 & 3,param_2);
  if (iVar2 == 3) {
    uVar5 = uVar5 | 3;
  }
  else if (iVar2 == 2) {
    uVar5 = 0x40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_140889a8,DAT_140889a4,uVar5);
}

