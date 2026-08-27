/* FUN_140693b4 @ 0x140693b4 */

int FUN_140693b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char param_5,undefined2 param_6,undefined2 param_7,char param_8,byte param_9,
                short *param_10)

{
  longlong lVar1;
  bool bVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_14069604;
  puVar4 = (undefined4 *)FUN_14066108(param_2);
  local_34 = 0;
  if ((puVar4 != (undefined4 *)0x0) && (piVar9 = (int *)*puVar4, *piVar9 != 0)) {
    switch(param_4) {
    case 200:
      iVar12 = piVar9[5];
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1406960c,0x452,DAT_14069608);
    case 0xd0:
      if (piVar9[6] == 0) goto LAB_1406942e;
      goto LAB_14069496;
    case 0xd8:
      iVar12 = piVar9[7];
      break;
    case 0xe0:
      iVar12 = piVar9[8];
      break;
    case 0xe8:
      if (piVar9[4] == 0) {
        iVar12 = 0x42;
      }
      else {
        iVar12 = 0;
      }
      if (*param_10 == 0x1849) {
        iVar6 = 0x41;
      }
      else {
        iVar6 = 0x14;
      }
      if ((0x674 < *(ushort *)(DAT_14069610 + 0x94)) ||
         (iVar6 = FUN_14073468(&local_34,0,iVar6 * 0x16), iVar6 != 0)) {
        iVar12 = 0x4b;
        goto LAB_14069430;
      }
      sVar3 = FUN_14073698(local_34);
      *(short *)(DAT_14069610 + 0x94) = sVar3 + *(short *)(DAT_14069610 + 0x94);
      if (iVar12 != 0) goto LAB_14069430;
      param_4 = 200;
      bVar2 = true;
      goto LAB_1406949a;
    }
    if (iVar12 != 0) {
LAB_14069496:
      bVar2 = false;
LAB_1406949a:
      uVar13 = FUN_1406cc4c(param_1,param_2,param_3,param_4,0x17,0x44,DAT_14069614,&local_30);
      uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      iVar12 = (int)uVar13;
      if (iVar12 != 0) {
        if (local_34 != 0) {
          sVar3 = FUN_14073698();
          *(short *)(DAT_14069610 + 0x94) = *(short *)(DAT_14069610 + 0x94) - sVar3;
          FUN_140735a8(local_34);
        }
        goto LAB_14069430;
      }
      if (param_5 == '\0') {
        bVar8 = 0;
      }
      else {
        bVar8 = 2;
      }
      *(undefined2 *)(local_30 + 0x26) = param_6;
      *(undefined2 *)(local_30 + 0x28) = param_7;
      *(undefined2 *)(local_30 + 0x24) = 0;
      *(undefined4 *)(local_30 + 0x20) = 0;
      if (bVar2) {
        bVar8 = bVar8 | 8;
        *(byte *)(local_30 + 0x2c) = bVar8;
        if (param_8 != '\0') {
LAB_140694e6:
          uVar10 = (uint)param_9 << 4;
          *(byte *)(local_30 + 0x2c) = bVar8 | 1;
          if ((uVar10 & 0xfc0) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x44,DAT_1406961c,0x489,DAT_14069608,0x30,(uint)param_9);
          }
          *(byte *)(local_30 + 0x2c) = bVar8 | 1 | (byte)uVar10;
          uVar11 = *(undefined4 *)param_10;
          uVar5 = *(undefined4 *)(param_10 + 2);
          uVar7 = *(undefined4 *)(param_10 + 4);
          *(undefined4 *)(local_30 + 0x39) = *(undefined4 *)(param_10 + 6);
          *(undefined4 *)(local_30 + 0x2d) = uVar11;
          *(undefined4 *)(local_30 + 0x31) = uVar5;
          *(undefined4 *)(local_30 + 0x35) = uVar7;
          if (!bVar2) goto LAB_14069526;
        }
        if (local_34 == 0) {
          *(undefined4 *)(local_30 + 0x40) = 0;
          uRam0000000d = 0;
          uVar5 = 0;
        }
        else {
          if ((int)((uint)*(byte *)(local_34 + 0x2d) << 0x1c) < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = local_34 + ((*(byte *)(local_34 + 0x2d) & 0xf) + 3) * 4;
          }
          *(int *)(local_30 + 0x40) = local_34;
          lVar1 = (ulonglong)DAT_14069618 *
                  (ulonglong)((uint)*(ushort *)(local_34 + 4) + (uint)*(ushort *)(local_34 + 8));
          uVar5 = (undefined4)lVar1;
          *(char *)(iVar6 + 0xd) = (char)((uint)((int)((ulonglong)lVar1 >> 0x20) << 0x14) >> 0x18);
        }
      }
      else {
        *(byte *)(local_30 + 0x2c) = bVar8;
        if (param_8 != '\0') goto LAB_140694e6;
      }
LAB_14069526:
      FUN_1406d4d4(local_30,uVar5);
      FUN_1406cdd0(param_1,local_30);
      goto LAB_14069430;
    }
  }
LAB_1406942e:
  iVar12 = 0x42;
LAB_14069430:
  if (*DAT_14069604 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return iVar12;
}

