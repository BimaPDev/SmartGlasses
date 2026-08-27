/* FUN_2c5fefc8 @ 0x2c5fefc8 */

int * FUN_2c5fefc8(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    do {
      if ((DAT_2c5ff0b4 & piVar2[6]) != 0) {
        uVar6 = (piVar2[6] & 0xfffffU) >> 4;
        break;
      }
      piVar2 = (int *)*piVar2;
      uVar6 = 0;
    } while (piVar2 != (int *)0x0);
  }
  piVar2 = (int *)lv_mem_alloc(uVar6);
  if (piVar2 != (int *)0x0) {
    FUN_2c62c3b0(piVar2,uVar6);
    *piVar2 = (int)param_1;
    piVar2[1] = param_2;
    if (param_2 == 0) {
      iVar4 = FUN_2c62a470();
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          puVar8 = (undefined4 *)lv_mem_alloc(4);
          *(undefined4 **)(iVar4 + 0xc) = puVar8;
          *puVar8 = piVar2;
          *(undefined4 *)(iVar4 + 0x28) = 1;
        }
        else {
          iVar5 = *(int *)(iVar4 + 0x28) + 1;
          *(int *)(iVar4 + 0x28) = iVar5;
          iVar5 = FUN_2c62bebc(*(int *)(iVar4 + 0xc),iVar5 * 4);
          *(int *)(iVar4 + 0xc) = iVar5;
          *(int **)(iVar5 + (*(int *)(iVar4 + 0x28) + 0x3fffffff) * 4) = piVar2;
        }
        piVar2[5] = 0;
        sVar1 = FUN_2c62a47c(0);
        *(short *)(piVar2 + 6) = sVar1 + -1;
        sVar1 = FUN_2c62a4a0(0);
        *(short *)((int)piVar2 + 0x1a) = sVar1 + -1;
        return piVar2;
      }
      FUN_2c62bea8(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(param_2 + 8);
      if (piVar7 == (int *)0x0) {
        FUN_2c606bc8(param_2);
        piVar7 = *(int **)(param_2 + 8);
      }
      if (*piVar7 == 0) {
        iVar4 = lv_mem_alloc(4);
        *piVar7 = iVar4;
        *(int **)**(undefined4 **)(param_2 + 8) = piVar2;
        *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 1;
        return piVar2;
      }
      piVar7[1] = piVar7[1] + 1;
      puVar8 = *(undefined4 **)(param_2 + 8);
      uVar3 = FUN_2c62bebc(*puVar8,puVar8[1] << 2);
      *puVar8 = uVar3;
      *(int **)(**(int **)(param_2 + 8) + ((*(int **)(param_2 + 8))[1] + 0x3fffffff) * 4) = piVar2;
    }
  }
  return piVar2;
}

