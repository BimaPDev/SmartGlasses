/* FUN_1407de10 @ 0x1407de10 */

undefined4 FUN_1407de10(int param_1,char *param_2,byte *param_3,undefined4 param_4,ushort param_5)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  code *pcVar9;
  
  bVar1 = *param_3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (1 < *(byte *)(param_1 + 0x2c)) {
    uVar8 = param_5 + 4;
    pbVar3 = (byte *)FUN_140759b8();
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = *pbVar3 & 0xf0;
      cVar2 = *(char *)(param_1 + 0x11);
      bVar7 = cVar2 + 1U & 0xf;
      if (bVar7 == 0xb) {
        bVar7 = 0xc;
      }
      *(byte *)(param_1 + 0x11) = bVar7;
      pbVar3[1] = 3;
      pbVar3[2] = pbVar3[2] & 0xfc;
      pbVar3[3] = pbVar3[3] & 0xfc;
      *pbVar3 = *pbVar3 & 0xf | cVar2 << 4;
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(char *)(param_1 + 10) = *param_2;
      *(byte *)(param_1 + 0xb) = bVar1 >> 2;
      pbVar3[3] = pbVar3[3] & 3 | *param_2 << 2;
      pbVar3[2] = pbVar3[2] & 3 | *param_2 << 2;
      FUN_140e5278(pbVar3 + 4,param_4,(uint)param_5);
      uVar4 = FUN_1408e628(*(undefined4 *)(param_1 + 0x28),pbVar3,uVar8,0);
      piVar5 = (int *)FUN_1407c988(param_3,pbVar3 + 4,uVar8 & 0xffff,3);
      if (piVar5 == (int *)0x0) {
        FUN_14075b28(pbVar3);
        return 0x29;
      }
      iVar6 = FUN_1407a230();
      if (iVar6 == 0) {
        if (((*(int *)(param_1 + 0x18) != 0) &&
            (pcVar9 = *(code **)(*(int *)(param_1 + 0x18) + 4), pcVar9 != (code *)0x0)) &&
           ((piVar5[1] != 0 || (piVar5[2] != 0)))) {
          uVar4 = (*pcVar9)(param_1,param_3,piVar5);
        }
        if ((((int)((uint)param_3[1] << 0x1c) < 0) && (param_3[0x10] != 0)) && (param_2[3] != '\0'))
        {
          *(undefined1 *)(param_1 + 0xd) = 1;
        }
        *(undefined1 *)(param_1 + 0x14) = 3;
      }
      else {
        uVar4 = 0x18;
      }
      FUN_14075b28(pbVar3);
      if (*piVar5 != 0) {
        FUN_14075b28();
      }
      if (piVar5[1] != 0) {
        FUN_14075b28();
        piVar5[1] = 0;
      }
      if (piVar5[2] != 0) {
        FUN_14075b28();
        piVar5[2] = 0;
      }
      if (piVar5[3] != 0) {
        FUN_14075b28();
        piVar5[3] = 0;
      }
      if (piVar5[4] != 0) {
        FUN_14075b28();
        piVar5[4] = 0;
      }
      if (piVar5[7] != 0) {
        FUN_14075b28();
        piVar5[7] = 0;
      }
      if (piVar5[5] != 0) {
        FUN_14075b28();
        piVar5[5] = 0;
      }
      if (piVar5[6] != 0) {
        FUN_14075b28();
        piVar5[6] = 0;
      }
      if (piVar5[8] != 0) {
        FUN_14075b28();
        piVar5[8] = 0;
      }
      FUN_14075b28(piVar5);
      return uVar4;
    }
  }
  return 1;
}

