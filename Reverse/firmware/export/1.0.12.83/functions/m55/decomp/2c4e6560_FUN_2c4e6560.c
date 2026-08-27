/* FUN_2c4e6560 @ 0x2c4e6560 */

int * FUN_2c4e6560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_2c4c32b8(0x718);
  *piVar1 = param_1;
  if (param_1 != 8000) {
    FUN_2c673ee8(piVar1 + 4);
    return piVar1;
  }
  iVar2 = FUN_2c4c32b8(0xf0);
  piVar1[1] = iVar2;
  iVar2 = FUN_2c4e6404(0x3c,0x10,0,iVar2,param_4);
  piVar1[2] = iVar2;
  iVar2 = FUN_2c4e6404(0x78,0x10,3);
  piVar1[3] = iVar2;
  FUN_2c673ee8(piVar1 + 4);
  return piVar1;
}

