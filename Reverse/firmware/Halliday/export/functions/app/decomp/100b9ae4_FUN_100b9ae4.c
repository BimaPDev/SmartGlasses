/* FUN_100b9ae4 @ 0x100b9ae4 */

uint FUN_100b9ae4(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte local_29 [5];
  
  iVar3 = DAT_100b9ba0;
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar5 = *(uint *)(DAT_100b9ba0 + 8);
    uVar7 = *(uint *)(DAT_100b9ba0 + 0xc);
    uVar9 = 0;
    uVar8 = 2;
    uVar2 = 0;
    while( true ) {
      if (uVar5 < 0x1000000) {
        *(uint *)(iVar3 + 8) = uVar5 << 8;
        *(uint *)(iVar3 + 0xc) = uVar7 << 8;
        FUN_100b940c(local_29);
        uVar5 = *(uint *)(iVar3 + 8);
        uVar7 = (uint)local_29[0] | *(uint *)(iVar3 + 0xc);
        *(uint *)(iVar3 + 0xc) = uVar7;
      }
      uVar1 = *(ushort *)(param_1 + uVar8);
      uVar4 = (uint)uVar1 * (uVar5 >> 0xb);
      uVar5 = uVar5 - uVar4;
      uVar6 = uVar8 & 0xffff | 1;
      if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
        uVar7 = uVar7 - uVar4;
        *(uint *)(iVar3 + 8) = uVar5;
        *(uint *)(iVar3 + 0xc) = uVar7;
        uVar9 = 1 << (uVar2 & 0xff) & 0xffU | uVar9;
        *(ushort *)(param_1 + uVar8) = uVar1 - (uVar1 >> 5);
      }
      else {
        *(uint *)(iVar3 + 8) = uVar4;
        uVar6 = uVar8 & 0xffff;
        *(ushort *)(param_1 + uVar8) = uVar1 + (short)((int)(0x800 - (uint)uVar1) >> 5);
        uVar5 = uVar4;
      }
      if ((param_2 - 1U & 0xff) == uVar2) break;
      uVar8 = uVar6 << 1;
      uVar2 = uVar2 + 1;
    }
  }
  return uVar9;
}

