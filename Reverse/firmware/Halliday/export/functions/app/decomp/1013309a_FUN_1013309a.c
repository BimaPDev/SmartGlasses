/* FUN_1013309a @ 0x1013309a */

undefined4 FUN_1013309a(ushort *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1[1];
  if ((((uVar2 < *param_1) || (*param_1 < 6)) || (0xc80 < uVar2)) ||
     ((499 < param_1[2] || (0xc76 < (param_1[3] - 10 & 0xffff))))) {
    uVar1 = 0;
  }
  else if (param_1[2] * uVar2 + uVar2 < (uint)param_1[3] << 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

