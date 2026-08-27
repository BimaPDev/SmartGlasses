/* FUN_14077a18 @ 0x14077a18 */

undefined4 FUN_14077a18(char *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (char *)0x0) || (param_2 < 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_14077a80,DAT_14077a78,param_1,param_2);
  }
  if (*param_1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14077a7c,DAT_14077a78);
  }
  iVar1 = FUN_1407772c(*(undefined2 *)(param_1 + 1),param_2 - 4 & 0xff);
  if (iVar1 != 0) {
    FUN_14075468(iVar1,param_1 + 4,param_2 - 4 & 0xffff);
    uVar2 = FUN_1407780c(iVar1);
    return uVar2;
  }
  return 1;
}

