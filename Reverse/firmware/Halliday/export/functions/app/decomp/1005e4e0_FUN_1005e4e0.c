/* FUN_1005e4e0 @ 0x1005e4e0 */

undefined4 FUN_1005e4e0(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if ((uint)piVar3[0xc6] < 2) {
    if (-1 < (int)((uint)*(byte *)((int)piVar3 + 0x31d) << 0x1f)) {
      iVar4 = *piVar3;
      FUN_100a5b78(DAT_1005e554 | (DAT_1005e550 - DAT_1005e54c) * 0x20 & 0xff00U,DAT_1005e55c,
                   DAT_1005e558);
      (**(code **)(*(int *)(piVar3[1] + 8) + 4))(piVar3[1],iVar4);
      (**(code **)(*(int *)(piVar3[1] + 8) + 0xc))(piVar3[1],iVar4 + 0x20);
      *(byte *)((int)piVar3 + 0x31d) = *(byte *)((int)piVar3 + 0x31d) | 1;
      pcVar2 = *(code **)(*(int *)(iVar4 + 0x3c) + 0xc);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1);
      }
      FUN_1005e4ac(*(undefined4 *)(param_1 + 0x10));
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

