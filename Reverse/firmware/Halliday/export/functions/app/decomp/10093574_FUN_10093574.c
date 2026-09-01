/* FUN_10093574 @ 0x10093574 */

undefined1 FUN_10093574(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  int iVar4;
  int local_14;
  
  puVar2 = DAT_100935a0;
  iVar1 = DAT_1009359c;
  local_14 = 0;
  iVar4 = param_1;
  do {
    iVar3 = (*(code *)*puVar2)(DAT_1009359c,&local_14,param_3,(code *)*puVar2,iVar4);
    if (iVar3 == param_1) {
      return 1;
    }
    param_3 = extraout_r2;
  } while (*(char *)(iVar1 + local_14) != '\0');
  return 0;
}

