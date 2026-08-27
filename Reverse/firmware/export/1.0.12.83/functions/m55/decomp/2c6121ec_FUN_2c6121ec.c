/* FUN_2c6121ec @ 0x2c6121ec */

void FUN_2c6121ec(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(char *)(param_2 + 0x10) == '\x01') {
      FUN_2c62de2c(iVar1);
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_2c62bea8();
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      FUN_2c62bea8();
    }
    FUN_2c62bea8(iVar1);
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  return;
}

