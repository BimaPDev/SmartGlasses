/* FUN_2c4c0064 @ 0x2c4c0064 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c0064(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  code *pcVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint auStack_30 [4];
  int *piVar5;
  
  auStack_30[3] = *_LAB_2c4c0138;
  uVar2 = func_0x2c4b74cc(auStack_30,3,param_3,0);
  iVar1 = _LAB_2c4c0154;
  if (uVar2 < 3) {
    puVar3 = auStack_30 + uVar2;
    piVar4 = (int *)(_LAB_2c4c013c + uVar2 * 4);
    do {
      piVar5 = piVar4 + 1;
      uVar2 = 0;
      if (*piVar4 != 0) {
        uVar2 = *(uint *)(*piVar4 + 0x44);
      }
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      piVar4 = piVar5;
    } while (piVar5 != (int *)(_LAB_2c4c013c + 0xc));
  }
  puVar3 = auStack_30;
  iVar8 = 0;
  iVar7 = _LAB_2c4c0144;
  pbVar9 = _LAB_2c4c0140;
  piVar4 = _LAB_2c4c0150;
  while( true ) {
    if (iVar7 != 0) {
      uVar2 = *puVar3;
      *(uint *)(iVar7 + 0x4c) = uVar2;
      while (uVar2 != 0) {
        uVar2 = FUN_2c49ad00();
        if (*pbVar9 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(_LAB_2c4c014c,_LAB_2c4c0148,iVar8,uVar2,(uint)*pbVar9);
        }
        if (iVar8 == 0) {
          iVar7 = 0;
        }
        else if (iVar8 == 2) {
          iVar7 = 0x38;
        }
        else {
          iVar7 = 0x18;
        }
        pcVar6 = *(code **)(iVar1 + (iVar7 + uVar2 & 0xff) * 4);
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)();
        }
        uVar2 = *puVar3 & ~(1 << (uVar2 & 0xff));
        *puVar3 = uVar2;
      }
    }
    iVar8 = iVar8 + 1;
    puVar3 = puVar3 + 1;
    pbVar9 = pbVar9 + 1;
    if (iVar8 == 3) break;
    iVar7 = *piVar4;
    piVar4 = piVar4 + 1;
  }
  if (*_LAB_2c4c0138 != auStack_30[3]) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

