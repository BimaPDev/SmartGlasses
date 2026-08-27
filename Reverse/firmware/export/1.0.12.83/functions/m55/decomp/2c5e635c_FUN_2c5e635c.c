/* FUN_2c5e635c @ 0x2c5e635c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e635c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = _LAB_2c5e63e8;
  FUN_2c5e9594(_LAB_2c5e63e8);
  iVar2 = FUN_2c6041dc(*puVar1,0xffffffff);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e63f4,0x74,_LAB_2c5e63f0,_LAB_2c5e63ec);
  }
  uVar3 = FUN_2c5e6eec();
  if (param_1 != 0xd4 || (uVar3 & 0xf7) != 0) {
    FUN_2c5e6ce4(1,0);
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(param_1,puVar1[3]);
    }
    (*(code *)puVar1[0xb])(0,4);
    return 1;
  }
  *(undefined1 *)(puVar1 + 4) = 3;
  FUN_2c5e6ce4(0);
  FUN_2c5e4b48(iVar2,_LAB_2c5e63f8,0xff,0xd4);
  return 1;
}

