/* FUN_10067218 @ 0x10067218 */

undefined4 FUN_10067218(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_10067240;
  pcVar1 = DAT_1006723c;
  if (*DAT_1006723c == '\0') {
    iVar3 = FUN_10065364(DAT_10067240,2,param_3,0,param_4);
    if (iVar3 == 0) {
      *(undefined2 *)(iVar2 + 0x18) = 2;
      *(undefined1 *)(iVar2 + 0x45) = 0;
      *pcVar1 = '\x01';
    }
  }
  return 0;
}

