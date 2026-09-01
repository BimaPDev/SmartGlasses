/* FUN_100347c4 @ 0x100347c4 */

undefined4 FUN_100347c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = DAT_10034820;
  pcVar1 = DAT_10034818;
  iVar4 = *DAT_1003481c;
  if (*DAT_10034818 == '\0') {
    DAT_10034820[1] = 0x104;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[3] = 0x104;
    *puVar2 = 0x14;
    iVar3 = DAT_10034824;
    *pcVar1 = '\x01';
    FUN_100a5b78(DAT_1003482c | (iVar3 - DAT_10034828) * 0x20 & 0xff00U,DAT_10034834,DAT_10034830,
                 0x14,0,param_2,param_3);
  }
  if (*DAT_1003481c != iVar4) {
    FUN_1013cdc0();
  }
  return 0;
}

