/* FUN_2c605090 @ 0x2c605090 */

int FUN_2c605090(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_2c6033b4(param_1,0,0x16);
  if (cVar1 == '\x01') {
    iVar2 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = (int)*(short *)(*(int *)(param_1 + 8) + 0x10);
    }
    return iVar2;
  }
  iVar2 = FUN_2c6046d8(param_1);
  return iVar2;
}

