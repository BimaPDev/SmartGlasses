/* FUN_2c62efc8 @ 0x2c62efc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62efc8(void)

{
  char cVar1;
  undefined4 uVar2;
  int iStack_20;
  char *pcStack_1c;
  int iStack_14;
  
  iStack_14 = *_LAB_2c62f0b4;
  FUN_2c644324(&iStack_20,*_LAB_2c62f0b0,0xffffffff,0);
  if (iStack_20 != 0x20) {
    if (*_LAB_2c62f0b4 == iStack_14) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (pcStack_1c == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c62f0c0,0xe,_LAB_2c62f0b8,_LAB_2c62f0d4,_LAB_2c62f0d0);
  }
  cVar1 = *pcStack_1c;
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c62f0c0,0x16,_LAB_2c62f0b8,_LAB_2c62f0c8,*(undefined4 *)(pcStack_1c + 4));
  }
  if (cVar1 == '\x01') {
    uVar2 = func_0x2c674218(*(undefined4 *)(pcStack_1c + 4));
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c62f0c0,0x20,_LAB_2c62f0b8,_LAB_2c62f0bc,_LAB_2c62f0b8,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c62f0c0,0x25,_LAB_2c62f0b8,_LAB_2c62f0c4,_LAB_2c62f0b8,cVar1);
}

