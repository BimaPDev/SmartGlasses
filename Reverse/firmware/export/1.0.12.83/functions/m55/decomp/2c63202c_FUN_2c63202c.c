/* FUN_2c63202c @ 0x2c63202c */

void FUN_2c63202c(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (iVar3 = FUN_2c6041dc(*(int *)(param_1 + 0x24),0), iVar3 != 0)) {
    iVar4 = FUN_2c6073f8();
    iVar5 = FUN_2c607440(param_1);
    if (iVar5 < iVar4) {
      iVar4 = FUN_2c6033b4(iVar3,0,0x57);
      sVar1 = *(short *)(iVar4 + 8);
      sVar2 = FUN_2c6033b4(iVar3,0,0x59);
      FUN_2c6051c4(*(undefined4 *)(param_1 + 0x24),
                   (int)(short)(*(short *)(param_1 + 0x36) * (sVar2 + sVar1)),0);
      FUN_2c607df0(*(undefined4 *)(param_1 + 0x24));
      return;
    }
  }
  return;
}

