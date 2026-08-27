/* FUN_1406b660 @ 0x1406b660 */

void FUN_1406b660(undefined2 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  char cVar10;
  int iVar11;
  
  iVar8 = DAT_1406b710;
  uVar1 = param_1[3];
  uVar7 = (uint)*(byte *)((int)param_1 + 5);
  cVar10 = *(char *)(param_1 + 2);
  if ((uVar1 == 0) || (uVar2 = param_1[4], uVar2 < uVar1)) {
    uVar6 = 0x40;
  }
  else {
    if (uVar7 < 2) {
      iVar11 = *(int *)(DAT_1406b710 + (uVar7 + 0x22) * 4);
      if (iVar11 != 0) {
        iVar4 = FUN_14066108(cVar10,param_2,uVar7,param_2);
        if ((iVar4 == 0) || (*(char *)(iVar4 + 9) != '\0')) {
          uVar6 = 0x42;
          uVar7 = (uint)*(byte *)((int)param_1 + 5);
          cVar10 = *(char *)(param_1 + 2);
        }
        else {
          iVar8 = *(int *)(iVar8 + (uVar7 + 0x22) * 4);
          bVar3 = *(byte *)(iVar8 + 0x4c);
          if (bVar3 != 0) {
            puVar9 = *(ushort **)(iVar8 + 0x48);
            puVar5 = puVar9 + (short)(bVar3 - 1 & 0xff) * 3 + 3;
            do {
              if (((*puVar9 != 0) && (*puVar9 <= uVar2)) && (uVar1 <= puVar9[1])) {
                if ((char)puVar9[2] == cVar10) {
                  uVar6 = 0;
                  *puVar9 = 0;
                  *(char *)(iVar11 + 0x4d) = *(char *)(iVar11 + 0x4d) + -1;
                  uVar7 = (uint)*(byte *)((int)param_1 + 5);
                  cVar10 = *(char *)(param_1 + 2);
                  goto LAB_1406b6d6;
                }
                break;
              }
              puVar9 = puVar9 + 3;
            } while (puVar9 != puVar5);
          }
          uVar6 = 0x43;
          uVar7 = (uint)*(byte *)((int)param_1 + 5);
          cVar10 = *(char *)(param_1 + 2);
        }
        goto LAB_1406b6d6;
      }
    }
    uVar6 = 0x43;
  }
LAB_1406b6d6:
  FUN_140680a4(*param_1,param_1[1],uVar7,param_2,cVar10,uVar6);
  return;
}

