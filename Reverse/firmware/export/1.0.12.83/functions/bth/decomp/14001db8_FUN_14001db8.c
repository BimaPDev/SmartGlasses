/* FUN_14001db8 @ 0x14001db8 */

uint FUN_14001db8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_14001e50;
  iVar1 = DAT_14001e4c;
  iVar5 = DAT_14001e48 + param_1 * 8;
  do {
    while( true ) {
      do {
        FUN_1400177c(param_1);
        FUN_140016dc(param_1,5,0,1,param_4);
        FUN_14001738(param_1,1);
        uVar3 = FUN_14001660(param_1);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
      } while (param_2 == 0);
      if ((*(char *)(iVar1 + param_1) != '\0') && (iVar4 = FUN_14001a94(param_1), iVar4 != 0))
      goto LAB_14001e16;
      if (*(char *)(iVar2 + param_1) == '\0') break;
      iVar4 = FUN_140094ec(iVar5,2);
      if (iVar4 != 0) goto LAB_14001e16;
    }
    iVar4 = FUN_140094d4();
  } while (iVar4 == 0);
LAB_14001e16:
  FUN_1400177c(param_1);
  FUN_140016a8(param_1,0x75,0);
  FUN_14002db4(0x28);
  return uVar3 & 1;
}

