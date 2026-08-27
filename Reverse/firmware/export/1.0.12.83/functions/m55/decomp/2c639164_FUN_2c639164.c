/* FUN_2c639164 @ 0x2c639164 */

void FUN_2c639164(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  
  iVar5 = FUN_2c602110(DAT_2c63922c);
  if (iVar5 == 1) {
    iVar5 = FUN_2c602408(param_2);
    iVar6 = FUN_2c602400(param_2);
    if (iVar5 == 0x13) {
      iVar7 = FUN_2c600ac0(iVar6,0x20000);
      psVar8 = (short *)FUN_2c602410(param_2);
      iVar5 = (int)*psVar8;
      if (*psVar8 < iVar7) {
        iVar5 = iVar7;
      }
      *psVar8 = (short)iVar5;
      sVar1 = FUN_2c6033b4(iVar6,0,0x12);
      sVar2 = FUN_2c6033b4(iVar6,0,0x13);
      sVar3 = FUN_2c6033b4(iVar6,0,0x10);
      sVar4 = FUN_2c6033b4(iVar6,0,0x11);
      iVar5 = (int)sVar1;
      if ((int)sVar2 <= (int)sVar1) {
        iVar5 = (int)sVar2;
      }
      if (sVar3 <= iVar5) {
        iVar5 = (int)sVar3;
      }
      iVar6 = (int)sVar4;
      if (iVar5 <= sVar4) {
        iVar6 = iVar5;
      }
      if (iVar6 < 0) {
        iVar5 = -iVar6;
        if (-iVar6 < (int)*psVar8) {
          iVar5 = (int)*psVar8;
        }
        *psVar8 = (short)iVar5;
      }
    }
    else {
      if ((iVar5 == 1) || (iVar5 == 8)) {
        FUN_2c6078f0(iVar6,iVar6 + 0x34);
        return;
      }
      if (iVar5 == 0x15) {
        FUN_2c6389d8(param_2);
        return;
      }
    }
  }
  return;
}

