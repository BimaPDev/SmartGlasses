/* FUN_14041ad8 @ 0x14041ad8 */

void FUN_14041ad8(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = '\0';
  while (*param_1 != cVar1) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x1a) goto LAB_14041b14;
    cVar1 = *(char *)(DAT_14041b28 + iVar2 * 8);
  }
  (**(code **)(DAT_14041b28 + iVar2 * 8 + 4))(param_1);
  if ((code *)*DAT_14041b2c != (code *)0x0) {
    (*(code *)*DAT_14041b2c)(param_1,param_2);
  }
LAB_14041b14:
  if ((code *)*DAT_14041b30 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x14041b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_14041b30)(param_1,param_2);
    return;
  }
  return;
}

