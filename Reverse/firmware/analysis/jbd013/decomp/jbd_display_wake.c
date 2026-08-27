/* FUN_2c49945c @ 0x2c49945c */

void FUN_2c49945c(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_2c499494;
  piVar1 = DAT_2c499490;
  if (*DAT_2c499490 != 0) {
    FUN_2c644044(*(undefined4 *)(DAT_2c499494 + 0x38),0xffffffff);
    *(undefined1 *)(iVar2 + 0x46) = param_1;
    *(undefined1 *)(iVar2 + 0x45) = 1;
    FUN_2c644080(*(undefined4 *)(iVar2 + 0x38));
    FUN_2c64723c(*piVar1);
    return;
  }
  return;
}

