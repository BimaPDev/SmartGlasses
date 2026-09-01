/* FUN_100388d4 @ 0x100388d4 */

void FUN_100388d4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined4 uVar8;
  
  piVar2 = DAT_1003899c;
  iVar4 = *DAT_10038998;
  iVar5 = 0;
  do {
    uVar8 = *(undefined4 *)(*piVar2 + iVar5 * 4 + 4);
    uVar3 = FUN_1003883c();
    FUN_10126e82(uVar8,uVar3,0);
    uVar3 = FUN_10126fb4(*(undefined4 *)(*piVar2 + iVar5 * 4 + 4),0);
    iVar5 = iVar5 + 1;
    FUN_1002e994(uVar3,1);
  } while (iVar5 != 3);
  bVar7 = 0;
  do {
    iVar5 = *piVar2;
    uVar6 = (uint)bVar7;
    if (*(byte *)(iVar5 + 0x55) <= uVar6) {
      if (*DAT_10038998 == iVar4) {
        return;
      }
      FUN_1013cdc0();
      iVar5 = extraout_r3;
    }
    uVar8 = *(undefined4 *)(iVar5 + uVar6 * 4 + 4);
    uVar3 = FUN_10038814();
    FUN_10126e82(uVar8,uVar3,0);
    iVar5 = FUN_10126fb4(*(undefined4 *)(*piVar2 + uVar6 * 4 + 4),0);
    if ((iVar5 != 0) && (bVar1 = *(byte *)(param_1 + uVar6), bVar1 != 0)) {
      FUN_1002e994(iVar5,0);
      FUN_10096730(iVar5,*piVar2 + (bVar1 - 1 & 3) * 0xc + 0x220);
    }
    bVar7 = bVar7 + 1;
  } while( true );
}

