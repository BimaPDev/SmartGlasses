/* FUN_10052ce4 @ 0x10052ce4 */

int FUN_10052ce4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_10052d5c;
  iVar3 = *DAT_10052d58;
  if (*(char *)(DAT_10052d5c + 0x8c) == '\0') goto LAB_10052d4a;
  iVar2 = FUN_10113cfc(DAT_10052d5c + 0x78,param_2,100,0,param_1,iVar3,param_3);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined2 *)(iVar1 + 0x28) = 0;
    FUN_1011ea48(iVar1 + 0xc,0,0x14);
    FUN_100528bc();
    FUN_10052804();
    FUN_100a5b78((DAT_10052d60 - DAT_10052d64) * 0x20 & 0xff00U | 0x1900031,DAT_10052d6c,
                 DAT_10052d68);
  }
  while( true ) {
    if (*DAT_10052d58 == iVar3) break;
    FUN_1013cdc0();
LAB_10052d4a:
    iVar2 = -0x13;
  }
  return iVar2;
}

