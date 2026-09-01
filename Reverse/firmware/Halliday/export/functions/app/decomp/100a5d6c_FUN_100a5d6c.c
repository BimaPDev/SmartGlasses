/* FUN_100a5d6c @ 0x100a5d6c */

undefined4 FUN_100a5d6c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_110 [256];
  
  piVar1 = DAT_100a5da0;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 == 1) {
      uVar3 = 3;
    }
    else {
      uVar3 = 1;
    }
    FUN_100a61d0();
    uVar2 = DAT_100a5da4;
    *piVar1 = param_2;
    uVar3 = FUN_100a61f0(uVar3,uVar2,auStack_110,0x100);
    *piVar1 = 0;
  }
  return uVar3;
}

