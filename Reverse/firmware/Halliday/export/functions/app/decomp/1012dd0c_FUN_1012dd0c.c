/* FUN_1012dd0c @ 0x1012dd0c */

uint FUN_1012dd0c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = (param_2 - uVar2 >> 0xc | (-*(int *)(param_1 + 0xc) - (uint)(param_2 < uVar2)) * 0x100000)
          + 1;
  if (uVar1 < (*(uint *)(param_1 + 0x10) >> 0xc | *(int *)(param_1 + 0x14) << 0x14)) {
    uVar2 = uVar2 + uVar1 * 0x1000;
  }
  return uVar2;
}

