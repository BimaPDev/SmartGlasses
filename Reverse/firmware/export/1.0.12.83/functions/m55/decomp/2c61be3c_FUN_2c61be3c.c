/* FUN_2c61be3c @ 0x2c61be3c */

void FUN_2c61be3c(int param_1,uint param_2,undefined4 param_3)

{
  short sVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(ushort *)(param_1 + 0x28) <= param_2) {
    param_2 = *(ushort *)(param_1 + 0x28) - 1;
  }
  FUN_2c608c7c();
  iVar5 = FUN_2c6041dc(param_1,1);
  if (iVar5 != 0) {
    sVar1 = (short)param_2;
    if ((*(byte *)(param_1 + 0x2c) & 0xc) == 0) {
      sVar3 = FUN_2c6033b4(iVar5,*(byte *)(param_1 + 0x2c) & 0xc,0x14);
      sVar4 = FUN_2c607440(iVar5);
      FUN_2c6051c4(iVar5,(int)(short)((sVar3 + sVar4) * sVar1),param_3);
    }
    else {
      sVar3 = FUN_2c6033b4(iVar5,0,0x15);
      sVar4 = FUN_2c607404(iVar5);
      cVar2 = FUN_2c6033b4(param_1,0,0x16);
      if (cVar2 == '\x01') {
        FUN_2c60518c(iVar5,(int)(short)((sVar3 + sVar4) * -sVar1),param_3);
      }
      else {
        FUN_2c60518c(iVar5,(int)(short)((sVar3 + sVar4) * sVar1),param_3);
      }
    }
    uVar6 = FUN_2c6041dc(param_1,0);
    FUN_2c635e10(uVar6,param_2 & 0xffff,0x80);
    *(short *)(param_1 + 0x2a) = sVar1;
  }
  return;
}

