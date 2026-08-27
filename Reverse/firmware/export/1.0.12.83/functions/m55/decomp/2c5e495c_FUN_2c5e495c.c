/* FUN_2c5e495c @ 0x2c5e495c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e495c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = _LAB_2c5e49f8;
  FUN_2c5e9594(_LAB_2c5e49f8);
  iVar2 = FUN_2c6041dc(*puVar1,0xffffffff);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e4a04,0x77,_LAB_2c5e4a00,_LAB_2c5e49fc);
  }
  uVar3 = FUN_2c5e6eec();
  if ((uVar3 & 0xfd) == 0) {
    if (param_1 - 0xd2U < 2) {
      if ((code *)puVar1[1] != (code *)0x0) {
        (*(code *)puVar1[1])(param_1,puVar1[3]);
        return 1;
      }
    }
    else if (param_1 == 0xd4) {
      *(undefined1 *)(puVar1 + 4) = 3;
      FUN_2c5e6ce4(0);
      FUN_2c5e4b48(iVar2,_LAB_2c5e4a08,0xff,0xd4);
      return 1;
    }
    return 1;
  }
  FUN_2c5e6ce4(1,0);
  if ((code *)puVar1[1] != (code *)0x0) {
    (*(code *)puVar1[1])(param_1,puVar1[3]);
  }
  (*(code *)puVar1[0xb])(0,4);
  return 1;
}

