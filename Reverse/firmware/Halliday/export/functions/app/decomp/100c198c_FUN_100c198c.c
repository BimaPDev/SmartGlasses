/* FUN_100c198c @ 0x100c198c */

void FUN_100c198c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 extraout_r2;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  cVar1 = *(char *)((int)param_1 + 5);
  if (cVar1 != '\0') {
    FUN_10119dc2(DAT_100c19dc,DAT_100c19d8,DAT_100c19d4,0x5c,param_1,param_2);
    uVar3 = FUN_1011a1f0(DAT_100c19d4,0x5c,param_3,cVar1);
    param_3 = extraout_r2;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    FUN_10119dc2(DAT_100c19dc,DAT_100c19e0,DAT_100c19d4,0x5d,uVar3);
    FUN_1011a1f0(DAT_100c19d4,0x5d,param_3,iVar2);
  }
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[2] = param_1[4];
  return;
}

