/* FUN_2c645a00 @ 0x2c645a00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c645a00(char *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (((param_1 == (char *)0x0) || (*param_1 != -0xf)) || (-1 < *_LAB_2c645a58 << 0x1d)) {
    func_0x2c643a64();
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  if (*piVar1 == _LAB_2c645a5c) {
    if (*(uint *)(param_1 + 0x34) < 5) {
      uVar2 = 4;
    }
    else {
      uVar2 = 4;
      do {
        piVar1 = piVar1 + 1;
        if (*piVar1 != -0x33333334) break;
        uVar2 = uVar2 + 4;
      } while (uVar2 < *(uint *)(param_1 + 0x34));
    }
  }
  else {
    uVar2 = 0;
  }
  func_0x2c643a64(param_1,uVar2);
  return uVar2;
}

