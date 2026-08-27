/* FUN_140c3ee8 @ 0x140c3ee8 */

void FUN_140c3ee8(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (DAT_140c3f40 < param_1) {
    uVar3 = FUN_140cb806(DAT_140c3f44);
  }
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  if ((uVar2 < (uint)uVar3) && ((uint)uVar3 < uVar2 << 1)) {
    param_1 = uVar2 << 1;
  }
  iVar1 = param_1 + 0xd;
  if ((0x1000 < param_1 + 0x1d) && (uVar2 < param_1)) {
    param_1 = (param_1 + 0x1000) - (param_1 + 0x1d & 0xfff);
    if (DAT_140c3f40 <= param_1) {
      param_1 = DAT_140c3f40;
    }
    iVar1 = param_1 + 0xd;
  }
  if (iVar1 < 0) {
    FUN_140cb7f4();
  }
  iVar1 = FUN_140bff34();
  *(uint *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

