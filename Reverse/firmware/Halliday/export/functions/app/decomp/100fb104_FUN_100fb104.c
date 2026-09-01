/* FUN_100fb104 @ 0x100fb104 */

int FUN_100fb104(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (param_1 == (int *)0x0) {
    return 0x28;
  }
  bVar3 = false;
  puVar5 = (uint *)param_1[8];
LAB_100fb120:
  do {
    pbVar2 = param_2;
    param_2 = pbVar2 + 4;
    uVar4 = (uint)*pbVar2;
    switch(uVar4) {
    case 4:
      iVar7 = FUN_100faf14(param_1,*(undefined2 *)(pbVar2 + 2));
      if (iVar7 != 0) goto LAB_100fb148;
      bVar3 = true;
      puVar5 = (uint *)param_1[8];
      goto LAB_100fb120;
    default:
      iVar7 = 0;
      param_1[8] = (int)puVar5;
LAB_100fb148:
      if (!bVar3) {
        return iVar7;
      }
      if (param_1[5] != 0) {
        if (*param_1 != 0) {
          (**(code **)(param_1[7] + 8))();
        }
        *param_1 = 0;
      }
      param_1[8] = 0;
      param_1[9] = 0;
      return iVar7;
    case 8:
    case 9:
      iVar7 = 0x18;
      uVar6 = (uint)(byte)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      break;
    case 0xc:
    case 0xd:
      iVar7 = 0x10;
      uVar6 = (uint)CONCAT11((byte)*puVar5,*(byte *)((int)puVar5 + 1));
      puVar5 = (uint *)((int)puVar5 + 2);
      break;
    case 0xe:
    case 0xf:
      iVar7 = 0x10;
      uVar6 = (uint)(ushort)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 2);
      break;
    case 0x10:
    case 0x11:
      uVar6 = *puVar5;
      iVar7 = 0;
      uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
      puVar5 = puVar5 + 1;
      break;
    case 0x12:
    case 0x13:
      iVar7 = 0;
      uVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      break;
    case 0x14:
    case 0x15:
      uVar6 = (uint)*(byte *)((int)puVar5 + 1) << 8 | (uint)(byte)*puVar5 << 0x10 |
              (uint)*(byte *)((int)puVar5 + 2);
      iVar7 = 8;
      puVar5 = (uint *)((int)puVar5 + 3);
      break;
    case 0x16:
    case 0x17:
      iVar7 = 8;
      uVar6 = (uint)*(byte *)((int)puVar5 + 1) << 8 | (uint)*(byte *)((int)puVar5 + 2) << 0x10 |
              (uint)(byte)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 3);
      break;
    case 0x18:
    case 0x19:
      puVar5 = (uint *)((int)puVar5 + (uint)pbVar2[1]);
      if (puVar5 <= (uint *)param_1[9]) goto LAB_100fb224;
      iVar7 = 0x55;
      goto LAB_100fb148;
    }
    if ((int)(uVar4 << 0x1f) < 0) {
      uVar6 = (int)(uVar6 << iVar7) >> iVar7;
    }
    bVar1 = pbVar2[1];
    uVar4 = (uint)*(ushort *)(pbVar2 + 2);
    if (bVar1 == 2) {
      *(short *)(param_3 + uVar4) = (short)uVar6;
    }
    else if ((bVar1 == 4) || (bVar1 != 1)) {
      *(uint *)(param_3 + uVar4) = uVar6;
    }
    else {
      *(char *)(param_3 + uVar4) = (char)uVar6;
    }
  } while( true );
LAB_100fb224:
  if (uVar4 == 0x18) {
    FUN_1011ea40((uint)*(ushort *)(pbVar2 + 2) + param_3);
  }
  goto LAB_100fb120;
}

