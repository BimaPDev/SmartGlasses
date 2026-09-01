/* FUN_1008964c @ 0x1008964c */

undefined4 FUN_1008964c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1012691c(param_1,0,1,param_4,param_4);
  iVar2 = FUN_1012691c(param_1,0,4);
  if ((iVar1 == DAT_1008967c) || (iVar2 == DAT_1008967c)) {
    FUN_101256b2(param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

