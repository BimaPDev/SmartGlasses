/* FUN_1401cf64 @ 0x1401cf64 */

void FUN_1401cf64(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 != 0) {
    uVar9 = 0;
    bVar1 = *(byte *)(param_1 + 6);
    piVar8 = (int *)(param_2 + 0xa0);
    piVar10 = (int *)(param_1 + 0xa0);
    do {
      if (bVar1 != 0) {
        uVar12 = 0;
        bVar3 = *(byte *)(param_1 + 5);
        piVar6 = piVar8;
        piVar7 = piVar10;
        do {
          if (bVar3 != 0) {
            uVar5 = 0;
            piVar4 = piVar6;
            piVar11 = piVar7;
            do {
              piVar4 = piVar4 + 1;
              uVar5 = uVar5 + 1;
              piVar11 = piVar11 + 1;
              *piVar11 = *piVar4 / 2;
            } while (uVar5 != bVar3);
          }
          uVar12 = uVar12 + 1;
          piVar6 = piVar6 + 8;
          piVar7 = piVar7 + 8;
        } while (uVar12 != bVar1);
      }
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 0x10;
      piVar10 = piVar10 + 0x10;
    } while (uVar9 != bVar2);
  }
  return;
}

