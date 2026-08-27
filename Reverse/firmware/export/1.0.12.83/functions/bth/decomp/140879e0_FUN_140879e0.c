/* FUN_140879e0 @ 0x140879e0 */

int FUN_140879e0(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar2 = FUN_14085c48();
  if ((iVar2 == 0) && (iVar2 = FUN_14085ad0(param_1), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14087b24,DAT_14087b20);
  }
  if (*(char *)(iVar2 + 0x3c) == '\x01') {
    uVar1 = *(undefined2 *)(iVar2 + 0x1c);
    iVar3 = FUN_1407772c(0x804,2,0);
    if (iVar3 != 0) {
      puVar4 = (undefined2 *)FUN_14075458(iVar3,2);
      *puVar4 = uVar1;
      FUN_1407780c(iVar3);
    }
    FUN_140e5818(0x14);
  }
  iVar3 = FUN_14074b88(iVar2 + 8);
  if (((iVar3 != 0) || (iVar3 = *(int *)(iVar2 + 8), iVar3 == 0)) &&
     (iVar3 = FUN_14085da0(iVar2), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14087b1c,DAT_14087b14);
  }
  if (*(char *)(iVar3 + 0xf) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14087b2c,DAT_14087b14,*(char *)(iVar3 + 0xf));
  }
  if (1 < *(byte *)(iVar2 + 0x4b) - 3) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14087b18,DAT_14087b14);
  }
  iVar2 = FUN_140873d0(iVar2);
  if (iVar2 != 1) {
    *(undefined1 *)(iVar3 + 0xf) = 1;
    return iVar2;
  }
  if (*(char *)(iVar3 + 0xf) == '\x02') {
    FUN_14087914(*(undefined2 *)(iVar3 + 0xc),0x13);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_14087b30,DAT_14087b34,iVar3,*(undefined1 *)(iVar3 + 0x11));
}

