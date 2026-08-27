/* FUN_2c00502c @ 0x2c00502c */

undefined4 FUN_2c00502c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c0040c4();
  *(undefined4 *)(DAT_2c005074 + param_1 * 4) = uVar1;
  FUN_2c003d6c(param_1);
  if (*(char *)(DAT_2c005078 + param_1) == '\0') {
    iVar2 = *(int *)(DAT_2c00507c + param_1 * 4);
  }
  else {
    FUN_2c003de8(param_1);
    iVar2 = *(int *)(DAT_2c00507c + param_1 * 4);
  }
  if (-1 < iVar2 << 0x13) {
    return 0;
  }
  FUN_2c004e0c(param_1,0);
  return 0;
}

