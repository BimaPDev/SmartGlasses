/* FUN_100fad7c @ 0x100fad7c */

undefined4 FUN_100fad7c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar2 = *(int *)(param_1 + 8) + param_2;
  if (*(code **)(param_1 + 0x14) == (code *)0x0) {
    if (*(uint *)(param_1 + 4) < uVar2) {
      return 0x55;
    }
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x14))(param_1,uVar2,0);
    if (iVar1 != 0) {
      return 0x55;
    }
  }
  *(uint *)(param_1 + 8) = uVar2;
  return 0;
}

