/* FUN_2c61c038 @ 0x2c61c038 */

void FUN_2c61c038(void)

{
  short sVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = FUN_2c602400();
  iVar7 = FUN_2c6041d4();
  uVar8 = FUN_2c635f80(uVar6);
  if (*(ushort *)(iVar7 + 0x28) <= uVar8) {
    uVar8 = *(ushort *)(iVar7 + 0x28) - 1;
  }
  FUN_2c608c7c();
  iVar5 = FUN_2c6041dc(iVar7,1);
  if (iVar5 != 0) {
    sVar1 = (short)uVar8;
    if ((*(byte *)(iVar7 + 0x2c) & 0xc) == 0) {
      sVar3 = FUN_2c6033b4(iVar5,*(byte *)(iVar7 + 0x2c) & 0xc,0x14);
      sVar4 = FUN_2c607440(iVar5);
      FUN_2c6051c4(iVar5,(int)(short)((sVar3 + sVar4) * sVar1),1);
    }
    else {
      sVar3 = FUN_2c6033b4(iVar5,0,0x15);
      sVar4 = FUN_2c607404(iVar5);
      cVar2 = FUN_2c6033b4(iVar7,0,0x16);
      if (cVar2 == '\x01') {
        FUN_2c60518c(iVar5,(int)(short)((sVar3 + sVar4) * -sVar1),1);
      }
      else {
        FUN_2c60518c(iVar5,(int)(short)((sVar3 + sVar4) * sVar1),1);
      }
    }
    uVar6 = FUN_2c6041dc(iVar7,0);
    FUN_2c635e10(uVar6,uVar8 & 0xffff,0x80);
    *(short *)(iVar7 + 0x2a) = sVar1;
  }
  return;
}

