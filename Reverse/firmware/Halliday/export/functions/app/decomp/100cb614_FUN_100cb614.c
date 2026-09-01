/* FUN_100cb614 @ 0x100cb614 */

void FUN_100cb614(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  if (*(short *)(param_1 + 0x52) == 0) {
    *(undefined2 *)(param_1 + 0x52) = 0x29e;
  }
  uVar4 = *(ushort *)(param_1 + 0x52) + 2;
  uVar2 = uVar4;
  if (0x29f < uVar4) {
    uVar2 = 0x2a0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  *(short *)(param_1 + 0x54) = (short)uVar2;
  if ((iVar1 == 0) && (uVar2 < uVar4)) {
    FUN_100a5b78((DAT_100cb6a8 - DAT_100cb6a4) * 0x20 & 0xff00U | 0x3240021,DAT_100cb6b0,
                 DAT_100cb6ac);
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x54) + -2;
  }
  if (*(short *)(param_1 + 0x56) == 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 0xc) == 0) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = (undefined2)((*(ushort *)(param_1 + 0x52) + 0x29f) / 0x2a0);
    }
    *(undefined2 *)(param_1 + 0x56) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

