/* FUN_2c61bf28 @ 0x2c61bf28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61bf28(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  short sStack_18;
  short sStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c61c034;
  uVar4 = FUN_2c602400();
  iVar5 = FUN_2c602408(param_1);
  iVar6 = FUN_2c6041d4(uVar4);
  if (iVar5 == 0x2b) {
    if (*_LAB_2c61c034 == iStack_14) {
      uVar9 = *(ushort *)(iVar6 + 0x2a);
      if (*(ushort *)(iVar6 + 0x28) <= uVar9) {
        uVar9 = *(ushort *)(iVar6 + 0x28) - 1;
      }
      FUN_2c608c7c();
      iVar5 = FUN_2c6041dc(iVar6,1);
      if (iVar5 != 0) {
        if ((*(byte *)(iVar6 + 0x2c) & 0xc) == 0) {
          sVar2 = FUN_2c6033b4(iVar5,*(byte *)(iVar6 + 0x2c) & 0xc,0x14);
          sVar3 = FUN_2c607440(iVar5);
          FUN_2c6051c4(iVar5,(int)(short)((sVar2 + sVar3) * uVar9),0);
        }
        else {
          sVar2 = FUN_2c6033b4(iVar5,0,0x15);
          sVar3 = FUN_2c607404(iVar5);
          cVar1 = FUN_2c6033b4(iVar6,0,0x16);
          if (cVar1 == '\x01') {
            FUN_2c60518c(iVar5,(int)(short)((sVar2 + sVar3) * -uVar9),0);
          }
          else {
            FUN_2c60518c(iVar5,(int)(short)((sVar2 + sVar3) * uVar9),0);
          }
        }
        uVar4 = FUN_2c6041dc(iVar6,0);
        FUN_2c635e10(uVar4,uVar9,0x80);
        *(ushort *)(iVar6 + 0x2a) = uVar9;
      }
      return;
    }
  }
  else {
    if ((iVar5 == 10) && ((iVar5 = FUN_2c5ff4d8(), iVar5 == 0 || (*(char *)(iVar5 + 4) != '\x01'))))
    {
      FUN_2c6050b8(uVar4,&sStack_18);
      if ((*(byte *)(iVar6 + 0x2c) & 0xc) == 0) {
        iVar7 = FUN_2c607440(uVar4);
        iVar5 = iVar7;
        if (iVar7 < 0) {
          iVar5 = iVar7 + 1;
        }
        uVar8 = (uint)(short)(((int)sStack_16 + ((iVar5 << 0xf) >> 0x10)) / iVar7);
      }
      else {
        iVar5 = FUN_2c607404();
        cVar1 = FUN_2c6033b4(iVar6,0,0x16);
        if (cVar1 == '\x01') {
          iVar7 = iVar5;
          if (iVar5 < 0) {
            iVar7 = iVar5 + 1;
          }
          uVar8 = (uint)(short)((((iVar7 << 0xf) >> 0x10) - (int)sStack_18) / iVar5);
        }
        else {
          iVar7 = iVar5;
          if (iVar5 < 0) {
            iVar7 = iVar5 + 1;
          }
          uVar8 = (uint)(short)(((int)sStack_18 + ((iVar7 << 0xf) >> 0x10)) / iVar5);
        }
      }
      uVar8 = uVar8 & ~((int)uVar8 >> 0x1f);
      if (uVar8 == *(ushort *)(iVar6 + 0x2a)) {
        FUN_2c61be3c(iVar6,uVar8,1);
      }
      else {
        FUN_2c61be3c(iVar6,uVar8,1);
        FUN_2c602340(iVar6,0x1c,0);
      }
    }
    if (*_LAB_2c61c034 == iStack_14) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

