/* FUN_1008686c @ 0x1008686c */

uint FUN_1008686c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar6 = param_1;
  uVar7 = param_2;
  iVar8 = param_3;
  iVar3 = FUN_1005b8b8();
  uVar2 = DAT_10086944;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
    if ((int)((uint)*(byte *)(DAT_10086940 + 0x1c) << 0x1e) < 0) {
      uVar4 = param_4 * (uint)*(ushort *)(iVar3 + 0xc);
      if (uVar4 < 0x801) {
        uVar4 = 0;
        while( true ) {
          FUN_1011dbf4(uVar2,0xffffffff);
          pbVar5 = (byte *)FUN_100863a0(iVar3,param_3,param_4);
          if (pbVar5 != (byte *)0x0) {
            bVar1 = *pbVar5;
            uVar4 = bVar1 & 8;
            *pbVar5 = bVar1 | 2;
            if ((bVar1 & 8) == 0) {
              FUN_1011ea40(pbVar5 + (uint)*(ushort *)(iVar3 + 0xc) *
                                    (param_3 - *(int *)(pbVar5 + 4)) + 0x10,param_2,
                           param_4 * (uint)*(ushort *)(iVar3 + 0xc),uVar4,uVar6,uVar4,iVar8);
              *pbVar5 = *pbVar5 | 4;
            }
            else {
              *pbVar5 = bVar1 & 0xfe | 2;
              uVar4 = 0xfffffffb;
            }
            *pbVar5 = *pbVar5 & 0xfd;
          }
          FUN_100863dc();
          if (pbVar5 != (byte *)0x0) break;
          FUN_100864e4(param_1,iVar3,param_3);
        }
        return uVar4;
      }
      FUN_100863e8(iVar3,param_3,param_4,uVar4,uVar6,uVar7);
    }
    uVar4 = FUN_1011b508(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  return 0xffffffea;
}

