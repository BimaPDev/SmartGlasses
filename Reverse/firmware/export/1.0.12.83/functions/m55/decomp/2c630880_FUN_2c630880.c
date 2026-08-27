/* FUN_2c630880 @ 0x2c630880 */

void FUN_2c630880(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = (int)((ulonglong)DAT_2c63090c * (ulonglong)(uint)*(ushort *)(param_1 + 0x24) >> 0x20);
  uVar6 = (iVar5 + ((uint)*(ushort *)(param_1 + 0x24) - iVar5 >> 1) & 0x3ffff) >> 2;
  uVar4 = ((uint)*(ushort *)(param_1 + 0x26) - uVar6 * (*(ushort *)(param_1 + 0x26) / uVar6)) +
          (uVar6 * 3 & 0xffff);
  sVar1 = (short)uVar4;
  *(short *)(param_1 + 0x26) = sVar1;
  *(short *)(param_1 + 0x28) =
       (sVar1 - (short)uVar6 * (short)((uVar4 & 0xffff) / uVar6)) + (short)(uVar6 * 3);
  iVar5 = FUN_2c6033b4(param_1,0,0x57);
  sVar2 = FUN_2c6033b4(param_1,0,0x59);
  sVar1 = *(short *)(iVar5 + 8);
  iVar7 = (int)sVar1;
  iVar5 = FUN_2c607440(param_1);
  uVar3 = FUN_2c6041dc(param_1,0);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 1;
  }
  FUN_2c606ff8(uVar3,(int)(short)((short)(iVar5 >> 1) -
                                 (*(short *)(param_1 + 0x26) * (sVar2 + sVar1) + (short)(iVar7 >> 1)
                                 )));
  return;
}

