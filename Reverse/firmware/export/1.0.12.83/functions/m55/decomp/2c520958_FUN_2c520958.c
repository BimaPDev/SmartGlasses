/* FUN_2c520958 @ 0x2c520958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c520958(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = FUN_2c602410();
  if (iVar1 == _LAB_2c520a80) {
    if (*(char *)(iVar2 + 0x1fc) != '\0') {
      *(undefined1 *)(iVar2 + 0x1fc) = 0;
      if (*(int *)(iVar2 + 0x1e4) != 0) {
        FUN_2c51f69c();
      }
      if (*(int *)(iVar2 + 0x1f0) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x28) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x38) != 0) {
        FUN_2c51f660();
      }
    }
  }
  else if (iVar1 == _LAB_2c520a84) {
    if (*(char *)(iVar2 + 0x1fc) != '\x01') {
      *(undefined1 *)(iVar2 + 0x1fc) = 1;
      if (*(int *)(iVar2 + 0x1e4) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x1f0) != 0) {
        FUN_2c51f69c();
      }
      if (*(int *)(iVar2 + 0x28) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x38) != 0) {
        FUN_2c51f660();
      }
    }
  }
  else if (iVar1 == _LAB_2c520a88) {
    if (*(char *)(iVar2 + 0x1fc) != '\x03') {
      *(undefined1 *)(iVar2 + 0x1fc) = 3;
      if (*(int *)(iVar2 + 0x1e4) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x1f0) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x28) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x38) != 0) {
        FUN_2c51f69c(*(int *)(iVar2 + 0x38));
      }
    }
  }
  else {
    if ((iVar1 != _LAB_2c520a8c) && (iVar1 != _LAB_2c520a90)) {
      return;
    }
    if (*(char *)(iVar2 + 0x1fc) != '\x02') {
      *(undefined1 *)(iVar2 + 0x1fc) = 2;
      if (*(int *)(iVar2 + 0x1e4) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x1f0) != 0) {
        FUN_2c51f660();
      }
      if (*(int *)(iVar2 + 0x28) != 0) {
        FUN_2c51f69c();
      }
      if (*(int *)(iVar2 + 0x38) != 0) {
        FUN_2c51f660();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c520944,0x13c,_LAB_2c520940,_LAB_2c52093c);
}

