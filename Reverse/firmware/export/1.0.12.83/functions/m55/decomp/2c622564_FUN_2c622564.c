/* FUN_2c622564 @ 0x2c622564 */

void FUN_2c622564(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,int param_5,
                 int param_6,char *param_7)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  cVar1 = *param_7;
  if (cVar1 == '\0') {
    uVar6 = *(uint *)(param_7 + 4);
    if (uVar6 == 8) {
      bVar2 = *(byte *)(param_5 + param_6);
      *param_3 = bVar2;
      *param_2 = bVar2;
      *param_1 = bVar2;
      if ((*(int *)(param_7 + 0x10) == 0) || ((uint)bVar2 != *(uint *)(param_7 + 0x14)))
      goto LAB_2c6225ea;
    }
    else if (uVar6 == 0x10) {
      bVar2 = *(byte *)(param_5 + param_6 * 2);
      *param_3 = bVar2;
      *param_2 = bVar2;
      *param_1 = bVar2;
      if ((*(int *)(param_7 + 0x10) == 0) ||
         ((uint)*(byte *)(param_5 + param_6 * 2 + 1) +
          (uint)*(byte *)(param_5 + param_6 * 2) * 0x100 != *(int *)(param_7 + 0x14)))
      goto LAB_2c6225ea;
    }
    else {
      uVar11 = param_6 * uVar6;
      uVar7 = 0;
      bVar2 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar6 + uVar11;
        uVar7 = 0;
        do {
          uVar3 = uVar11 >> 3;
          uVar4 = ~uVar11;
          uVar11 = uVar11 + 1;
          uVar7 = (int)(uint)*(byte *)(param_5 + uVar3) >> (uVar4 & 7) & 1U | uVar7 << 1;
        } while (uVar11 != uVar10);
        bVar2 = (byte)((uVar7 * 0xff) / ((1 << (uVar6 & 0xff)) - 1U));
      }
      *param_3 = bVar2;
      *param_2 = bVar2;
      *param_1 = bVar2;
      if ((*(int *)(param_7 + 0x10) == 0) || (*(uint *)(param_7 + 0x14) != uVar7))
      goto LAB_2c6225ea;
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        iVar9 = *(int *)(param_7 + 4);
        if (iVar9 == 8) {
          iVar8 = (uint)*(byte *)(param_5 + param_6) * 4;
          iVar12 = iVar8 + 1;
          iVar9 = iVar8 + 2;
          iVar5 = iVar8 + 3;
        }
        else {
          uVar6 = param_6 * iVar9;
          if (iVar9 == 0) {
            iVar9 = 2;
            iVar12 = 1;
            iVar5 = 3;
            iVar8 = 0;
          }
          else {
            uVar11 = iVar9 + uVar6;
            uVar7 = 0;
            do {
              uVar10 = uVar6 >> 3;
              uVar3 = ~uVar6;
              uVar6 = uVar6 + 1;
              uVar7 = (int)(uint)*(byte *)(param_5 + uVar10) >> (uVar3 & 7) & 1U | uVar7 << 1;
            } while (uVar6 != uVar11);
            iVar8 = uVar7 * 4;
            iVar12 = iVar8 + 1;
            iVar9 = iVar8 + 2;
            iVar5 = iVar8 + 3;
          }
        }
        *param_1 = *(byte *)(*(int *)(param_7 + 8) + iVar8);
        *param_2 = *(byte *)(*(int *)(param_7 + 8) + iVar12);
        *param_3 = *(byte *)(*(int *)(param_7 + 8) + iVar9);
        *param_4 = *(undefined1 *)(*(int *)(param_7 + 8) + iVar5);
        return;
      }
      if (cVar1 == '\x04') {
        if (*(int *)(param_7 + 4) != 8) {
          bVar2 = *(byte *)(param_5 + param_6 * 4);
          *param_3 = bVar2;
          *param_2 = bVar2;
          *param_1 = bVar2;
          *param_4 = *(undefined1 *)(param_5 + param_6 * 4 + 2);
          return;
        }
        bVar2 = *(byte *)(param_5 + param_6 * 2);
        *param_3 = bVar2;
        *param_2 = bVar2;
        *param_1 = bVar2;
        *param_4 = *(undefined1 *)(param_5 + param_6 * 2 + 1);
        return;
      }
      if (cVar1 != '\x06') {
        return;
      }
      if (*(int *)(param_7 + 4) != 8) {
        iVar9 = param_5 + param_6 * 8;
        *param_1 = *(byte *)(param_5 + param_6 * 8);
        *param_2 = *(byte *)(iVar9 + 2);
        *param_3 = *(byte *)(iVar9 + 4);
        *param_4 = *(undefined1 *)(iVar9 + 6);
        return;
      }
      iVar9 = param_5 + param_6 * 4;
      *param_1 = *(byte *)(param_5 + param_6 * 4);
      *param_2 = *(byte *)(iVar9 + 1);
      *param_3 = *(byte *)(iVar9 + 2);
      *param_4 = *(undefined1 *)(iVar9 + 3);
      return;
    }
    if (*(int *)(param_7 + 4) == 8) {
      iVar9 = param_5 + param_6 * 3;
      *param_1 = *(byte *)(param_5 + param_6 * 3);
      *param_2 = *(byte *)(iVar9 + 1);
      bVar2 = *(byte *)(iVar9 + 2);
      *param_3 = bVar2;
      if ((((*(int *)(param_7 + 0x10) == 0) || ((uint)*param_1 != *(uint *)(param_7 + 0x14))) ||
          ((uint)*param_2 != *(uint *)(param_7 + 0x18))) ||
         ((uint)bVar2 != *(uint *)(param_7 + 0x1c))) goto LAB_2c6225ea;
    }
    else {
      iVar12 = param_5 + param_6 * 6;
      *param_1 = *(byte *)(param_5 + param_6 * 6);
      iVar9 = param_6 * 6 + 2;
      *param_2 = *(byte *)(param_5 + iVar9);
      bVar2 = *(byte *)(iVar12 + 4);
      *param_3 = bVar2;
      if (((*(int *)(param_7 + 0x10) == 0) ||
          ((uint)*(byte *)(iVar12 + 1) + (uint)*(byte *)(param_5 + param_6 * 6) * 0x100 !=
           *(int *)(param_7 + 0x14))) ||
         (((uint)*(byte *)(iVar12 + 3) + (uint)*(byte *)(param_5 + iVar9) * 0x100 !=
           *(int *)(param_7 + 0x18) ||
          ((uint)*(byte *)(iVar12 + 5) + (uint)bVar2 * 0x100 != *(int *)(param_7 + 0x1c))))) {
LAB_2c6225ea:
        *param_4 = 0xff;
        return;
      }
    }
  }
  *param_4 = 0;
  return;
}

