/* FUN_100fdb7c @ 0x100fdb7c */

int FUN_100fdb7c(byte *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2 & 0xfffffffc;
  if (uVar3 == 0) {
    iVar1 = 0;
  }
  else {
    uVar4 = 0;
    iVar1 = 0;
    pbVar2 = param_1;
    do {
      uVar4 = uVar4 + 4;
      iVar1 = iVar1 + ((uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18 | (uint)pbVar2[3] |
                      (uint)pbVar2[2] << 8);
      pbVar2 = pbVar2 + 4;
    } while (uVar4 < uVar3);
  }
  if ((param_2 != uVar3) && (uVar3 < param_2)) {
    uVar4 = 0;
    pbVar2 = param_1 + (uVar3 - 1);
    do {
      pbVar2 = pbVar2 + 1;
      uVar4 = uVar4 | (uint)*pbVar2 << (((uint)(param_1 + ~(uint)pbVar2) & 3) << 3);
    } while (pbVar2 != param_1 + (param_2 - 1));
    iVar1 = iVar1 + uVar4;
  }
  return iVar1;
}

