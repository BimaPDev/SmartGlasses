/* FUN_100654e8 @ 0x100654e8 */

undefined4 FUN_100654e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  
  uVar1 = DAT_100656b8;
  iVar2 = *(int *)(param_1 + 0x38);
  switch(*(undefined2 *)(param_1 + 0x4c)) {
  case 1:
    *(undefined4 *)(param_1 + 100) = DAT_100656b8;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x6c) = (iVar2 + -1) * 0x1000;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0x1000;
    goto LAB_10065550;
  case 2:
    *(undefined4 *)(param_1 + 100) = 0x1000;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0xfffff000;
    break;
  case 3:
    *(undefined4 *)(param_1 + 100) = DAT_100656b8;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x6c) = (iVar2 + -1) * 0x1000;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x1000;
    *(undefined4 *)(param_1 + 0x70) = 0xfffff000;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    break;
  default:
    if (*(ushort *)(param_1 + 0x4e) < 0xe10) {
      *(byte *)(param_1 + 0x5c) =
           *(byte *)(param_1 + 0x5c) & 0xfd | (*(short *)(param_1 + 0x18) == 0x40) << 1;
      if (*(short *)(param_1 + 0x18) == 0x80) {
        uVar5 = (uint)*(ushort *)(param_1 + 0x54);
        if ((uVar5 != 0) && (uVar3 = (uint)*(ushort *)(param_1 + 0x56), uVar3 < uVar5)) {
          *(uint *)(param_1 + 0x84) = uVar3 * uVar3;
          uVar3 = 0x100;
          *(undefined2 *)(param_1 + 0x7c) = 0;
          *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 1;
          iVar4 = uVar5 * 0x800 + 0x1000;
          *(uint *)(param_1 + 0x80) = uVar5 * uVar5;
          uVar5 = 0x100;
          iVar2 = iVar4;
LAB_100655ee:
          sVar6 = 0xe10 - *(ushort *)(param_1 + 0x4e);
          *(undefined4 *)(param_1 + 0x6c) = 0x800;
          *(undefined4 *)(param_1 + 0x78) = 0x800;
          *(undefined4 *)(param_1 + 100) = 0x1000;
          *(undefined4 *)(param_1 + 0x74) = 0x1000;
          *(undefined4 *)(param_1 + 0x70) = 0;
          *(undefined4 *)(param_1 + 0x68) = 0;
          FUN_10066074(param_1 + 0x6c,param_1 + 0x78,0x800,0x800,iVar2,iVar4,sVar6,uVar5,uVar3,8);
          FUN_10066074(param_1 + 100,param_1 + 0x70,*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x70),0,0,sVar6,uVar5,uVar3,8);
          FUN_10066074(param_1 + 0x68,param_1 + 0x74,*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x74),0,0,sVar6,uVar5,uVar3,8);
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -0x800;
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -0x800;
          return 0;
        }
      }
      else if ((0xff < *(ushort *)(param_1 + 0x58)) && (0xff < *(ushort *)(param_1 + 0x5a))) {
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
        iVar2 = *(short *)(param_1 + 0x54) * 0x1000 + 0x800;
        iVar4 = *(short *)(param_1 + 0x56) * 0x1000 + 0x800;
        uVar5 = 0x10000 / *(ushort *)(param_1 + 0x58) & 0xffff;
        uVar3 = 0x10000 / *(ushort *)(param_1 + 0x5a) & 0xffff;
        goto LAB_100655ee;
      }
    }
    return 0xffffffea;
  case 7:
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = 0x1000;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(int *)(param_1 + 0x6c) = (iVar2 + -1) * 0x1000;
LAB_10065550:
    *(undefined4 *)(param_1 + 0x78) = 0;
    return 0;
  }
  *(int *)(param_1 + 0x78) = (*(int *)(param_1 + 0x3c) + -1) * 0x1000;
  return 0;
}

