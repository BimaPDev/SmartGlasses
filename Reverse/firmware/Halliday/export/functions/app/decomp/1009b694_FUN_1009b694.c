/* FUN_1009b694 @ 0x1009b694 */

uint FUN_1009b694(int *param_1,short *param_2,short *param_3,uint *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte local_4f;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar4 = FUN_1012c654();
  if (iVar4 == 0) {
    uVar12 = *(byte *)(param_2 + 8) & 0xf;
    if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
      if (*param_2 == 0) {
        iVar4 = FUN_1012c48c(param_1,param_2,local_48,&local_38,param_3);
        if (iVar4 != 0) {
          iVar4 = FUN_1008cb9c(local_48);
          if (iVar4 != 0) {
            return uVar12;
          }
          iVar4 = param_1[2];
          param_1[2] = (int)local_48;
          uVar12 = FUN_1009b34c(param_1,param_4,&local_38,param_2[6],
                                *(undefined1 *)((int)param_2 + 0xf),uVar12);
          param_1[2] = iVar4;
          return uVar12;
        }
      }
      else {
        if (*(byte *)((int)param_2 + 0xf) < 0xfd) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_1008c0c0((byte)*param_4 & 0x1f);
        }
        if ((ushort)param_2[1] < 0x100) {
          return uVar12;
        }
        iVar10 = ((int *)param_1[1])[2];
        iVar11 = *(int *)param_1[1];
        uVar5 = FUN_100e8ae8((byte)*param_4 & 0x1f,&local_4f);
        if ((uVar5 & 0xa8) == 0) {
          return uVar12;
        }
        FUN_1011e1a8(&local_4e,&local_4c,&local_4a,local_48,(int)*param_3,(int)param_3[2],
                     (int)param_3[4],(int)param_3[6],
                     (int)(short)((short)*(undefined4 *)(param_2 + 2) + *param_3),
                     (int)(short)((short)*(undefined4 *)(param_2 + 4) + param_3[2]),*param_2,
                     param_2[1],param_2[1],8);
        local_38 = (int)local_4e;
        local_34 = (int)local_4c;
        local_30 = (int)local_4a;
        local_2c = (int)local_48[0];
        iVar6 = FUN_1012a896(&local_38,param_1[2]);
        if (iVar6 != 0) {
          iVar7 = FUN_1008cb9c(&local_38);
          iVar6 = DAT_1009b8f4;
          if (iVar7 != 0) {
            return uVar12;
          }
          sVar2 = ((short)local_30 + 1) - (short)local_38;
          sVar3 = ((short)local_2c + 1) - (short)local_34;
          if ((uint)((int)sVar2 * (int)sVar3) < 0x20) {
            return uVar12;
          }
          if (iVar4 == 0) {
            uVar9 = 0x20;
          }
          else {
            uVar9 = 0x40;
          }
          *(undefined2 *)(DAT_1009b8f4 + 0x18) = uVar9;
          FUN_1013d9b0(iVar6);
          uVar8 = (*param_4 & 0x1fffff) >> 10;
          *(int *)(iVar6 + 0x40) = (int)(uVar8 * local_4f) >> 3;
          *(uint *)(iVar6 + 0x3c) = (uint)(*(ushort *)((int)param_4 + 2) >> 5);
          *(uint *)(iVar6 + 0x34) = uVar5;
          *(uint *)(iVar6 + 0x38) = uVar8;
          *(undefined1 *)(iVar6 + 0x45) = 2;
          *(uint *)(iVar6 + 0x48) = (uint)*(byte *)((int)param_2 + 0xf) << 0x18;
          FUN_1013d9f0(iVar6,1);
          *(short *)(iVar6 + 0x4e) = *param_2;
          *(short *)(iVar6 + 0x50) = (short)*(undefined4 *)param_3;
          *(short *)(iVar6 + 0x52) = (short)*(undefined4 *)(param_3 + 2);
          *(short *)(iVar6 + 0x54) = (short)*(undefined4 *)(param_2 + 2);
          *(short *)(iVar6 + 0x56) = (short)*(undefined4 *)(param_2 + 4);
          sVar1 = param_2[1];
          *(short *)(iVar6 + 0x58) = sVar1;
          *(short *)(iVar6 + 0x5a) = sVar1;
          iVar4 = FUN_100654e8(iVar6);
          if (iVar4 < 0) {
            return uVar12;
          }
          iVar4 = FUN_10138cfa(param_4[2],0);
          if (iVar4 == 0) {
            FUN_1011e848(param_4[2],*(int *)(iVar6 + 0x40) * *(int *)(iVar6 + 0x3c));
            FUN_1011e8f6();
          }
          iVar6 = local_34 - ((int *)param_1[1])[1];
          iVar7 = *param_1;
          iVar4 = local_38 - *(int *)param_1[1];
          FUN_1009af58(param_1,1,&local_38);
          iVar4 = FUN_100653c8(DAT_1009b8f4,param_4[2],
                               iVar7 + ((iVar10 - iVar11) * iVar6 + iVar6 + iVar4) * 2,
                               (int)(short)local_38,(int)(short)local_34,sVar2,sVar3);
          if (iVar4 < 0) {
            return uVar12;
          }
          FUN_1009b254(param_1,&local_38);
          FUN_1009af48();
        }
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}

