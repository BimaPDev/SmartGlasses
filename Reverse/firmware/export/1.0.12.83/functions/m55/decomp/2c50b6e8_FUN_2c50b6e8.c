/* FUN_2c50b6e8 @ 0x2c50b6e8 */

int FUN_2c50b6e8(int *param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  piVar1 = DAT_2c50b770;
  uVar7 = param_1[1];
  uVar9 = (uint)*param_2;
  iVar8 = uVar9 - uVar7 * (uVar9 / uVar7);
  piVar3 = *(int **)(*param_1 + iVar8 * 4);
  if (piVar3 != (int *)0x0) {
    uVar4 = (uint)*(byte *)((int *)*piVar3 + 1);
    piVar5 = (int *)*piVar3;
    while (uVar9 != uVar4) {
      piVar6 = (int *)*piVar5;
      if ((piVar6 == (int *)0x0) ||
         (uVar4 = (uint)*(byte *)(piVar6 + 1), piVar3 = piVar5, piVar5 = piVar6,
         iVar8 != uVar4 - uVar7 * (uVar4 / uVar7))) goto LAB_2c50b726;
    }
    if (*piVar3 != 0) {
      return *piVar3 + 8;
    }
  }
LAB_2c50b726:
  if (*DAT_2c50b770 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0xc);
  *puVar2 = 0;
  puVar2[2] = 0;
  *(byte *)(puVar2 + 1) = *param_2;
  iVar8 = FUN_2c50b314(param_1,iVar8,uVar9,puVar2,1);
  return iVar8 + 8;
}

