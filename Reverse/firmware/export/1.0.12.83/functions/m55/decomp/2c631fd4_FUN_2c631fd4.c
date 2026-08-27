/* FUN_2c631fd4 @ 0x2c631fd4 */

uint FUN_2c631fd4(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (iVar4 = FUN_2c6041dc(*(int *)(param_1 + 0x24),0,param_3,param_4,param_4), iVar4 != 0)) {
    sVar1 = *(short *)(iVar4 + 0x16);
    iVar5 = FUN_2c6033b4(iVar4,0,0x57);
    sVar2 = *(short *)(iVar5 + 8);
    sVar3 = FUN_2c6033b4(iVar4,0,0x59);
    iVar4 = (int)sVar3;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    uVar6 = (int)(short)((param_2 + (short)(iVar4 >> 1)) - sVar1) / (int)(short)(sVar2 + sVar3) &
            0xffff;
    if (*(ushort *)(param_1 + 0x34) <= uVar6) {
      uVar6 = *(ushort *)(param_1 + 0x34) - 1 & 0xffff;
    }
    return uVar6;
  }
  return 0;
}

