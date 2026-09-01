/* FUN_100cc894 @ 0x100cc894 */

void FUN_100cc894(char *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [36];
  
  if (*param_1 == '\0') {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = auStack_38;
    FUN_10119c46(puVar2,4);
  }
  FUN_100c2210(auStack_34,0x24,DAT_100cc8f0,param_1 + 1,puVar2);
  iVar1 = FUN_10131934(auStack_34,param_1 + 8,4);
  if (iVar1 != 0) {
    FUN_100a5b78((DAT_100cc8f8 - DAT_100cc8f4) * 0x20 & 0xff00U | 0x1180011,DAT_100cc900,
                 DAT_100cc8fc,iVar1);
  }
  return;
}

