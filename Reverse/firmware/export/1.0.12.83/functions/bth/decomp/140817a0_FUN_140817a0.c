/* FUN_140817a0 @ 0x140817a0 */

/* WARNING: Removing unreachable block (ram,0x140816c0) */
/* WARNING: Removing unreachable block (ram,0x140816c4) */

void FUN_140817a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  
  if (param_4 == 0) {
    iVar2 = (*(code *)*DAT_140817d8)();
    puVar1 = DAT_140817dc;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0xf) = 0;
      UNRECOVERED_JUMPTABLE = (code *)*puVar1;
      *(undefined1 *)(iVar2 + 0x29) = 0;
                    /* WARNING: Could not recover jumptable at 0x140817d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar2,0x30,0);
      return;
    }
  }
  else if (param_4 == 2) {
    iVar2 = (*(code *)*DAT_14081788)();
    if (iVar2 == 0) {
      return;
    }
    *(undefined1 *)(iVar2 + 0xf) = 1;
    puVar1 = DAT_1408178c;
    if (param_3 == 0xff) {
      if (*(char *)(iVar2 + 0x27) != '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_1408179c,DAT_14081794,*(undefined1 *)(iVar2 + 0xec),
                     *(char *)(iVar2 + 0x27));
      }
      iVar5 = DAT_14081790 + 0x80;
      iVar4 = DAT_14081790;
      while ((*(char *)(iVar4 + 0xc) == '\0' || (iVar3 = FUN_140db784(iVar4,param_2,6), iVar3 != 0))
            ) {
        iVar4 = iVar4 + 0x10;
        if (iVar5 == iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x44,DAT_14081798,DAT_14081794,*(undefined1 *)(iVar2 + 0xec),1,0xff);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14081798,DAT_14081794,*(undefined1 *)(iVar2 + 0xec),1,
                   *(undefined1 *)(iVar4 + 0xd));
    }
    *(undefined1 *)(iVar2 + 0x29) = 0;
                    /* WARNING: Could not recover jumptable at 0x14081700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(iVar2,0x2f,param_3);
    return;
  }
  return;
}

