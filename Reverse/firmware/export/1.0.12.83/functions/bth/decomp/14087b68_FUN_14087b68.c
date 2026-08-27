/* FUN_14087b68 @ 0x14087b68 */

int FUN_14087b68(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                undefined2 param_5)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  
  if (*(char *)(DAT_14087bcc + 10) == '\0') {
    return 1;
  }
  iVar2 = FUN_1407772c(0x803,10,0,param_4,param_4);
  if (iVar2 != 0) {
    puVar3 = (undefined2 *)FUN_14075458(iVar2,10);
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    puVar3[3] = (short)param_4;
    puVar3[4] = param_5;
    cVar1 = FUN_1407780c(iVar2);
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14087bd4,DAT_14087bd0);
}

