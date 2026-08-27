/* FUN_2c5e798c @ 0x2c5e798c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e798c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = _LAB_2c5e7a34;
  FUN_2c5e9594(_LAB_2c5e7a34);
  iVar2 = FUN_2c6041dc(*puVar1,0xffffffff);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e7a44,0x76,_LAB_2c5e7a40,_LAB_2c5e7a3c);
  }
  iVar3 = FUN_2c5e6eec();
  if (iVar3 != 3 && iVar3 != 0) {
    FUN_2c5e6ce4(1,0);
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(param_1,puVar1[3]);
    }
    (*(code *)puVar1[0xb])(0,4);
    return 1;
  }
  if (param_1 - 0xd2U < 2) {
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(param_1,puVar1[3]);
      return 1;
    }
  }
  else if (param_1 == 0xd4) {
    *(undefined1 *)(puVar1 + 4) = 3;
    FUN_2c5e6ce4(0);
    FUN_2c5e4b48(iVar2,_LAB_2c5e7a38,0xff,0xd4);
  }
  return 1;
}

