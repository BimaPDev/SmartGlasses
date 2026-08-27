/* FUN_140587d4 @ 0x140587d4 */

undefined4 FUN_140587d4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_14058858;
  if (param_1 == (int *)0x0) {
    return 0x40;
  }
  if (*param_1 != -1) {
    if ((param_1[1] & 0xc000U) == 0) {
      if (param_1 == *(int **)(DAT_14058858 + 0x44)) {
        FUN_14073a58(DAT_14058858 + 0x44);
        bVar1 = *(byte *)(iVar2 + 0x4e);
        if ((bVar1 & 0x18) == 0) {
          FUN_14058610();
        }
        else {
          *(byte *)(iVar2 + 0x4e) = bVar1 | 1;
        }
      }
      else {
        FUN_14073a6c(DAT_14058858 + 0x44,param_1,param_3,*(int **)(DAT_14058858 + 0x44),param_4);
      }
    }
    else {
      FUN_14073a6c(DAT_1405885c,param_1,param_3,param_1[1],param_4);
      if ((-1 < (int)((uint)*(byte *)(DAT_14058858 + 0x4e) << 0x1d)) &&
         (*(int *)(DAT_14058858 + 0x38) == 0)) {
        iVar2 = DAT_14058858 + 0x30;
        *(byte *)(DAT_14058858 + 0x4e) = *(byte *)(DAT_14058858 + 0x4e) & 0xfd;
        FUN_14072abc(0,iVar2);
      }
    }
    *param_1 = -1;
    return 0;
  }
  return 0x40;
}

