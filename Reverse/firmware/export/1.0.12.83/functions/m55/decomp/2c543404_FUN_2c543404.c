/* FUN_2c543404 @ 0x2c543404 */

undefined4 FUN_2c543404(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_2c54800c(iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x114) + 0xc),*(int *)(iVar1 + 0x114),iVar1,
               param_4);
  return 1;
}

