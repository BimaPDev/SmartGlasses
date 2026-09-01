/* FUN_10121ab6 @ 0x10121ab6 */

void FUN_10121ab6(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  iVar5 = iVar3;
  puVar7 = (undefined2 *)(iVar6 + 0x1db6);
  iVar4 = iVar3;
  do {
    do {
      if (*(ushort *)(iVar6 + (iVar5 + 0x76c) * 4 + 6) <
          (ushort)((undefined2 *)(iVar6 + 0x1db6))[iVar3 * 2]) {
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x40);
    iVar3 = iVar6 + (iVar5 + 0x76c) * 4;
    if (*(short *)(iVar3 + 6) != 0) {
      uVar2 = puVar7[-1];
      uVar1 = *puVar7;
      *(undefined4 *)(puVar7 + -1) = *(undefined4 *)(iVar3 + 4);
      *(undefined2 *)(iVar6 + (iVar5 + 0x76d) * 4) = uVar2;
      *(undefined2 *)(iVar6 + (iVar5 + 0x76d) * 4 + 2) = uVar1;
    }
    iVar3 = iVar4 + 1;
    puVar7 = puVar7 + 2;
    iVar5 = iVar3;
    iVar4 = iVar3;
  } while (iVar3 != 0x40);
  return;
}

