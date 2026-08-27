/* FUN_2c027d30 @ 0x2c027d30 */

void FUN_2c027d30(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 6);
    piVar9 = (int *)(param_2 + 0xa0);
    piVar11 = (int *)(param_1 + 0xa0);
    uVar10 = 0;
    do {
      if (bVar1 != 0) {
        bVar3 = *(byte *)(param_1 + 5);
        uVar13 = 0;
        piVar7 = piVar9;
        piVar8 = piVar11;
        do {
          if (bVar3 != 0) {
            uVar5 = 0;
            piVar4 = piVar8;
            piVar12 = piVar7;
            do {
              piVar12 = piVar12 + 1;
              iVar6 = *piVar12;
              uVar5 = uVar5 + 1;
              piVar4 = piVar4 + 1;
              if (iVar6 < 0) {
                iVar6 = iVar6 + 1;
              }
              *piVar4 = iVar6 >> 1;
            } while (uVar5 != bVar3);
          }
          uVar13 = uVar13 + 1;
          piVar7 = piVar7 + 8;
          piVar8 = piVar8 + 8;
        } while (uVar13 != bVar1);
      }
      uVar10 = uVar10 + 1;
      piVar9 = piVar9 + 0x10;
      piVar11 = piVar11 + 0x10;
    } while (uVar10 != bVar2);
  }
  return;
}

