/* FUN_10011bac @ 0x10011bac */

void FUN_10011bac(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  
  puVar2 = DAT_10011c84;
  iVar5 = *DAT_10011c5c;
  iVar8 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(param_1 + 2);
  uVar6 = (DAT_10011c60 - DAT_10011c64) * 0x20 & 0xff00;
  iVar9 = iVar8;
  FUN_100a5b78(uVar6 | 0x2180032,DAT_10011c6c,DAT_10011c68,cVar1,iVar8,param_2,param_3);
  puVar7 = (undefined1 *)*puVar2;
  iVar3 = FUN_1000bfa0(DAT_10011c70,puVar7,iVar8);
  if (iVar3 == iVar8) goto LAB_10011c14;
  FUN_100a5b78(DAT_10011c74 | uVar6,DAT_10011c6c,DAT_10011c78,iVar3,iVar9,param_2,param_3);
LAB_10011c02:
  uVar4 = 0xffffffff;
  do {
    if (*DAT_10011c5c == iVar5) {
      return;
    }
    FUN_1013cdc0(uVar4);
LAB_10011c14:
    if (cVar1 == 'q') {
      FUN_10011924(*puVar7,puVar7[1]);
    }
    else if (cVar1 == 's') {
      FUN_100119bc(*puVar7,*(undefined2 *)(puVar7 + 2),puVar7 + 4);
    }
    else {
      if (cVar1 != 'p') goto LAB_10011c02;
      FUN_100a5b78(uVar6 | 0x20c0031,DAT_10011c80,DAT_10011c7c,0x20c,iVar9,param_2,param_3);
      FUN_1001154c(*puVar2);
    }
    uVar4 = 0;
  } while( true );
}

