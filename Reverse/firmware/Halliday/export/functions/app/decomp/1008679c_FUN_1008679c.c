/* FUN_1008679c @ 0x1008679c */

uint FUN_1008679c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = param_1;
  uVar8 = param_2;
  iVar5 = param_3;
  iVar3 = FUN_1005b8b8();
  uVar2 = DAT_10086868;
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0)) {
    return 0xffffffea;
  }
  if ((int)((uint)*(byte *)(DAT_10086864 + 0x1c) << 0x1e) < 0) {
    uVar6 = param_4 * (uint)*(ushort *)(iVar3 + 0xc);
    if (uVar6 < 0x800) {
      uVar6 = 0;
      while( true ) {
        FUN_1011dbf4(uVar2,0xffffffff);
        pbVar4 = (byte *)FUN_100863a0(iVar3,param_3,param_4);
        if (pbVar4 != (byte *)0x0) {
          bVar1 = *pbVar4;
          uVar6 = bVar1 & 8;
          *pbVar4 = bVar1 | 2;
          if ((bVar1 & 8) == 0) {
            FUN_1011ea40(param_2,pbVar4 + (uint)*(ushort *)(iVar3 + 0xc) *
                                          (param_3 - *(int *)(pbVar4 + 4)) + 0x10,
                         param_4 * (uint)*(ushort *)(iVar3 + 0xc),uVar6,uVar7,uVar6,iVar5);
          }
          else {
            *pbVar4 = bVar1 & 0xfe | 2;
            uVar6 = 0xfffffffb;
          }
          *pbVar4 = *pbVar4 & 0xfd;
        }
        FUN_100863dc();
        if (pbVar4 != (byte *)0x0) break;
        FUN_100864e4(param_1,iVar3,param_3);
      }
      return uVar6;
    }
    FUN_100863e8(iVar3,param_3,param_4,uVar6,uVar7,uVar8);
  }
  iVar5 = FUN_1005b8b8();
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar5 + 0x18) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1011b4fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE)(iVar5,param_2,param_3,param_4);
    return uVar6;
  }
  return 0xffffffea;
}

