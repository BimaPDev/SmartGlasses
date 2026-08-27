/* FUN_2c4b4310 @ 0x2c4b4310 */

undefined4 FUN_2c4b4310(int param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = DAT_2c4b439c;
  uVar7 = param_1 + 0x3fU & 0xffffffc0;
  iVar3 = *DAT_2c4b439c;
  if (uVar7 <= *(uint *)(iVar3 + 0x1c)) {
    for (iVar6 = *(int *)(iVar3 + 0x24); iVar3 + 0x20 != iVar6; iVar6 = *(int *)(iVar6 + 4)) {
      if ((*(int *)(iVar6 + 0x10) == 0) && (uVar7 <= *(uint *)(iVar6 + 0xc))) {
        piVar4 = (int *)FUN_2c4b4980(0x14);
        if (piVar4 == (int *)0x0) {
          return 5;
        }
        piVar4[2] = *(int *)(iVar6 + 8) + uVar7;
        iVar3 = *(int *)(iVar6 + 0xc);
        piVar4[4] = 0;
        *piVar4 = iVar6;
        piVar4[3] = iVar3 - uVar7;
        piVar4[1] = *(int *)(iVar6 + 4);
        *(int **)(iVar6 + 4) = piVar4;
        if ((undefined4 *)piVar4[1] != (undefined4 *)0x0) {
          *(undefined4 *)piVar4[1] = piVar4;
        }
        uVar2 = DAT_2c4b43a0;
        iVar3 = *piVar1;
        *(uint *)(iVar6 + 0xc) = uVar7;
        *(undefined4 *)(iVar6 + 0x10) = uVar2;
        piVar1 = DAT_2c4b43a4;
        iVar5 = *(int *)(iVar3 + 0x10) + *(int *)(iVar6 + 8);
        *param_2 = iVar5;
        *param_3 = iVar5 + *piVar1;
        *(uint *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) - uVar7;
        *param_4 = iVar6;
        return 0;
      }
    }
  }
  return 2;
}

