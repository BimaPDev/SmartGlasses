/* FUN_2c4cb8aa @ 0x2c4cb8aa */

void FUN_2c4cb8aa(int param_1)

{
  int iStack_c;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_2c4d3c14(param_1 + 0x14);
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x128) = 7;
    iStack_c = param_1;
    FUN_2c4ceba4();
    if (*(int *)(iStack_c + 0x360) != 0) {
      FUN_2c4d10a8(iStack_c + 0x360);
    }
    FUN_2c4d1018(&iStack_c);
  }
  return;
}

