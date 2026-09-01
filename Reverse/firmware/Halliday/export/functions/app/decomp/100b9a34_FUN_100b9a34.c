/* FUN_100b9a34 @ 0x100b9a34 */

uint FUN_100b9a34(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_21;
  
  iVar3 = DAT_100b9ae0;
  if (param_2 < 2) {
    return 1 - param_2 & 0xff;
  }
  uVar8 = *(uint *)(DAT_100b9ae0 + 0xc);
  uVar7 = *(uint *)(DAT_100b9ae0 + 8);
  uVar5 = 1;
  do {
    while( true ) {
      uVar2 = uVar5 * 2;
      uVar5 = uVar2 & 0xffff;
      if (uVar7 < 0x1000000) {
        *(uint *)(iVar3 + 8) = uVar7 << 8;
        *(uint *)(iVar3 + 0xc) = uVar8 << 8;
        FUN_100b940c(&local_21);
        uVar7 = *(uint *)(iVar3 + 8);
        uVar8 = (uint)local_21 | *(uint *)(iVar3 + 0xc);
        *(uint *)(iVar3 + 0xc) = uVar8;
      }
      uVar1 = *(ushort *)(param_1 + uVar2);
      uVar6 = (uint)uVar1 * (uVar7 >> 0xb);
      uVar4 = uVar5 | 1;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) break;
      *(uint *)(iVar3 + 8) = uVar6;
      *(ushort *)(param_1 + uVar2) = uVar1 + (short)((int)(0x800 - (uint)uVar1) >> 5);
      uVar7 = uVar6;
      if (param_2 <= uVar5) goto LAB_100b9a7e;
    }
    uVar8 = uVar8 - uVar6;
    *(uint *)(iVar3 + 8) = uVar7 - uVar6;
    *(uint *)(iVar3 + 0xc) = uVar8;
    *(ushort *)(param_1 + uVar2) = uVar1 - (uVar1 >> 5);
    uVar5 = uVar4;
    uVar7 = uVar7 - uVar6;
  } while (uVar4 < param_2);
LAB_100b9a7e:
  return (uVar5 & 0xff) - param_2 & 0xff;
}

