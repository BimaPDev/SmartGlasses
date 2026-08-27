/* FUN_2c4e3bd0 @ 0x2c4e3bd0 */

undefined4 FUN_2c4e3bd0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0x3e,1);
    FUN_2c4e0504(DAT_2c4e3c74,0,0,0,DAT_2c4e3c7c,0x3e,DAT_2c4e3c78,0x1300,DAT_2c4e3c70);
    return 0;
  }
  iVar2 = (int)param_2 >> 0x1f;
  if (param_3 == 1) {
    uVar1 = *(uint *)(param_1 + 0x50);
  }
  else {
    if (param_3 != 2) goto LAB_2c4e3c20;
    uVar1 = *(uint *)(param_1 + 0x44);
  }
  bVar3 = CARRY4(uVar1,param_2);
  param_2 = uVar1 + param_2;
  iVar2 = iVar2 + (uint)bVar3;
LAB_2c4e3c20:
  if (iVar2 < 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0x47,1);
    FUN_2c4e0504(DAT_2c4e3c74,0,0,0,DAT_2c4e3c7c,0x47,DAT_2c4e3c78,0x1300,DAT_2c4e3c80,param_2);
    return 0;
  }
  if (*(uint *)(param_1 + 0x44) <= param_2) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x44);
    return 1;
  }
  *(uint *)(param_1 + 0x50) = param_2;
  return 1;
}

