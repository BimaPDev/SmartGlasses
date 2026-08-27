/* FUN_2c61bef4 @ 0x2c61bef4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61bef4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  iVar5 = FUN_2c602110(_LAB_2c61bf24);
  if (iVar5 == 1) {
    iVar5 = FUN_2c602408(param_2);
    iVar6 = FUN_2c602400(param_2);
    if (iVar5 == 0x29) {
      uVar7 = *(ushort *)(iVar6 + 0x2a);
      if (*(ushort *)(iVar6 + 0x28) <= uVar7) {
        uVar7 = *(ushort *)(iVar6 + 0x28) - 1;
      }
      FUN_2c608c7c();
      iVar5 = FUN_2c6041dc(iVar6,1);
      if (iVar5 != 0) {
        if ((*(byte *)(iVar6 + 0x2c) & 0xc) == 0) {
          sVar2 = FUN_2c6033b4(iVar5,*(byte *)(iVar6 + 0x2c) & 0xc,0x14);
          sVar3 = FUN_2c607440(iVar5);
          FUN_2c6051c4(iVar5,(int)(short)((sVar2 + sVar3) * uVar7),0);
        }
        else {
          sVar2 = FUN_2c6033b4(iVar5,0,0x15);
          sVar3 = FUN_2c607404(iVar5);
          cVar1 = FUN_2c6033b4(iVar6,0,0x16);
          if (cVar1 == '\x01') {
            FUN_2c60518c(iVar5,(int)(short)((sVar2 + sVar3) * -uVar7),0);
          }
          else {
            FUN_2c60518c(iVar5,(int)(short)((sVar2 + sVar3) * uVar7),0);
          }
        }
        uVar4 = FUN_2c6041dc(iVar6,0);
        FUN_2c635e10(uVar4,uVar7,0x80);
        *(ushort *)(iVar6 + 0x2a) = uVar7;
      }
      return;
    }
  }
  return;
}

