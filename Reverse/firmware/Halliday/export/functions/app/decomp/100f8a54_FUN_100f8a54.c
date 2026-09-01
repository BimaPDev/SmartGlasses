/* FUN_100f8a54 @ 0x100f8a54 */

void FUN_100f8a54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x60);
  iVar8 = puVar6[2];
  if (*(code **)(puVar6[3] + 0x44) != (code *)0x0) {
    (**(code **)(puVar6[3] + 0x44))();
  }
  piVar2 = *(int **)(param_1 + 0x9c);
  if (piVar2 != (int *)0x0) {
    uVar4 = piVar2[1];
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
      if (iVar3 != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 4) + 100);
        pcVar5 = *(code **)(iVar1 + 8);
        (*pcVar5)(iVar1,iVar3,iVar3,pcVar5,param_4);
        piVar2 = *(int **)(param_1 + 0x9c);
        uVar4 = piVar2[1];
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      piVar2[1] = uVar4 & 0xfffffffe;
    }
    if (-1 < *(int *)*puVar6 << 0x16) {
      piVar7 = (int *)*piVar2;
      if (piVar7 != (int *)0x0) {
        iVar3 = *piVar7;
        FUN_100f89e4(piVar7);
        (**(code **)(iVar3 + 8))(iVar3,piVar7);
        piVar2 = *(int **)(param_1 + 0x9c);
      }
      *piVar2 = 0;
    }
    (**(code **)(iVar8 + 8))(iVar8);
    *(undefined4 *)(param_1 + 0x9c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

