/* FUN_10048980 @ 0x10048980 */

void FUN_10048980(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char local_18;
  char local_17;
  int local_14;
  
  puVar1 = PTR_DAT_10048a34;
  local_14 = *(int *)PTR_DAT_10048a30;
  iVar2 = (**(code **)PTR_DAT_10048a34)();
  uVar3 = ((int)PTR_DAT_10048a38 - (int)PTR_DAT_10048a3c) * 0x20 & 0xff00;
  if (iVar2 == 6) {
    uVar4 = 1;
  }
  else if (iVar2 == 2) {
    uVar4 = 3;
  }
  else {
    (**(code **)(puVar1 + 0x20))(&local_1c);
    if (((((local_1c != '\0' || local_1b != '\0') || local_1a != '\0') || local_19 != '\0') ||
        local_18 != '\0') || local_17 != '\0') goto LAB_10048a0e;
    FUN_100a5b78(uVar3 | 0x2f40031,DAT_10048a44,DAT_10048a40);
    uVar4 = 2;
  }
  while( true ) {
    FUN_100a5b78(DAT_10048a48 | uVar3,DAT_10048a44,DAT_10048a4c,iVar2,uVar4);
    FUN_10048890(uVar4);
    if (*(int *)PTR_DAT_10048a30 == local_14) break;
    FUN_1013cdc0();
LAB_10048a0e:
    FUN_100a5b78(uVar3 | 0x2f80031,DAT_10048a44,DAT_10048a50,&local_1c);
    uVar4 = 0;
  }
  return;
}

