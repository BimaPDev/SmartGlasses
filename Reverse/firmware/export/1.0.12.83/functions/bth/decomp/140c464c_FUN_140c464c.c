/* FUN_140c464c @ 0x140c464c */

void FUN_140c464c(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (0xffffffe < param_1) {
    uVar3 = FUN_140cb806(DAT_140c46a0);
  }
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  if ((uVar2 < (uint)uVar3) && ((uint)uVar3 < uVar2 << 1)) {
    param_1 = uVar2 << 1;
  }
  iVar1 = (param_1 + 4) * 4;
  if ((0x1000 < iVar1 + 0x10U) && (uVar2 < param_1)) {
    param_1 = param_1 + (0x1000 - (iVar1 + 0x10U & 0xfff) >> 2);
    if (DAT_140c46a4 <= param_1) {
      param_1 = DAT_140c46a4;
    }
    iVar1 = (param_1 + 4) * 4;
  }
  iVar1 = FUN_140bff34(iVar1);
  *(uint *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

