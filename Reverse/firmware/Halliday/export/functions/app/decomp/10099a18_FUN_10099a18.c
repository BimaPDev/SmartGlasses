/* FUN_10099a18 @ 0x10099a18 */

undefined1 FUN_10099a18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  
  puVar1 = DAT_10099a54;
  *DAT_10099a54 = 0;
  FUN_10086f50(param_1,0x1d,param_2,param_4,param_4);
  pcVar2 = (char *)*puVar1;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 == '\0') {
      return 0;
    }
    iVar3 = FUN_1011ea18(pcVar2,param_2);
    if (iVar3 != 0) {
      FUN_100998a8(param_1,*puVar1);
      return 0;
    }
  }
  return 1;
}

