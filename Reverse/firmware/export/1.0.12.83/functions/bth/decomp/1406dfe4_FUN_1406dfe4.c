/* FUN_1406dfe4 @ 0x1406dfe4 */

undefined4
FUN_1406dfe4(int param_1,undefined4 param_2,byte param_3,byte *param_4,char param_5,int param_6)

{
  undefined2 uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 local_32;
  byte *local_30;
  int local_2c;
  
  iVar3 = DAT_1406e150;
  local_2c = *DAT_1406e148;
  iVar9 = *(int *)(DAT_1406e14c + (param_1 + 6) * 4);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e158,0x1ba,DAT_1406e154);
  }
  if (*param_4 < 0x1b) {
    iVar7 = DAT_1406e150 + (uint)*param_4 * 0xc;
    if (*(int *)(iVar7 + 4) != 0) {
      local_32 = *(undefined2 *)(iVar7 + 8);
      local_30 = (byte *)0x0;
      iVar7 = FUN_14073468(&local_30,4,local_32,10);
      if (iVar7 == 0) {
        pbVar2 = local_30;
        if (local_30 != (byte *)0x0) {
          pbVar2 = local_30 + *(ushort *)(local_30 + 6) + 0x30;
        }
        iVar3 = FUN_14072b7c(pbVar2,param_4 + 1,&local_32,0xc,
                             *(undefined4 *)(iVar3 + (uint)*param_4 * 0xc + 4));
        if (iVar3 == 0) {
          if (param_5 != '\0') {
            puVar8 = (undefined2 *)(param_6 + -2);
            do {
              pbVar2 = local_30;
              if (local_30 != (byte *)0x0) {
                pbVar2 = local_30 +
                         (uint)*(ushort *)(local_30 + 6) + (uint)*(ushort *)(local_30 + 4) + 0x30;
              }
              puVar8 = puVar8 + 1;
              uVar1 = *puVar8;
              *pbVar2 = (byte)uVar1;
              pbVar2[1] = (byte)((ushort)uVar1 >> 8);
              FUN_1407373c(local_30,2);
            } while ((undefined2 *)(param_6 + (uint)(byte)(param_5 - 1) * 2) != puVar8);
          }
          FUN_140736a8(local_30,2);
          if (local_30 == (byte *)0x0) {
            bVar5 = 0xfe;
            bVar6 = 0xff;
            pbVar2 = (byte *)0x0;
          }
          else {
            pbVar2 = local_30 + *(ushort *)(local_30 + 6) + 0x30;
            bVar5 = (byte)(*(ushort *)(local_30 + 4) - 2);
            bVar6 = (byte)(*(ushort *)(local_30 + 4) - 2 >> 8);
          }
          *pbVar2 = bVar5;
          pbVar2[1] = bVar6;
          FUN_140736a8(local_30,1);
          pbVar2 = local_30;
          if (local_30 != (byte *)0x0) {
            pbVar2 = local_30 + *(ushort *)(local_30 + 6) + 0x30;
          }
          *pbVar2 = param_3;
          FUN_140736a8(local_30,1);
          pbVar2 = local_30;
          if (local_30 != (byte *)0x0) {
            pbVar2 = local_30 + *(ushort *)(local_30 + 6) + 0x30;
          }
          *pbVar2 = *param_4;
          uVar4 = FUN_140711d0(param_1,param_2,*(undefined1 *)(iVar9 + 0x18),0,local_30);
        }
        else {
          uVar4 = 0x41;
        }
        FUN_140735a8(local_30);
      }
      else {
        uVar4 = 0x4b;
      }
      goto LAB_1406e108;
    }
  }
  uVar4 = 0x43;
LAB_1406e108:
  if (*DAT_1406e148 == local_2c) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

