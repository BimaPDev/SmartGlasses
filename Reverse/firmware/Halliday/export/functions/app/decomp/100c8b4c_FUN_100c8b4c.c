/* FUN_100c8b4c @ 0x100c8b4c */

int FUN_100c8b4c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  
  iVar2 = FUN_10132e28(DAT_100c8b88);
  if (iVar2 << 0xd < 0) {
    iVar2 = FUN_100c5e48(0x402,0,0,iVar2 << 0xd,in_r3);
    puVar1 = DAT_100c8b8c;
    if (iVar2 == 0) {
      if ((code *)*DAT_100c8b8c != (code *)0x0) {
        (*(code *)*DAT_100c8b8c)();
        *puVar1 = 0;
      }
      FUN_10132e56(DAT_100c8b88,0xfffbffff);
    }
  }
  else {
    iVar2 = -0x78;
  }
  return iVar2;
}

