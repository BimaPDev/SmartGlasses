/* FUN_140711d0 @ 0x140711d0 */

undefined4 FUN_140711d0(uint param_1,undefined2 param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = DAT_140712c8;
  if (((param_1 < 2) && (iVar6 = *(int *)(DAT_140712c8 + (param_1 + 6) * 4), iVar6 != 0)) &&
     (param_3 < *(byte *)(iVar6 + 0x3c))) {
    if (param_5 == 0) {
      uVar5 = 0x40;
    }
    else {
      iVar7 = *(int *)(iVar6 + (param_3 + 0x10) * 4);
      if ((iVar7 == 0) || (-1 < (int)((uint)*(ushort *)(iVar7 + 0x12) << 0x1f))) {
        return 0x43;
      }
      if (*(ushort *)(iVar7 + 0x1a) < *(ushort *)(param_5 + 4)) {
        return 0x31;
      }
      if ((((int)((uint)*(byte *)(param_5 + 0x2d) << 0x1c) < 0) ||
          (uVar4 = *(byte *)(param_5 + 0x2d) & 0xf, ((8 - uVar4) * 4 & 0xff) < 8)) ||
         (iVar2 = FUN_1407358c(param_5), iVar2 != 0)) {
        return 0x4c;
      }
      iVar3 = uVar4 + 3;
      uVar5 = 0;
      iVar2 = param_5 + iVar3 * 4;
      *(undefined2 *)(iVar2 + 4) = param_2;
      *(undefined2 *)(param_5 + iVar3 * 4) = 0;
      *(undefined2 *)(iVar2 + 2) = 0;
      FUN_140739f0(iVar7 + 4,param_5);
      iVar2 = DAT_140712c8;
      if ((-1 < (int)((uint)*(ushort *)(iVar7 + 0x12) << 0x1e)) &&
         ((-1 < (int)((uint)*(ushort *)(iVar7 + 0x12) << 0x1d) ||
          (uVar5 = 0, *(short *)(iVar7 + 0x24) != 0)))) {
        uVar4 = *(uint *)(iVar1 + 0x20);
        *(uint *)(iVar6 + 0x2c) = 1 << (param_3 & 0xff) | *(uint *)(iVar6 + 0x2c);
        *(uint *)(iVar1 + 0x20) = 1 << (param_1 & 0xff) | uVar4;
        FUN_14072a44(0,iVar2);
        uVar5 = 0;
      }
    }
  }
  else if (param_5 == 0) {
    uVar5 = 0x40;
  }
  else {
    uVar5 = 0x43;
  }
  return uVar5;
}

