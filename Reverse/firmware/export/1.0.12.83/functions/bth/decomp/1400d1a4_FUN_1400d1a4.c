/* FUN_1400d1a4 @ 0x1400d1a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400d1a4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *extraout_r3;
  bool bVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != param_2) {
    *param_2 = param_1;
    puVar2 = *(undefined4 **)(param_1 + 4);
    param_2[1] = (int)puVar2;
    *puVar2 = param_2;
    *(int **)(param_1 + 4) = param_2;
    piVar1 = *(int **)param_2[1];
    if ((piVar1 == param_2) && (*(int **)(*piVar1 + 4) == piVar1)) {
      return param_1;
    }
    FUN_1400d188(uRam1400d1e0,uRam1400d1dc,0x50,piVar1,param_4);
    piVar1 = extraout_r3;
  }
  FUN_1400d188(uRam1400d1e4,uRam1400d1dc,0x4b,piVar1,param_4);
  if (((*_DAT_00000054 == 0x50) && (puVar2 = _DAT_00000050, _DAT_00000050[1] == 0x50)) ||
     ((FUN_14015a68(0x41,DAT_1400d238,0x50), *_DAT_00000054 == 0x50 &&
      (puVar2 = _DAT_00000050, _DAT_00000050[1] == 0x50)))) {
    do {
      if (puVar2 == (undefined4 *)&DAT_00000050) {
        return 1;
      }
    } while ((*(undefined4 **)puVar2[1] == puVar2) &&
            (bVar3 = (undefined4 *)((undefined4 *)*puVar2)[1] == puVar2,
            puVar2 = (undefined4 *)*puVar2, bVar3));
  }
  return 0;
}

