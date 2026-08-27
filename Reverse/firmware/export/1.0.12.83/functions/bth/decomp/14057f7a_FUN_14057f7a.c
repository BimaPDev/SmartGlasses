/* FUN_14057f7a @ 0x14057f7a */

void FUN_14057f7a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14057684(*(undefined1 *)(param_2 + 1),*(undefined1 *)(param_2 + 3),
                       *(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 4));
  if ((iVar1 == 0) && (iVar2 = FUN_14057d64(param_1), iVar1 = DAT_14058010, iVar2 != 2)) {
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(*(int *)(DAT_14058010 + 0x10) + 0x18) != 0) {
      if (*(int *)(param_1 + 0x50) != 0) {
        return;
      }
      if ((int)((uint)*(byte *)(param_1 + 0x43) << 0x1a) < 0) {
        return;
      }
      if (((int)((uint)*(byte *)(param_2 + 3) << 0x1c) < 0) || (iVar2 = FUN_140641f0(), iVar2 != 0))
      {
        iVar1 = FUN_14057630(param_1,DAT_14058014);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x50);
          *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_2 + 1);
          *(undefined2 *)(iVar1 + 0x68) = *(undefined2 *)(param_2 + 5);
          FUN_14057df0(iVar1,1,0);
          return;
        }
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))
                  (*(undefined1 *)(param_1 + 0x42),*(undefined4 *)(param_1 + 0x3c),99);
      }
    }
  }
  iVar1 = *DAT_140597ec;
  FUN_14059434(*(undefined1 *)(param_1 + 0x42),&stack0xfffffff0);
  if (*DAT_140597ec == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

