/* FUN_2c5ea594 @ 0x2c5ea594 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ea594(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = _LAB_2c5ea628;
  FUN_2c5e9594(_LAB_2c5ea628);
  iVar2 = FUN_2c6041dc(*puVar1,0xffffffff);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5ea638,0x75,_LAB_2c5ea634,_LAB_2c5ea630);
  }
  iVar3 = FUN_2c5e6eec();
  if (iVar3 != 7 && iVar3 != 0) {
    FUN_2c5e6ce4(1,0);
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(param_1,puVar1[3]);
    }
    (*(code *)puVar1[0xb])(0,4);
    return 1;
  }
  if (param_1 == 0xd4) {
    *(undefined1 *)(puVar1 + 4) = 3;
    FUN_2c5e6ce4(0);
    FUN_2c5e4b48(iVar2,_LAB_2c5ea62c,0xff,0xd4);
    return 1;
  }
  return 0;
}

