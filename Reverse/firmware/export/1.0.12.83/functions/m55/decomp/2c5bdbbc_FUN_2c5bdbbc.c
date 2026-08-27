/* FUN_2c5bdbbc @ 0x2c5bdbbc */

int FUN_2c5bdbbc(int *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  piVar1 = DAT_2c5bdc80;
  uVar4 = param_1[1];
  uVar9 = *param_2;
  iVar8 = uVar9 - uVar4 * (uVar9 / uVar4);
  piVar2 = *(int **)(*param_1 + iVar8 * 4);
  if (piVar2 != (int *)0x0) {
    uVar6 = ((int *)*piVar2)[1];
    piVar5 = (int *)*piVar2;
    while (uVar9 != uVar6) {
      piVar7 = (int *)*piVar5;
      if ((piVar7 == (int *)0x0) ||
         (uVar6 = piVar7[1], piVar2 = piVar5, piVar5 = piVar7,
         iVar8 != uVar6 - uVar4 * (uVar6 / uVar4))) goto LAB_2c5bdbfa;
    }
    if (*piVar2 != 0) {
      return *piVar2 + 8;
    }
  }
LAB_2c5bdbfa:
  if (*DAT_2c5bdc80 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x6c);
  *puVar3 = 0;
  puVar3[1] = *param_2;
  FUN_2c674268(puVar3 + 2,0,100);
  *(undefined1 *)(puVar3 + 5) = 0;
  puVar3[3] = puVar3 + 5;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  puVar3[9] = puVar3 + 0xb;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  puVar3[0xf] = puVar3 + 0x11;
  *(undefined1 *)(puVar3 + 0x17) = 0;
  puVar3[0x15] = puVar3 + 0x17;
  iVar8 = FUN_2c5bcba8(param_1,iVar8,uVar9,puVar3,1);
  return iVar8 + 8;
}

