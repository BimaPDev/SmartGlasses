/* FUN_10072af0 @ 0x10072af0 */

undefined4 FUN_10072af0(int *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (((*param_1 == 0) || (uVar3 = param_3 + param_2, (uint)param_1[7] < uVar3)) ||
     (((param_2 | param_3) & 0xfff) != 0)) {
    FUN_100a5b78(DAT_10072b70 | (DAT_10072b6c - DAT_10072b68) * 0x20 & 0xff00U,DAT_10072b78,
                 DAT_10072b74,*param_1,param_2,param_3,param_3);
    uVar1 = 0xffffffea;
  }
  else {
    while( true ) {
      iVar2 = uVar3 - param_3;
      uVar1 = 0;
      if ((int)param_3 < 1) break;
      uVar4 = FUN_100729f0(param_1,iVar2,0x1000);
      if ((int)uVar4 == 0) {
        FUN_1011f890(*param_1,(int)((ulonglong)uVar4 >> 0x20),param_1[6] + iVar2,0,0x1000,param_2);
      }
      param_3 = param_3 - 0x1000;
    }
  }
  return uVar1;
}

