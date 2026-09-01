/* FUN_10138d28 @ 0x10138d28 */

undefined4 FUN_10138d28(uint *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *param_2;
  uVar8 = (uint)*(ushort *)(iVar7 + 0x14);
  if ((uVar8 != 0) && (uVar6 = (uint)*(ushort *)(iVar7 + 0x16), uVar6 != 0)) {
    uVar4 = (uint)*(ushort *)(iVar7 + 0x1a);
    switch(uVar4) {
    case 0:
    case 7:
      bVar2 = 4;
      bVar3 = (byte)*param_1;
      break;
    case 1:
      bVar2 = 5;
      bVar3 = (byte)*param_1;
      break;
    default:
      goto LAB_10138d96;
    case 3:
      bVar2 = 0x1c;
      bVar3 = (byte)*param_1;
      break;
    case 4:
      bVar2 = 0xe;
      bVar3 = (byte)*param_1;
      break;
    case 5:
      bVar2 = 0x16;
      bVar3 = (byte)*param_1;
      break;
    case 6:
      bVar2 = 1;
      bVar3 = (byte)*param_1;
      break;
    case 8:
      bVar2 = 0x17;
      bVar3 = (byte)*param_1;
      break;
    case 9:
      bVar2 = 0x1a;
      bVar3 = (byte)*param_1;
      break;
    case 10:
      bVar2 = 9;
      bVar3 = (byte)*param_1;
      break;
    case 0xb:
      bVar2 = 0x15;
      bVar3 = (byte)*param_1;
      break;
    case 0xc:
      bVar2 = 10;
      bVar3 = (byte)*param_1;
    }
    *(byte *)param_1 = bVar3 & 0xe0 | bVar2;
    *(byte *)param_1 = (byte)*param_1 & 0x1f;
    uVar5 = *param_1 & 0xffe003ff | (uVar8 & 0x7ff) << 10;
    *param_1 = uVar5;
    uVar1 = param_2[1];
    *(ushort *)((int)param_1 + 2) = (ushort)(uVar5 >> 0x10) & 0x1f | (ushort)((uVar6 & 0x7ff) << 5);
    param_1[2] = uVar1;
    if ((uVar4 == 6) || (uVar4 - 9 < 2)) {
      uVar8 = *(uint *)(iVar7 + 0x20);
    }
    else if (uVar4 == 0xb) {
      uVar8 = ((uVar8 & 0x7ff) + 3 & 0xfffffffc) * ((uVar6 & 0x7ff) + 3 & 0xfffffffc);
    }
    else {
      if (uVar4 != 0xc) {
        param_1[1] = (uint)*(ushort *)(iVar7 + 0x18) * uVar6 * uVar8;
        return 0;
      }
      uVar8 = (uVar8 & 0x7ff) * (uVar6 & 0x7ff) + 0x400;
    }
    param_1[1] = uVar8;
    return 0;
  }
LAB_10138d96:
  return 0xffffffea;
}

