/* FUN_2c557a58 @ 0x2c557a58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c557a58(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar3 = FUN_2c48e3b8();
  if (iVar3 != 0) {
    iVar4 = FUN_2c48e424(iVar3,_LAB_2c557b44);
    piVar2 = _LAB_2c557b5c;
    if (iVar4 != 0) {
      if (*_LAB_2c557b5c == 0) {
        FUN_2c4723c4();
        *piVar2 = 1;
      }
      puVar5 = (undefined4 *)FUN_2c47245c(0,0x1c);
      puVar5[6] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      uVar1 = _LAB_2c557b48;
      *puVar5 = _LAB_2c557b48;
      *(undefined1 *)(puVar5 + 3) = 0;
      puVar5[1] = puVar5 + 3;
      puVar7 = *(undefined4 **)(param_2 + 4);
      *(undefined4 **)(param_2 + 4) = puVar5;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uVar1;
        if ((undefined4 *)puVar7[1] != puVar7 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,puVar7);
      }
      if (*piVar2 == 0) {
        FUN_2c4723c4();
        *piVar2 = 1;
      }
      puVar5 = (undefined4 *)FUN_2c47245c(0,8);
      *puVar5 = _LAB_2c557b4c;
      *(undefined1 *)(puVar5 + 1) = 0;
      iVar6 = *(int *)(param_2 + 8);
      *(undefined4 **)(param_2 + 8) = puVar5;
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar4 = FUN_2c55700c(iVar4,_LAB_2c557b50,*(int *)(param_2 + 4) + 4,0);
      if (-1 < iVar4) {
        iVar4 = FUN_2c48e424(iVar3,_LAB_2c557b54);
        if (iVar4 != 0) {
          FUN_2c556d3c(iVar4,_LAB_2c557b58,*(int *)(param_2 + 8) + 4,1);
        }
        FUN_2c48dea0(iVar3);
        return 0;
      }
    }
    FUN_2c48dea0(iVar3);
  }
  return 0xffffffff;
}

