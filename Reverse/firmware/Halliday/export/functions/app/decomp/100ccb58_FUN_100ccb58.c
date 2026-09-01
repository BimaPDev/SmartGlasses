/* FUN_100ccb58 @ 0x100ccb58 */

undefined4 FUN_100ccb58(void)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [36];
  
  pcVar1 = (char *)FUN_100cc7d4();
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\0') {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = auStack_38;
      FUN_10119c46(puVar3,4);
    }
    FUN_100c2210(auStack_34,0x24,DAT_100ccbb8,pcVar1 + 1,puVar3);
    iVar2 = FUN_10132898(auStack_34);
    if (iVar2 != 0) {
      FUN_100a5b78(DAT_100ccbc8 | (DAT_100ccbc0 - DAT_100ccbbc) * 0x20 & 0xff00U,DAT_100ccbcc,
                   DAT_100ccbc4,iVar2);
    }
    FUN_101347ee(pcVar1);
  }
  return 0;
}

