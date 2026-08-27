/* FUN_2c49141c @ 0x2c49141c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49141c(uint param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  
  puVar3 = _LAB_2c491500;
  puVar2 = _LAB_2c4914d4;
  *_LAB_2c491500 = 0;
  pbVar4 = _LAB_2c491504;
  uVar10 = param_1 - 1 & 0xff;
  uVar6 = *puVar2;
  *_LAB_2c491504 = 0xff;
  iVar7 = FUN_2c485890(uVar6);
  puVar5 = _LAB_2c491508;
  while( true ) {
    iVar8 = FUN_2c4858a8(*puVar2);
    if (iVar7 == iVar8) {
      return;
    }
    pbVar9 = *(byte **)(iVar7 + 4);
    if (*pbVar9 == param_1) break;
    iVar7 = FUN_2c4858c0(iVar7);
  }
  bVar1 = pbVar9[8];
  *puVar3 = *(undefined4 *)(pbVar9 + 4);
  iVar8 = _LAB_2c4914dc;
  iVar7 = _LAB_2c4914d8;
  *puVar5 = (char)param_1;
  *pbVar4 = bVar1;
  if (uVar10 < 6) {
    uVar10 = (uint)*(byte *)(iVar7 + uVar10);
    if (uVar10 < 5) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x18b,_LAB_2c4914e8,_LAB_2c4914e4,_LAB_2c4914e0,*(undefined4 *)(iVar8 + uVar10 * 4));
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x111,_LAB_2c4914e8,_LAB_2c4914e4,_LAB_2c4914f8,_LAB_2c4914f4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xff,_LAB_2c4914e8,_LAB_2c4914e4,_LAB_2c4914f0,_LAB_2c4914ec,param_1);
}

