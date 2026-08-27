/* FUN_2c625b00 @ 0x2c625b00 */

uint FUN_2c625b00(int param_1,uint param_2,char *param_3,byte *param_4,byte *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;
  
  if ((int)param_2 < 1) {
    uVar5 = (uint)*param_4;
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = (uint)*param_4;
    uVar6 = 0;
    pbVar9 = param_4;
    do {
      uVar8 = uVar5 + uVar6 & 7;
      if (uVar8 == 0) {
        if (*param_3 == '\0') {
          if (*(char *)(param_1 + 0x10) == '\0') {
            *param_3 = *(char *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            cVar1 = *param_3;
          }
          else {
            FUN_2c62de74(param_1,param_3,1,0,pbVar9);
            cVar1 = *param_3;
          }
          if (cVar1 == '\0') {
            return 0x1000;
          }
        }
        if (*(char *)(param_1 + 0x10) == '\0') {
          *param_5 = *(byte *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        }
        else {
          FUN_2c62de74(param_1,param_5,1,0,pbVar9);
        }
        *param_3 = *param_3 + -1;
        uVar5 = (uint)*param_4;
      }
      iVar3 = 8 - uVar8;
      uVar2 = uVar6 & 0xff;
      if ((int)(param_2 - uVar6) < iVar3) {
        iVar3 = param_2 - uVar6;
      }
      uVar6 = uVar6 + iVar3;
      uVar7 = (ushort)(((int)(uint)*param_5 >> uVar8) << uVar2) | uVar7;
    } while ((int)uVar6 < (int)param_2);
    uVar6 = (int)(short)uVar7 & (1 << (param_2 & 0xff)) - 1U & 0xffff;
  }
  iVar3 = -(uVar5 + param_2);
  bVar4 = (byte)(uVar5 + param_2) & 7;
  if (-1 < iVar3) {
    bVar4 = -((byte)iVar3 & 7);
  }
  *param_4 = bVar4;
  return uVar6;
}

