/* FUN_10106a44 @ 0x10106a44 */

void FUN_10106a44(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*param_2 != 0) || (*(int *)(param_1 + 0x1c) != 0)) {
    iVar1 = *param_2 + *(int *)(param_1 + 0x16c);
    *(int *)(param_1 + 0x16c) = iVar1;
    if (-1 < iVar1) {
      if ((0 < *(int *)(param_1 + 0x1b0)) &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0x1b8) + *(int *)(param_1 + 0x1b0) * 0x10 + -4) + 8)
          < iVar1)) {
        *(undefined4 *)(param_1 + 0xc) = 0x84;
        return;
      }
      *(undefined1 *)(param_1 + 0x17c) = 0;
      if (*param_2 < 0) {
        uVar2 = *(int *)(param_1 + 0x270) + 1;
        *(uint *)(param_1 + 0x270) = uVar2;
        if (*(uint *)(param_1 + 0x274) < uVar2) {
          *(undefined4 *)(param_1 + 0xc) = 0x8b;
        }
      }
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0x84;
  return;
}

