/* FUN_140de0ac @ 0x140de0ac */

float FUN_140de0ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar6;
  longlong lVar5;
  
  puVar1 = DAT_140de160;
  lVar5 = FUN_140dd490(*DAT_140de160,param_1,param_2,DAT_140de150);
  uVar6 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar3 = (undefined4)lVar5;
  iVar2 = FUN_140e3d34(uVar3,uVar6,uVar3,uVar6);
  if (iVar2 == 0) {
    fVar4 = (float)FUN_140e3df0(uVar3,uVar6);
    if (DAT_140de158 < ABS(fVar4)) {
      iVar2 = FUN_140e3d34(uVar3,uVar6 & 0x7fffffff,0xffffffff,DAT_140de15c);
      if ((iVar2 != 0) ||
         (iVar2 = FUN_140e3cf8(uVar3,uVar6 & 0x7fffffff,0xffffffff,DAT_140de15c), iVar2 != 0)) {
        *(undefined4 *)*puVar1 = 0x22;
      }
    }
  }
  else {
    if (-1 < lVar5) {
      fVar4 = (float)FUN_140da7cc(DAT_140de154);
      return fVar4;
    }
    fVar4 = (float)FUN_140da7cc(DAT_140de154);
    fVar4 = -fVar4;
  }
  return fVar4;
}

