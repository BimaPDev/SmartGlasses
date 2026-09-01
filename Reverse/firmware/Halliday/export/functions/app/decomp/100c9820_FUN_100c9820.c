/* FUN_100c9820 @ 0x100c9820 */

undefined4 FUN_100c9820(undefined4 param_1,undefined1 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  pcVar1 = DAT_100c9888;
  if (*DAT_100c9888 == '\0') {
    iVar2 = FUN_100c5d4c(0xfc8b,5);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_100c1fe4(iVar2 + 8,5);
      *(undefined1 *)(puVar4 + 1) = param_2;
      *puVar4 = param_1;
      uVar3 = FUN_100c5e48(0xfc8b,iVar2,0);
      return uVar3;
    }
    FUN_10119dc2(DAT_100c988c);
    uVar3 = 0xffffff97;
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      if ((code *)*DAT_100c9890 != (code *)0x0) {
        (*(code *)*DAT_100c9890)(0xffffff97);
        uVar3 = 0xffffff97;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

