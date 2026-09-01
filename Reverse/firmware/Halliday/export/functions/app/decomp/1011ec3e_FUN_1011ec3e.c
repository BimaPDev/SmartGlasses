/* FUN_1011ec3e @ 0x1011ec3e */

int FUN_1011ec3e(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_1[2];
  uVar3 = (uint)*param_1;
  if (uVar2 < uVar3) {
    iVar1 = (param_1[5] + uVar2) - uVar3;
  }
  else {
    iVar1 = uVar2 - uVar3;
  }
  return iVar1;
}

