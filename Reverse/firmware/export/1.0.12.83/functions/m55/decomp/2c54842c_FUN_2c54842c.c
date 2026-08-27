/* FUN_2c54842c @ 0x2c54842c */

undefined4 FUN_2c54842c(int param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xd4) = param_2;
  *(undefined1 *)(param_1 + 0xdc) = *(undefined1 *)(param_3 + 4);
  FUN_2c52f5f4(param_1 + 0xe0,param_3 + 8);
  FUN_2c52f5f4(param_1 + 0xf8,param_3 + 0x20);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_3 + 0x38);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  iVar2 = FUN_2c547250();
  *(undefined1 *)(param_1 + 0xdc) = *(undefined1 *)(iVar2 + 4);
  FUN_2c52f5f4(param_1 + 0xe0,iVar2 + 8);
  FUN_2c52f5f4(param_1 + 0xf8,iVar2 + 0x20);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(iVar2 + 0x38);
  *(undefined1 *)(param_1 + 0xd4) = 0xff;
  if (*(char *)(param_1 + 0x5a) != '\0') {
    if (*(int *)(param_1 + 0x14) == *(int *)(*(int *)(param_1 + 0x114) + 0xc)) {
      FUN_2c545fe4();
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
  }
  return uVar1;
}

