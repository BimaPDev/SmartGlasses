/* FUN_2c5f9aec @ 0x2c5f9aec */

bool FUN_2c5f9aec(int *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  if ((param_4 != 0) && (iVar2 = func_0x2c5f9d68(param_4), iVar2 == 0xb)) {
    iVar2 = FUN_2c5f6770(param_1);
    iVar3 = FUN_2c5f6770(param_1);
    psVar4 = (short *)FUN_2c5f944c(param_1,iVar2 + param_2,param_3 - iVar3);
    if (psVar4 != (short *)0x0) {
      sVar1 = *psVar4;
      iVar2 = *param_1;
      FUN_2c5f9384(iVar2,psVar4);
      (**(code **)(iVar2 + 8))(psVar4);
      return sVar1 != 0;
    }
  }
  return false;
}

