/* FUN_1001016c @ 0x1001016c */

void FUN_1001016c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r3;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  iVar3 = *DAT_100101a4;
  uVar4 = param_2 - 1;
  if (uVar4 < 0x100) goto LAB_10010190;
  do {
    uVar1 = 0;
    while( true ) {
      if (*DAT_100101a4 == iVar3) {
        return;
      }
      uVar5 = FUN_1013cdc0(uVar1);
      uVar4 = extraout_r3;
LAB_10010190:
      iVar2 = FUN_100b63f0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,uVar4,param_1);
      if (param_2 == iVar2) break;
      uVar1 = 5;
    }
  } while( true );
}

