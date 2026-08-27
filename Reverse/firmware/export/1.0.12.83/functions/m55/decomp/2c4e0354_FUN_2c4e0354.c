/* FUN_2c4e0354 @ 0x2c4e0354 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e0354(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  uVar5 = _LAB_2c4e03fc;
  uVar4 = _LAB_2c4e03f8;
  uVar3 = _LAB_2c4e03f4;
  piVar8 = _LAB_2c4e03f0;
  uVar2 = _LAB_2c4e03e8;
  piVar1 = _LAB_2c4e03e4;
  FUN_2c4e0504(_LAB_2c4e03f4,7,0,0,_LAB_2c4e03f8,0x48,_LAB_2c4e03e8,0x1300,_LAB_2c4e03ec,
               *_LAB_2c4e03e4);
  for (iVar9 = 0; iVar9 <= *piVar1; iVar9 = iVar9 + 1) {
    iVar7 = piVar8[4];
    uVar6 = FUN_2c4e0400(piVar8[1]);
    if (*piVar8 != 0) {
      FUN_2c4e0504(uVar3,7,0,0,uVar4,0x4f,uVar2,0,uVar5,iVar9,piVar8[5],iVar7,iVar7,piVar8[2],
                   *piVar8,uVar6,piVar8[3]);
    }
    piVar8 = piVar8 + 7;
  }
  return;
}

