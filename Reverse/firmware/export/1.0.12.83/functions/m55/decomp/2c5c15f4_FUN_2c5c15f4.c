/* FUN_2c5c15f4 @ 0x2c5c15f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c15f4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar5 + 0x48);
  iVar2 = *_LAB_2c5c16c0;
  uVar3 = bVar1 - 1;
  uVar4 = uVar3 & 0xff;
  *(char *)(iVar5 + 0x48) = (char)uVar3;
  if (uVar4 == 10) {
    if (*_LAB_2c5c16c0 == iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5c0a8c,0x158,_LAB_2c5c0a80,_LAB_2c5c0a84,_LAB_2c5c0a80);
    }
  }
  else {
    if (bVar1 - 2 < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5c16cc,0x158,_LAB_2c5c16d0,_LAB_2c5c16d4,_LAB_2c5c16d0);
    }
    if (((uVar4 == 0) && (*(int *)(iVar5 + 0x68) == 0)) && (*(int *)(iVar5 + 0x50) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5c16cc,0x3e,_LAB_2c5c16c8,_LAB_2c5c16c4);
    }
    if (*_LAB_2c5c16c0 == iVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

