/* FUN_2c4e5be4 @ 0x2c4e5be4 */

undefined4 FUN_2c4e5be4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_2c4c3340(*(undefined4 *)(param_1 + 0x14));
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar2 = 0;
    iVar1 = param_1;
    do {
      iVar2 = iVar2 + 1;
      FUN_2c4c3340(*(undefined4 *)(iVar1 + 0x1c));
      FUN_2c4c3340(*(undefined4 *)(iVar1 + 0x20));
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  FUN_2c4c3340(param_1);
  return 0;
}

