/* FUN_10128998 @ 0x10128998 */

void FUN_10128998(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_1008bbb4();
  if ((param_3 & 1) == 0) {
    *(byte *)(param_2 + 0x3f) = *(byte *)(param_2 + 0x3f) & 0x7f;
    *(byte *)(*piVar1 + 0x1c) = *(byte *)(*piVar1 + 0x1c) & 0xbf;
  }
  else {
    FUN_10128990(*(undefined4 *)(param_2 + 0x28),*(uint *)(param_2 + 0x3c) & 0x7fffffff);
    *(byte *)(param_2 + 0x3f) = *(byte *)(param_2 + 0x3f) | 0x80;
    *(byte *)(*piVar1 + 0x1c) = *(byte *)(*piVar1 + 0x1c) | 0x40;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  param_1[1] = param_2 + 0x10;
  param_1[2] = param_2 + 0x10;
  *param_1 = uVar2;
  return;
}

