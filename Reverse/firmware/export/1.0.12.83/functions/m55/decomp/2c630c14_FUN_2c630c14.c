/* FUN_2c630c14 @ 0x2c630c14 */

void FUN_2c630c14(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = FUN_2c6041d4(*param_1);
  if (-1 < (int)((uint)*(byte *)(iVar4 + 0x2a) << 0x1f)) {
    return;
  }
  iVar6 = (int)((ulonglong)DAT_2c63090c * (ulonglong)(uint)*(ushort *)(iVar4 + 0x24) >> 0x20);
  uVar7 = (iVar6 + ((uint)*(ushort *)(iVar4 + 0x24) - iVar6 >> 1) & 0x3ffff) >> 2;
  uVar5 = ((uint)*(ushort *)(iVar4 + 0x26) - uVar7 * (*(ushort *)(iVar4 + 0x26) / uVar7)) +
          (uVar7 * 3 & 0xffff);
  sVar1 = (short)uVar5;
  *(short *)(iVar4 + 0x26) = sVar1;
  *(short *)(iVar4 + 0x28) =
       (sVar1 - (short)uVar7 * (short)((uVar5 & 0xffff) / uVar7)) + (short)(uVar7 * 3);
  iVar6 = FUN_2c6033b4(iVar4,0,0x57);
  sVar2 = FUN_2c6033b4(iVar4,0,0x59);
  sVar1 = *(short *)(iVar6 + 8);
  iVar8 = (int)sVar1;
  iVar6 = FUN_2c607440(iVar4);
  uVar3 = FUN_2c6041dc(iVar4,0);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  if (iVar8 < 0) {
    iVar8 = iVar8 + 1;
  }
  FUN_2c606ff8(uVar3,(int)(short)((short)(iVar6 >> 1) -
                                 (*(short *)(iVar4 + 0x26) * (sVar2 + sVar1) + (short)(iVar8 >> 1)))
              );
  return;
}

