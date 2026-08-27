/* FUN_2c483c62 @ 0x2c483c62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c483c62(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_2c471604();
  iVar4 = _LAB_2c483888;
  if (*(char *)(iVar3 + 0x3c) == '\x01') {
    FUN_2c483704();
    FUN_2c471604(1);
    if (iVar3 + 6 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x175,LAB_2c483c40,DAT_2c483c3c,DAT_2c483c50,DAT_2c483c34);
    }
    if (*DAT_2c483c30 != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x195,LAB_2c483c40,DAT_2c483c3c,DAT_2c483c38,DAT_2c483c34);
    }
    iVar4 = FUN_2c4833b4(iVar3 + 6);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x18c,LAB_2c483c40,DAT_2c483c3c,DAT_2c483c48,DAT_2c483c34);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,400,LAB_2c483c40,DAT_2c483c3c,DAT_2c483c4c,DAT_2c483c34);
  }
  func_0x2c4855a8();
  FUN_2c674268(iVar4,0,0x2d);
  puVar2 = _LAB_2c483890;
  puVar1 = _LAB_2c48388c;
  *(undefined4 *)(iVar4 + 0x55) = 0;
  *(undefined4 *)(iVar4 + 0x59) = 0;
  *(undefined4 *)(iVar4 + 0x5d) = 0;
  *(undefined4 *)(iVar4 + 0x61) = 0;
  *(undefined4 *)(iVar4 + 0x65) = 0;
  *(undefined4 *)(iVar4 + 0x2d) = 0;
  *(undefined4 *)(iVar4 + 0x31) = 0;
  *(undefined4 *)(iVar4 + 0x35) = 0;
  *(undefined4 *)(iVar4 + 0x39) = 0;
  *(undefined4 *)(iVar4 + 0x3d) = 0;
  *(undefined4 *)(iVar4 + 0x41) = 0;
  *(undefined4 *)(iVar4 + 0x45) = 0;
  *(undefined4 *)(iVar4 + 0x49) = 0;
  *(undefined4 *)(iVar4 + 0x4d) = 0;
  *(undefined4 *)(iVar4 + 0x51) = 0;
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  *puVar2 = 0;
  if (*_LAB_2c485614 == 0) {
    return;
  }
  iVar4 = FUN_2c644080();
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xfd,_LAB_2c485620,_LAB_2c48561c,_LAB_2c485618);
}

