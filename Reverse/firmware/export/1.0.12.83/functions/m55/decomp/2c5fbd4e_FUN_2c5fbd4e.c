/* FUN_2c5fbd4e @ 0x2c5fbd4e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5fbd4e(void)

{
  char cVar1;
  int in_r3;
  int iVar2;
  
  iVar2 = *(int *)(in_r3 + 0xe54);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x56f,_LAB_2c5fbdc8,_LAB_2c5fbdc4,_LAB_2c5fbdcc,_LAB_2c5fbdbc);
  }
  cVar1 = *_LAB_2c5fbdb8;
  *(undefined4 *)(in_r3 + 0xe54) = *(undefined4 *)(iVar2 + 0x30);
  if (cVar1 == '\0') {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x573,_LAB_2c5fbdc8,_LAB_2c5fbdc4,_LAB_2c5fbdc0,_LAB_2c5fbdbc,iVar2);
}

