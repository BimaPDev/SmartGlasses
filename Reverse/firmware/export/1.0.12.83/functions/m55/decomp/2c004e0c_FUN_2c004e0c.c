/* FUN_2c004e0c @ 0x2c004e0c */

void FUN_2c004e0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    FUN_2c003b5c();
    FUN_2c003b20(param_1,*(undefined1 *)
                          (*(int *)(DAT_2c004e88 + (uint)*(byte *)(DAT_2c004e84 + param_1) * 4) + 5)
                );
LAB_2c004e28:
    FUN_2c003d6c(param_1);
    return;
  }
  FUN_2c003b40();
  FUN_2c003b20(param_1,*(undefined1 *)
                        (*(int *)(DAT_2c004e88 + (uint)*(byte *)(DAT_2c004e84 + param_1) * 4) + 6));
  iVar1 = *(int *)(DAT_2c004e8c + param_1 * 4);
  if (iVar1 << 0x1a < 0) {
    uVar2 = 0xeb;
  }
  else {
    if (-1 < iVar1 << 0x1c) goto LAB_2c004e28;
    uVar2 = 0xbb;
  }
  FUN_2c003db0(param_1);
  FUN_2c003c60(param_1,2);
  FUN_2c003c84(param_1,uVar2,0);
  FUN_2c003db0(param_1);
  FUN_2c003d6c(param_1);
  return;
}

