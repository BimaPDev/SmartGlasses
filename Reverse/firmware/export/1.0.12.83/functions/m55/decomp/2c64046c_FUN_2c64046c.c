/* FUN_2c64046c @ 0x2c64046c */

undefined4 FUN_2c64046c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 != 1) {
    uVar1 = DAT_2c6404b8;
    if (*param_1 != 2) {
      uVar1 = 0;
    }
    return uVar1;
  }
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  if (uVar2 == uVar3) {
    return DAT_2c6404c4;
  }
  uVar1 = DAT_2c6404c4;
  if (((char)param_1[4] == '\0') && (uVar1 = DAT_2c6404c0, (int)uVar2 < (int)uVar3)) {
    iVar4 = (param_1[2] - uVar2) + 1;
    if (iVar4 < 0) {
      iVar4 = (param_1[2] - uVar2) + 2;
    }
    if (uVar3 < (uint)(iVar4 >> 1)) {
      uVar1 = DAT_2c6404bc;
    }
  }
  return uVar1;
}

