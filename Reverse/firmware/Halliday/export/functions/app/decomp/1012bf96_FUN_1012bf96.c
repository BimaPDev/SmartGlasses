/* FUN_1012bf96 @ 0x1012bf96 */

void FUN_1012bf96(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((int)((uint)*(byte *)(param_1 + 0x32) << 0x1f) < 0) {
    uVar6 = *(ushort *)(param_1 + 0x2c) / 7;
    sVar2 = (short)uVar6 + (short)(uVar6 << 1);
    uVar7 = ((uint)*(ushort *)(param_1 + 0x2e) - uVar6 * (*(ushort *)(param_1 + 0x2e) / uVar6)) +
            (int)sVar2;
    sVar1 = (short)uVar7;
    *(short *)(param_1 + 0x2e) = sVar1;
    *(short *)(param_1 + 0x30) = sVar2 + (sVar1 - (short)uVar6 * (short)((uVar7 & 0xffff) / uVar6));
    iVar3 = FUN_1012bee0(param_1,0);
    iVar4 = FUN_1012bf2a(param_1);
    iVar8 = *(int *)(iVar3 + 8);
    iVar3 = FUN_101257c8(param_1);
    uVar5 = FUN_1012beea(param_1);
    FUN_101255fc(uVar5,(iVar3 / 2 - iVar8 / 2) - (iVar4 + iVar8) * (uint)*(ushort *)(param_1 + 0x2e)
                );
    return;
  }
  return;
}

