/* FUN_1005e6a0 @ 0x1005e6a0 */

uint FUN_1005e6a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if ((uint)piVar3[0xc6] < 2) {
    uVar1 = *(byte *)((int)piVar3 + 0x31d) & 1;
    if ((*(byte *)((int)piVar3 + 0x31d) & 1) != 0) {
      uVar1 = (DAT_1005e71c - DAT_1005e718) * 0x20 & 0xff00;
      iVar4 = *piVar3;
      FUN_100a5b78(DAT_1005e720 | uVar1,DAT_1005e728,DAT_1005e724,uVar1,param_4);
      *(undefined1 *)((int)piVar3 + 799) = 0;
      *(byte *)((int)piVar3 + 0x31d) = *(byte *)((int)piVar3 + 0x31d) & 0xf4 | 2;
      FUN_1013cec4(*(int *)(param_1 + 0x10) + 0x28);
      FUN_1011bb6c(param_1,0);
      pcVar2 = *(code **)(*(int *)(iVar4 + 0x3c) + 8);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1);
      }
      (**(code **)(*(int *)(piVar3[1] + 8) + 8))();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

