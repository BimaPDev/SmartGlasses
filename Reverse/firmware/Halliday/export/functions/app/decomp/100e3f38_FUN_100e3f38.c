/* FUN_100e3f38 @ 0x100e3f38 */

uint FUN_100e3f38(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  piVar4 = (int *)FUN_10138392();
  iVar3 = DAT_100e3f84;
  iVar6 = 0;
  iVar8 = *piVar4;
  *param_2 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + 4);
    uVar5 = (uint)*(byte *)(iVar8 + (uint)bVar1);
    bVar2 = *(byte *)(uVar5 + iVar3);
    uVar7 = bVar2 & 4;
    if ((bVar2 & 4) == 0) break;
    *param_2 = *param_2 * 10 + uVar5 + -0x30;
    iVar6 = iVar6 + 1;
    *(byte *)(param_1 + 4) = bVar1 + 1;
  }
  if (iVar6 == 0) {
    uVar7 = 0xffffffc3;
  }
  else {
    FUN_10138382(param_1);
  }
  return uVar7;
}

