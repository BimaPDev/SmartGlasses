/* FUN_1004392c @ 0x1004392c */

int FUN_1004392c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_10043984;
  iVar1 = FUN_100438f8();
  if (iVar1 == 0) goto LAB_1004394c;
  if (param_1 != 0x8c) goto LAB_1004395a;
  uVar2 = 0x73;
LAB_10043948:
  do {
    FUN_100a1b0c(uVar2);
LAB_1004394c:
    while( true ) {
      if (*DAT_10043984 == iVar3) {
        return iVar1;
      }
      FUN_1013cdc0();
LAB_1004395a:
      if (param_1 == 0x8b) {
        uVar2 = 0x72;
        goto LAB_10043948;
      }
      if (param_1 == 0x8d) {
        uVar2 = 0x71;
        goto LAB_10043948;
      }
      if (param_1 == 0x8e) {
        uVar2 = 0x75;
        goto LAB_10043948;
      }
      if (param_1 == 0x8f) break;
      iVar1 = 0;
    }
    uVar2 = 0x74;
  } while( true );
}

