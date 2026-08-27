/* FUN_2c5f056c @ 0x2c5f056c */

int FUN_2c5f056c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r2;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  for (uVar5 = 0; uVar2 = FUN_2c6041fc(param_1), uVar5 < uVar2; uVar5 = uVar5 + 1) {
    uVar3 = FUN_2c6041dc(param_1,uVar5,extraout_r2,uVar2,param_4);
    iVar4 = FUN_2c606b94(uVar3,0x800000);
    if (iVar4 == 0) {
      sVar1 = FUN_2c6073ec(uVar3);
      iVar6 = (int)(short)((short)iVar6 + sVar1);
    }
    else {
      iVar6 = FUN_2c6073ec(uVar3);
    }
  }
  return iVar6;
}

